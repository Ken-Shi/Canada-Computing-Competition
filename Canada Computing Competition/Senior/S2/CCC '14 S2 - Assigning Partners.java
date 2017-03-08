import java.util.Scanner;
public class AssigningPartners{
	public static void main(String arg[]){
		Scanner s = new Scanner(System.in);
		int k = s.nextInt();
		String a[] = new String[k];
		String b[] = new String[k];
		for(int i = 0;i < k;i++){
			a[i] = s.next();
		}
		int flag = 0;
		for(int i = 0;i < k;i++){
			b[i] = s.next();
		}
		for(int i = 0;i < k;i++){
		    if(a[i].equals(b[i])) flag = 1;
			for(int j = i;j < k;j++){
				if(b[i].equals(a[j]))
					if(!b[j].equals(a[i]) || i == j){
						flag = 1;
						break;
					}
			}
		}
		if(k % 2 == 1) flag = 1;
		if(flag == 0) System.out.println("good");
		else System.out.println("bad");
	}
}
