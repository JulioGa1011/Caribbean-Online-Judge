#include <iostream>
#include <cstdlib>

using namespace std;

int compare (const void * a, const void * b){
  return ( *(int*)a - *(int*)b );
}

int main(){

	int i,j,n,tiempo,aux,problemas,suma,error;
	int tiempo_problemas[16];
	cin>>n;
	for(i=0;i<n;i++){
		cin>>tiempo>>problemas;
		for(j=0;j<problemas;j++)	cin>>tiempo_problemas[j];
		qsort (tiempo_problemas, problemas, sizeof(int), compare);
		suma = 5;
		aux = 0;
		error = 0;
		for(j=0;j<problemas;j++){
			if((suma+ tiempo_problemas[j]) <= tiempo){
				aux++;
				suma += tiempo_problemas[j];
				error += suma;
			}
		}
		cout<<aux<<" "<<error<<endl;
	}
}