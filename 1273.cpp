#include <iostream>

using namespace std;

int main(){
	unsigned int n,l,w,suma,i,veces,j;
	cin>>veces;
	for(i=0;i<veces;i++){
		cin>>n>>l>>w;
		suma=0;
		for(j=1;j<=n+1;j++) suma+=j;
		cout<<suma*l*w<<endl;
	}

	return 0;
}
