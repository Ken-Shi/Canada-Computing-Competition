import java.util.*;

public class Ideone
{
	public static void main (String[] args)
	{
		Scanner s = new Scanner(System.in);
		String p1 = s.next();
		String p2 = s.next();
		char r[] = new char[10];
		for(int i = 0;i < 10;i += 2){
		    char x = p1.charAt(i),x2 = p1.charAt(i+1), y = p2.charAt(i),y2 = p2.charAt(i+1);
		    if(x >= x2) {
		        char temp = x;
		        x = x2;
		        x2 = temp;
		    }
		    if(y >= y2) {
		        char temp = y;
		        y = y2;
		        y2 = temp;
		    }
		}
		for(int i = 0;i < 10;i++){
		    if(p1.charAt(i) == p2.charAt(i)) r[i] = p1.charAt(i);
		    else  r[i] = 'x';
		}
		for(int i = 0;i < 10;i += 2){
		    if(r[i] == r[i+1] && r[i] == 'x') r[i] = 'X';
		}
		int k = s.nextInt();
		for(int i = 0;i < k;i++){
		    String b = s.next();
		    int counter = 0;
		    int flag = 0;
		    for(int j = 0;j < 5;j++){
		        if(b.charAt(j) != r[counter] && b.charAt(j) != r[counter + 1]&& r[counter] != 'x' && (r[counter] != 'X')) flag = 1;
		        if((int)b.charAt(j) >= 97 && (int)b.charAt(j) <= 101 && r[counter] == 'X') flag = 1;
		        counter += 2;
		    }
		    if(flag != 1) System.out.println("Possible baby.");
		    else System.out.println("Not their baby!");
		}
	}
}
