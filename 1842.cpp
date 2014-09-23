#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int i,n,x1,y1,x2,y2;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>x1>>y1>>x2>>y2;
		cout<<fabs(x1-x2)+fabs(y1-y2)<<endl;
	}
	return 0;
}
