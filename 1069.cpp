#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int n,vacios,i,e,f,c,refre,vacios2;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>e>>f>>c;
		if(c==0 || c==1){
			cout<<"0"<<endl;
			continue;
		}
		refre = floor((e+f)/c);
		vacios = refre + ((e+f)%c);
		while(vacios>=c){
			refre += floor(vacios/c);
			vacios2 = floor(vacios/c) + (vacios%c);
			vacios =vacios2;
		} 
		cout<<refre<<endl;
	}
}