#include <iostream>

using namespace std;

int votos[6];

int main(){	

	int t,n,m,i,j,aux;
	cin>>t;
	for(int k=0;k<t;k++){
		for(i=0;i<=5;i++) votos[i]=0;
		cin>>n>>m;
		for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				cin>>aux;
				votos[j]+=aux;
			}
		}
		aux = 0;
		for(i=1;i<n;i++){
			if(votos[aux]<votos[i])
				aux = i;
		}
		cout<<aux+1<<endl;
	}
}