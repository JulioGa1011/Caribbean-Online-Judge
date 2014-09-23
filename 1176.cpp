#include <iostream>

using namespace std;

void ternario(int n){
    if (n!=0){
        ternario(n/3);
        cout<<n%3;
    }
}

int main(){
	int val;
	while (cin>>val && val!=-1){
		ternario(val);
		cout<<endl;
	}
	return 0;
}
