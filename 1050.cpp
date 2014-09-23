#include <iostream>

using namespace std;

int MCD(int x, int y){
    if(y==0)
        return x;
    else
        return MCD(y, x%y);
}

int main(){
	int i,n,aux,cont;
	cin>>n;
	for(i = 1, cont = 0; i<n; i++){
		aux = MCD(n, i);
		if(aux == 1) cont++; 
	}
	cout <<cont;
	return 0;
}