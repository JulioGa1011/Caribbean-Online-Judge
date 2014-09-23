#include <iostream>

using namespace std;

int main(){
	int i,n,mayor=0;
	float val, may=0.0;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>val;
		if(val>=may) {
			mayor = i;
			may = val;
		}
	}
	cout<<mayor+1;

	return 0;
}
