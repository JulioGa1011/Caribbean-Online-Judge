import java.util.Scanner;
import java.util.PriorityQueue;
import java.util.Queue;
import java.util.Stack;
import java.util.StringTokenizer;
import java.util.concurrent.LinkedBlockingQueue;

class Main{

	public static int evaluate(int x, int y, String op) {
		
		char o = op.charAt(0);
		int r = 0;
		switch(o) {
			case '+': r = y + x;
			break;
			case '-':	r = y - x;
			break;
			case'*':	r = y * x;
			break;
			default:	r = y / x;
			break;
		}
		return r;
	}
	
	public static boolean isOperand(String c) {
		
		try {
			Integer.valueOf(c);
		}catch (Exception e) {
			return false;
		}
		return true;
	}
	
	public static void main(String[]args) {
		
		int n = 0, x = 0, y = 0;
		String line, op;
		StringTokenizer st;
		Stack<Integer> stack = new Stack<Integer>();
		Queue<Integer> qu = new LinkedBlockingQueue<Integer>();
		Queue<Integer> pq = new PriorityQueue<Integer>();
		
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
		sc.nextLine();

		for(int i = 0; i < n; i++) {
			stack = new Stack<Integer>();
			qu = new LinkedBlockingQueue<Integer>();
			pq = new PriorityQueue<Integer>();

			line = sc.nextLine();
			
			st = new StringTokenizer(line,  " ");
			
			while (st.hasMoreElements()) {

				op = st.nextToken();
				if (isOperand(op)) {
					stack.push(Integer.valueOf(op));
					qu.add(Integer.valueOf(op));
					pq.add(Integer.valueOf(op));
				} else {
					x = stack.peek();
					stack.pop();
					y = stack.peek();
					stack.pop();
					stack.push(evaluate(x, y, op));

					x = qu.poll();
					y = qu.poll();
					qu.add(evaluate(x, y, op));

					x = pq.poll();
					y = pq.poll();
					pq.add(evaluate(x, y, op));
				}
			}
					
			System.out.println(stack.peek() + " " + qu.peek() + " " + pq.peek());
		}
	}
}
