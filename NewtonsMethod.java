import java.util.Scanner;

/**
 * Created by chessmaster on 2015-12-30.
 */
public class NewtonsMethod {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        System.out.print("Initial guess x0: ");
        double x = Double.parseDouble(input.nextLine());
        Scanner input2 = new Scanner(System.in);
        System.out.print("Number of iterations: ");
        int n = Integer.parseInt(input2.nextLine());
        for (int i=0; i<n; i++) {
            double y = Math.pow(x-1,2);   // Sample function
            double yprime = 2*(x-1);        // Sample derivative
            x = x - y/yprime;
            System.out.printf("x%d = %f%n", i+1, x);
        }
    }
}

