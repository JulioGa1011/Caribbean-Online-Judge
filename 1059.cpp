#include <iostream>
#include <iomanip>

using namespace std;

int cont;

void binario(int n){
    if (n!=0){
        binario(n/2);
        cout<<n%2;
        if(n%2 == 1)cont++;
    }
}

int main(){

	int x;
	while(cin>>x && x!=0){
		cont = 0;
		cout<<"The parity of ";
		binario(x);
		cout<<" is "<<cont<<" (mod 2)."<<endl;
	}
	return 0;
}