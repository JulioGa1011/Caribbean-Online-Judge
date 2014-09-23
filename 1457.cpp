#include <iostream>

using namespace std;

int main(){
	long long juegos,equipos,bueltas;
	cin>>equipos>>bueltas;
	juegos = (equipos-1) * bueltas *(equipos/2);
	cout<<juegos;
	return 0;
}