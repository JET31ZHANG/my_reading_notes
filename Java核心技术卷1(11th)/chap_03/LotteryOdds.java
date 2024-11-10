import java.util.*;

/**
 * This program demonstrates a <code>for</code> loop.
 * @version 1.20 2004-02-10
 * @author Cay Horstmann
*/

public class LotteryOdds {
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        System.out.print("How many numbers do you need to draw? ");
        int k = in.nextInt();

        System.outprint("What is the highest number do you can draw? ");
        int n = in.nextInt();

        /*
         * compute binomial coefficient n*(n-1)*(n-2)*...*(n-k+1) / (1*2*3*...*k)
        */

        int LotteryOdds = 1;
        for (int i = 1; i <= k; i++)
        {
            LotteryOdds *= (n - i + 1) / i;
        }

        System.out.println("Your odds are 1 in " + LotteryOdds + ". Good luck!");
    }
}