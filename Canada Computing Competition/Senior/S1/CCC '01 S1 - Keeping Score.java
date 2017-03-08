import java.util.Scanner;
public class hehe{
    public static void main(String arg[]){
        Scanner s = new Scanner(System.in);
        String thing = s.next();
        int len = thing.length();
        System.out.print("Cards Dealt              Points");
        int point = 0;
        int charactor = 0;
        int total = 0;
        for(int i = 0;i < len;i++){
            char t = thing.charAt(i);
            if(t == 'C') {
                System.out.print("\nClubs ");
                point = 0;
                charactor = 0;
            }else if(t == 'D'){
                if(charactor == 0) point += 3;
                if(charactor == 1) point += 2;
                if(charactor == 2) point += 1;
                charactor = 0;
                System.out.print("              " + point + "\nDiamonds ");
                total += point;
                point = 0;
            }else if(t == 'H'){
                if(charactor == 0) point += 3;
                if(charactor == 1) point += 2;
                if(charactor == 2) point += 1;
                charactor = 0;
                System.out.print("              " + point + "\nHearts ");
                total += point;
                point = 0;
            }else if(t == 'S'){
                if(charactor == 0) point += 3;
                if(charactor == 1) point += 2;
                if(charactor == 2) point += 1;
                charactor = 0;
                System.out.print("              " + point + "\nSpades ");
                total += point;
                point = 0;
            }else if((int)t >= 50 && (int)t <= 57){
                System.out.print(t + " ");
                charactor ++;
            }else if(t == 'T'){
                System.out.print("T ");
                charactor ++;
            }else if(t == 'J'){
                System.out.print("J ");
                point += 1;
                charactor ++;
            }else if(t == 'Q'){
                System.out.print("Q ");
                point += 2;
                charactor ++;
            }else if(t == 'K'){
                System.out.print("K ");
                point += 3;
                charactor ++;
            }else if(t == 'A'){
                System.out.print("A ");
                point += 4;
                charactor ++;
            }
            
        }
        if(charactor == 0) point += 3;
        if(charactor == 1) point += 2;
        if(charactor == 2) point += 1;

        System.out.println("              " + point);
        total += point;
        System.out.println("                       Total " + total);
    }
}
