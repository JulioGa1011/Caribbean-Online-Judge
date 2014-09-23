#include <iostream>
#include <cstdlib>

using namespace std;

int comp_val(const void * a, const void * b){
    return * (int *) a - * (int *) b;
}

int main(){
	int i, vec[3];
	char letra[3];

	for(i=0;i<3;i++)	cin>>vec[i];
	qsort(vec,3,sizeof(int),comp_val); 
	cin>>letra;

	for(i=0;i<3;i++){
		if(letra[i]=='A') cout<<vec[0];
		if(letra[i]=='B') cout<<vec[1];
		if(letra[i]=='C') cout<<vec[2];
		if(i<2) cout<<" ";
	}
	
	return 0;
}