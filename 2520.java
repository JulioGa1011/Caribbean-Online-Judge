import java.util.*;
import java.io.*;

class Main{
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		List <Integer> relleno = new ArrayList<Integer>();
		List <Integer> grabados = new ArrayList<Integer>();
		List <Integer> primera = new ArrayList<Integer>();
		List <Integer> segunda = new ArrayList<Integer>();
		int t = 0, n = 0, p = 0, s = 0, f = 0, res = 0, aux = 0;
		t = sc.nextInt();
		while(t-- != 0){
			relleno = new ArrayList<Integer>();
			grabados = new ArrayList<Integer>();			
			primera = new ArrayList<Integer>();
			segunda = new ArrayList<Integer>();
			n = sc.nextInt();
			p = sc.nextInt();
			s = sc.nextInt();
			f = sc.nextInt();
			
			for(int i = 1; i <= s; i++){
				aux = sc.nextInt();
				grabados.add(aux);
			}			
			
			for(int i = 1; i <= f; i++){
				aux = sc.nextInt();
				relleno.add(aux);
			}
			for(int i = p + 1; i <= n; i++){
				if(!relleno.contains(i) && !grabados.contains(i)){
					primera.add(i);
				}
			}
			
			for(int i = 1; i <= n; i++){
				if((relleno.contains(i) || i <= p) && grabados.contains(i)){
					segunda.add(i);
				}
			}
			System.out.print(primera.size());
			for(Integer i : primera){
				System.out.print(" " + i);
			}
			System.out.println();
			System.out.print(segunda.size());
			for(Integer i : segunda){
				System.out.print( " " + i);
			}
			System.out.println();
		}
	
	}
}