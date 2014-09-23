#include <iostream>

using namespace std;

int main(){

	long long n,m,p,aux;
	while(cin>>n && n!=0){
		cin>>m>>p;
		if(m>p){
			aux=m;
			m=p;
			p=aux;
		}
		else{
			if(n>p){
				aux=n;
				n=p;
				p=aux;
			}
		}
		if((p*p)==((m*m)+(n*n))) cout<<"right"<<endl;
		else cout<<"wrong"<<endl;	
	}
}