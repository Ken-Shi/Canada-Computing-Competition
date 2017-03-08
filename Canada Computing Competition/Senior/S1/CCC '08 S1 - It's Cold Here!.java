import java.util.Scanner;
public class silly{
    public static void main(String arg[]){
        Scanner s = new Scanner(System.in);
        int max = 2147483647;
        String hei = " ";
        while(s.hasNext()){
            String thing = s.next();
            int num = s.nextInt();
            if(max > num){
                max = num;
                hei = thing;
            }
        }
        System.out.println(hei);
    }
}
