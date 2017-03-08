#include <stdio.h>
#include <string.h>
#define MAX_LEN 200
char a[MAX_LEN + 10];
char b[MAX_LEN + 10];
int va[MAX_LEN + 10]; 
int vb[MAX_LEN + 10];
int vc[MAX_LEN + 10]; 
int Substract( int * p1, int * p2, int nLen1, int nLen2)
{
    int i;
    if( nLen1 < nLen2 )
        return -1;
    if( nLen1 == nLen2 )
    {
        for( i = nLen1-1; i >= 0; i -- )
        {
            if( p1[i] > p2[i] )           break;
            else if( p1[i] < p2[i] )   return -1; 
        }
    }
    for( i = 0; i < nLen1; i ++ )
    {
        p1[i] -= p2[i];
        if( p1[i] < 0 )
        {
            p1[i]+=10;
            p1[i+1] --;
        }
    }
    for( i = nLen1 -1 ; i >= 0 ; i-- )
        if( p1[i] )
            return i + 1;
    return 0;
}
int main()
{
    int test;
    scanf("%d",&test);
    while(test--){
        scanf("%s", a);
        scanf("%s", b);
        int i, j;
        int lena = strlen(a);
        memset( va, 0, sizeof(va));
        memset( vb, 0, sizeof(vb));
        memset(vc, 0, sizeof(vc));
        for( j = 0, i = lena - 1;i >= 0 ; i --)
            va[j++] = a[i] - '0';
        int lenb = strlen(b);
        for( j = 0, i = lenb - 1;i >= 0 ; i --)
            vb[j++] = b[i] - '0';
        if( lena < lenb )
        {
            printf("0\n%s\n\n",a);
            continue;
        }
        int nTimes = lena - lenb;
        if(nTimes > 0)
        {
            for( i = lena -1; i >= nTimes; i -- )
                vb[i] = vb[i-nTimes];
            for( ; i >= 0; i--)
                vb[i] = 0;
            lenb = lena;
        }
        for( j = 0 ; j <= nTimes; j ++ )
        {
            int nTmp;
            while( (nTmp = Substract(va, vb+j, lena, lenb-j)) >= 0)
            {
                lena = nTmp;
                vc[nTimes-j]++; 
            }
        }
        for( i = MAX_LEN ; (i >= 0) && (vc[i] == 0); i -- );
        if( i >= 0)
            for( ; i>=0; i--)
                printf("%d", vc[i]);
        else
            printf("0");
        printf("\n");
        for( i = MAX_LEN ; (i >= 0) && (va[i] == 0); i -- );
        if( i >= 0)
            for( ; i>=0; i--)
                printf("%d", va[i]);
        else
            printf("0");
        printf("\n\n");
    }
    return 0;
}
