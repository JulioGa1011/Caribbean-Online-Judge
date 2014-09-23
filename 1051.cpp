#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){

	double n;
	cin>>n;
	cout<<setiosflags(ios::fixed)<<setprecision(0)<<n-ceil(n/3);
	return 0;	
}