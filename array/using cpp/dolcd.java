import java.util.Scanner;

class totalCadbury {
    int count = 0;
    void count(int x, int y) {
        //base condition
        if (x == 1) {
            count += y;
        } else if (y == 1) {
            count += x;
        }else if(x==y){
            count++;
        }
        //recursion condiiton
        else if (y < x) {
            count++;
            x = x - y;
            count(x, y);
        } else if (y > x) {
            count++;
            y = y - x;
            count(x, y);
        }
    }
    void show(){
        System.out.println(count);
    }
}
public class DoleOut {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int l_min = sc.nextInt();
        int l_max = sc.nextInt();
        int w_min = sc.nextInt();
        int w_max = sc.nextInt();
        totalCadbury obj = new totalCadbury();
        for(int i=l_min;i<=l_max;i++){
            for(int j=w_min;j<=w_max;j++){
                //for the case ixj (5x3) and so on
                obj.count(i,j);
            }
        }
        obj.show();
    }
}
