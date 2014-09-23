#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main(){
	unsigned long n,i,j,longitud,suma;
	char val[20];
	cin>>n;
	for(i=0;i<n;i++){
		cin>>val;
		suma = 0;
		longitud = strlen(val);
		for(j=0;j<longitud;j++){
			if(val[j]=='1'){
				suma += pow(2,(longitud-(j+1)));
			}
		}
		if(suma>=3000){cout<<"MMMM";suma-=3000;}
		if(suma>=2000){cout<<"MM";suma-=2000;}
		if(suma>=1000){cout<<"M";suma-=1000;}
		if(suma>=900){cout<<"CM";suma-=900;}
		if(suma>=500){cout<<"D";suma-=500; }
		if(suma>=400){cout<<"CD";suma-=400; }
	    if(suma>=300){cout<<"C";suma-=100; }
	    if(suma>=200){cout<<"C";suma-=100; }
	    if(suma>=100){cout<<"C";suma-=100; }
	    if(suma>=90){cout<<"XC";suma-=90;  }
	    if(suma>=50){cout<<"L";suma-=50;  }
	    if(suma>=40){cout<<"XL";suma-=40;  }
	    if(suma>=30){cout<<"X";suma-=10;  }
	    if(suma>=20){cout<<"X";suma-=10;  }
	    if(suma>=10){cout<<"X";suma-=10;}
	    if(suma>=9){cout<<"IX";suma-=9;}
	    if(suma>=5){cout<<"V";suma-=5;}
	    if(suma>=4){cout<<"IV";suma-=4;}
        if(suma>=3){cout<<"III";suma-=3;}
        if(suma>=2){cout<<"II";suma-=2;}
        if(suma>=1){cout<<"I";suma-=1;}
		cout<<endl;
	}
	return 0;
}