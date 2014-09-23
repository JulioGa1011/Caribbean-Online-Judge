#include <iostream>

using namespace std;

int main(){
	int n,i;
	long val;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>val;
		cout<<50+((val-1)*8)<<endl;
	}

	return 0;
}
