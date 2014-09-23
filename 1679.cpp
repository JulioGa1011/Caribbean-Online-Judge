#include <iostream>
#include <cmath>

using namespace std;

int main(){

	int unsigned i,n,val1,val2,val3,val4,val5,val6,val=0;
	string jugador,ganador;
	cin>>n;
	int vector[n],cont=0;
	for(i=0;i<n;i++){
		cin>>jugador;
		cin>>val1>>val2>>val3>>val4>>val5>>val6;
		val = log(val1)+val2+(2*val3)+val4-(val5+(2*val6));
		if(val>cont){
			cont = val;
			ganador = jugador;
			
		}
	}
	cout<<ganador;
	return 0;
}