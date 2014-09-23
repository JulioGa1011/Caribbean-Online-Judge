#include <iostream>

using namespace std;

int main(){
	int n, x,y,i;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>x>>y;
		if(x==y || x==(y+2))	
			if(x==y){
				if(!(x&1))	cout<<(x*2)<<endl;
				else cout<<(x*2)-1<<endl;
			}
			else{
				if(!(x&1))	cout<<(x+y)<<endl;
				else cout<<(x+y)-1<<endl;
			}
		else cout<<"No Number"<<endl;
	}
}