#include <iostream>

using namespace std;

int main(){
	int i,j,n,m,val,cont_par,cont_imp;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>m;
		cont_par = 0;
		cont_imp = 0;
		for(j=0;j<m;j++){
			cin>>val;
			if(val %2 == 0) cont_par++;
			else cont_imp++;
		}
	cout<<cont_par<<" even and "<<cont_imp<<" odd."<<endl;
	}
}