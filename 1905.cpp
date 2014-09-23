#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stack>

using namespace std;

int main(){
	stack<char*> cola;
	int casos;
	char nombre [1000], id[5];
	char *palabras;
	cin>>casos;
	while(casos != 0){
		cin>>id;
		cin.getline (nombre,1000);
		palabras = strtok(nombre," ");
		while(palabras != NULL){
	      cola.push(palabras);
	      palabras = strtok(NULL, " ");
	    }
	    cout<<id[0]<<id[1];
	    while (!cola.empty()){
	    	cout<<cola.top();
	    	cola.pop();
	    	if(!cola.empty())	cout<<"*";
	    }
	    cout<<id[2]<<id[3]<<endl;
		casos--;
	}
	return 0;
}