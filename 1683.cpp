#include <iostream>

using namespace std;

int main(){
	int n,i,val,suma,j;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>val;
		suma = 1;
		for(j=2;j<val;j++){
			if(val%j==0){
				suma +=j;
			}
		}
		if(suma < val) cout<<"Deficient"<<endl;
		if(suma == val) cout<<"Perfect"<<endl;
		if(suma > val) cout<<"Abundant"<<endl;
	}

	return 0;
}