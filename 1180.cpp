#include <iostream>

using namespace std;

struct tablero{
	int rey;
	int reina;
	int torre;
	int alfil;
	int caballo;
	int peon;
};

int main(){
	int val,i,j;
	tablero tableros;
	cin>>val;
	for(i=0;i<val;i++){
		
		cin>>tableros.rey;
		cin>>tableros.reina;
		cin>>tableros.torre;
		cin>>tableros.alfil;
		cin>>tableros.caballo;
		cin>>tableros.peon;
		
		cout<<1-tableros.rey<<" ";
		cout<<1-tableros.reina<<" ";
		cout<<2-tableros.torre<<" ";
		cout<<2-tableros.alfil<<" ";
		cout<<2-tableros.caballo<<" ";
		cout<<8-tableros.peon<<endl;
	}
	return 0;
}