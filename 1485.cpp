#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

int compare (const void * a, const void * b){
  return ( *(int*)a - *(int*)b );
}

int main(){
	char palabra[1000];
	cin>>palabra;
	int size = strlen(palabra);
	int palabranumerica[size];
	for (int i = 0; i < size; ++i) {		
		palabranumerica[i] = palabra[i];
	}
	qsort (palabranumerica, size, sizeof(int), compare);
	for (int i = 0; i < size; ++i){
		cout<<(char)palabranumerica[i];
	}
	cin>>palabra;
	return 0;
}