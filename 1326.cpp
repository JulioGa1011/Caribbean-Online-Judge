#include <iostream>

using namespace std;

int main(){
	int casos,i,j,cuanta_incial,num_tran,cantidad;
	char transaccion;
	cin>>casos;
	for(i = 0; i<casos; i++){
		cin>>cuanta_incial;
		cin>>num_tran;
		for(j=0; j<num_tran;j++){
			cin>>transaccion>>cantidad;
			if(transaccion == 'D') cuanta_incial -= cantidad;
			else cuanta_incial += cantidad;
		}
		cout<<cuanta_incial<<endl;
	}
	return 0;
}