#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

int main(){
	char palabra[15] , area[] ="circle",area1[]="triangle";
	double a,b,c;
	cin>>palabra;
	if(strcmp(palabra,area) == 0){
		cin>>a;
		a = a*a*(3.14);
		cout<<fixed<<setprecision(2)<<a;
	}
	else{
		if(strcmp(palabra,area1) == 0){
			cin>>a>>b;
			c = (b*a)/2;
			cout<<fixed<<setprecision(2)<<c;
		}
		else{
			cin>>a>>b;
			c=(a*b)/2;
			cout<<fixed<<setprecision(2)<<c;	
		}
	}
	return 0;
}
