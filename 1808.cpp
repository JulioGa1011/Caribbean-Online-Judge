#include <iostream>
#include <cstring>

using namespace std;

int main(){
	char n[1000],m[1000];
	int i,cont;
	while(cin>>n && n[0]!='X'){
		cin>>m;
		cont = 0;
		for(i=0;i<strlen(n);i++){
			if((n[i]!=m[i])) cont++;
		}
		cout<<"Hamming distance is "<<cont<<"."<<endl;
	}
}