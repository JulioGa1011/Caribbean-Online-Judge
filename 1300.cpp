#include <iostream>
#include <set>
using namespace std;

int main(){
	set<int> s;
	short int N=10;
	int num;
	while(N--){
		cin >> num;
		s.insert(num%42);
	}
	cout <<s.size() << endl;
}