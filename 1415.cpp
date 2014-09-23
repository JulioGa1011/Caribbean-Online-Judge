#include <iostream>

using namespace std;

struct rectangulo{
	float x1;
	float y1;
	float x2;
	float y2;
};

int main(){
	char caracter;
	int num_rect=0,i,num_punt=0;
	float puntox, puntoy,aux,tope = 9999.9;
	rectangulo areas[11];
	while(cin>>caracter && caracter!='*'){
		cin>>areas[num_rect].x1>>areas[num_rect].y1>>areas[num_rect].x2>>areas[num_rect].y2;
		if(areas[num_rect].x1>areas[num_rect].x2){
			aux = areas[num_rect].x1;
			areas[num_rect].x1 = areas[num_rect].x2;
			areas[num_rect].x2 = aux;
		}
		if(areas[num_rect].y1>areas[num_rect].y2){
			aux = areas[num_rect].y1;
			areas[num_rect].y1 = areas[num_rect].y2;
			areas[num_rect].y2 = aux;
		}
		num_rect++;
	}
	bool  bandera;
	while(cin>>puntox>>puntoy && (puntox != tope && puntoy != tope)){
		num_punt++;
		bandera = true;
		for(i = 0; i<num_rect; i++){
			if(puntox>areas[i].x1 && puntox<areas[i].x2){
				if(puntoy>areas[i].y1 && puntoy<areas[i].y2){
					cout<<"Point "<<num_punt<<" is contained in figure "<<i + 1<<endl;
					bandera = false;
				}
			}
		}
		if(bandera){
			cout<<"Point "<<num_punt<<" is not contained in any figure"<<endl;
		}
	}	
	return 0;
}