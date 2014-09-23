#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	int casos, ninos, suma, valor,i;
	cin>>casos;
	while(casos--){
		cin>>ninos;
		suma = 0;
		for(i = 0; i < ninos; i++){
			cin>>valor;
			suma += valor;
		}
		if(suma % ninos == 0) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}