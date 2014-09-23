#include <algorithm>
#include <vector>
#include <iostream>
#include <string.h>

using namespace std;

struct Medallero{
	char nombre[70];
	int oro;
	int plata;
	int bronce;
};

bool comparacion(Medallero a, Medallero b){
	if(a.oro != b.oro){
		return a.oro > b.oro;
	}else{
		if(a.plata != b.plata){
			return a.plata > b.plata;
		}else{
			if(a.bronce != b.bronce){
				return a.bronce > b.bronce;
			}else{
				return strcmp(a.nombre, b.nombre) < 0;
			}
		}
	}
}

int main(){
	vector <Medallero> paises;
	Medallero pais;
	char palabra[70];
	int cont;
	while(cin>>palabra && palabra[0]!='#'){
		if(palabra[0] =='@'){
			if(cont != 0)	cout<<"@"<<endl;
			sort(paises.begin(),paises.end(),comparacion);
			for(int i = 0; i < paises.size(); i++){
				cout << paises[i].nombre << endl;
			}
			paises.clear();
			cont++;
		}else{
			memcpy(pais.nombre,palabra,strlen(palabra)+1);
			cin>>pais.oro>>pais.plata>>pais.bronce;
			paises.push_back(pais);
		}
	}
	if(cont != 0)	cout<<"@"<<endl;
	sort(paises.begin(),paises.end(),comparacion);
	for(int i = 0; i < paises.size(); i++){
		cout << paises[i].nombre<<endl;
	}
	return 0;
}