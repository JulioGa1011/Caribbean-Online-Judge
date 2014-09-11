#include <iostream>
using namespace std;

int main(){
	unsigned long long T, R, C;
	cin >> T;
	while(T>0){
		cin >> R >> C;
		if(R==C && R > 1){
			if(R%2==0)
				cout << "L" << endl;
			else
				cout << "R" << endl;
		}else if(R>C && C>1){
			if(C%2==0)
				cout << "U" << endl;
			else
				cout << "D" << endl;
		}else if(C>R){
			if(R%2==0)
				cout << "L" << endl;
			else
				cout << "R" << endl;
		}else if(C==1){
			if(R==1)
				cout << "R" << endl;
			else
				cout << "D" << endl;
		}

		T--;
	}
}