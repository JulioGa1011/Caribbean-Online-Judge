#include <iostream>

using namespace std;

int main(){
	int n,val[10],j,i;
	cin>>n;
	cout<<"Lumberjacks:"<<endl;
	for(i=0;i<n;i++){
		for(j=0;j<10;j++) cin>>val[j];
		if(val[1]>val[0]){
			for(j=1;j<10;j++){
				if(val[j-1]>val[j]) break;
			}
		}
		else{
			for(j=1;j<10;j++){
				if(val[j-1]<val[j]) break;
			}
		}

		if(j==10) cout<<"Ordered"<<endl;
		else cout<<"Unordered"<<endl;
	}

	return 0;
}