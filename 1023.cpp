#include <iostream>

using namespace std;

int main(){

	int i;
	float promp=0,aux;
	for(i=0;i<12;i++){
		cin>>aux;
		promp+=aux;
	}
	promp/=12;	
	cout<<"$"<<promp;
}