#include <iostream>
#include <math.h>

using namespace std;

int main(){

	long n, m;
	
		cin>>n;
		m = (fabs(n)*(fabs(n)+1))/2;
		if(n<1) {m*=-1;m+=1;}
		cout<<m;
	
	return 0; 
}