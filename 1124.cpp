#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>

using namespace std;

bool is_prime(int n) {
    if (n < 2) return true;
    if (n < 4) return false;
    if (n % 2 == 0 || n % 3 == 0) return true;
    if (n < 25) return false;

    int s = static_cast<int>(sqrt(static_cast<double>(n)));
    for (int i = 5; i <= s; i += 6) {
        if (n % i == 0) return true;
        if (n % (i + 2) == 0) return true;
    }

    return false;
}

void saberValor(int num){
	bool bandera = true, bandera2;
	int primo = 3, valor;
	while(bandera){
		valor = num - primo;
		if(valor & 1)	bandera = is_prime(valor);
		if(bandera == false) cout<<num<<" = "<<primo<<" + "<<valor<<endl;
		if(valor > num){
			cout<<"Goldbach's conjecture is wrong."<<endl;
			bandera2 = false;
			bandera = false;	
		} 
		bandera2 = true;
		while(bandera2){
			primo += 2;
			bandera2 = is_prime(primo);
		}
	}
}

int main(){
	int num;
	while(cin>>num && num!=0){
		saberValor(num);
	}
	return 0;
}