import java.math.BigInteger;
import java.util.Scanner;

class Solution
{
    public static void main (String args[])
    {
        Scanner sc = new Scanner(System.in);
        
        while (sc.hasNext())
        {
            BigInteger X = sc.nextBigInteger();
            BigInteger Y = sc.nextBigInteger();
            
            
            System.out.printf("%s\n", X.multiply(Y));
        }
        sc.close() ;
    }
}