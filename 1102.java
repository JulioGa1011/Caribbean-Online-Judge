import java.io.*;
import java.math.BigInteger;
import java.util.Scanner;

class Main{
	
	public static void main(String[]args){
		
		BigInteger once = new BigInteger("11");
		Scanner scan = new Scanner(new InputStreamReader(System.in));
		String num = null;

		num = scan.next();
		while(!num.equals("0")){
			if(new BigInteger(num).mod(once)==BigInteger.ZERO)
				System.out.println(num + " is a multiple of 11.");
			else
				System.out.println(num + " is not a multiple of 11.");
			num = scan.next();
		}
	}
}
