#include <iostream>
#include <cstring>

using namespace std;

int main(){
	int i,j,longitud,longitud2;
	long suma=0,num1,num2;
	char n[11],n2[11],numero;

	cin>>n>>n2;
	longitud = strlen(n);
	longitud2 = strlen(n2);
	for(i=0;i<longitud;i++){
		for(j=0;j<longitud2;j++){
			num1 = ((int)n[i])-48;
			num2 = ((int)n2[j])-48;
			suma += num1 * num2;
		}
	}
	cout<<suma;

	return 0;
}
