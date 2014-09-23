#include <iostream>
#include <cstring>

using namespace std;

int main(){
	char palabra[15] , area[] ="square";
	int a,b;
	cin>>palabra;
	if(strcmp(palabra,area) == 0){
		cin>>a;
		cout<<a*a;
	}
	else{
		cin>>a>>b;
		cout<<a*b;
	}
	return 0;
}