import java.util.Scanner;
public class Ideone
{
	public static void main (String[] args)
	{
		Scanner s = new Scanner(System.in);
		int k = s.nextInt();
		for(int i = 0; i < k;i++){
		    String str = s.next();
		    int len = str.length();
		    int counter = 0;
		    for(int j = 0;j < len;j++){
		        char x = str.charAt(j);
		        if((int)x >= 48 && (int)x <= 57){
		            System.out.print(x);
		            counter ++;
		            if(counter == 3 || counter == 6) System.out.print("-");
		        }else if((int)x >= 65 && (int)x <= 90){
		            if((int)x >= 65 && (int)x <= 67) System.out.print("2");
		            else if((int)x >= 68 && (int)x <= 70) System.out.print("3");
		            else if((int)x >= 71 && (int)x <= 73) System.out.print("4");
		            else if((int)x >= 74 && (int)x <= 76) System.out.print("5");
		            else if((int)x >= 77 && (int)x <= 79) System.out.print("6");
		            else if((int)x >= 80 && (int)x <= 83) System.out.print("7");
		            else if((int)x >= 84 && (int)x <= 86) System.out.print("8");
		            else if((int)x >= 87 && (int)x <= 90) System.out.print("9");
		            
		            counter++;
		            if(counter == 3 || counter == 6) System.out.print("-");
		        }
		        if(counter >= 10) {
		    	System.out.print("\n");
		    	counter = 0;
		    	len = 0;
		    }
		    }
		    
		}
	}
}
