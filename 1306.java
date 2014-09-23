import java.io.*;
import java.math.BigInteger;
import java.util.Scanner;

class Main{
	
	public static void main(String[]args){
		
		BigInteger four = new BigInteger("4");
		Scanner scan = new Scanner(new InputStreamReader(System.in));
		String num = null;
		int i,numero;
		numero = Integer.parseInt(scan.next());
		
		for(i = 0; i < numero; i++){
			num = scan.next();
			if(new BigInteger(num).mod(four)==BigInteger.ZERO)
				System.out.println("YES");
			else
				System.out.println("NO");
			
		}
	}
}
