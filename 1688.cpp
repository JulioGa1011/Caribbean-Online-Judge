#include <iostream>

using namespace std;

int main(){
	int n,i,j,m,h,w,aux;
	while(cin>>n && n!=-1){
		switch(n){
			case 1:cin>>h;
			       for(i=0;i<h;i++){
				       for(j=0;j<(h-i-1);j++) cout<<" ";
				       for(m=0;m<(i*2)+1;m++) cout<<"*";
				       cout<<endl;
			       }
				   break;
			case 2:cin>>w>>h;
				   for(i=h;i>0;i--){
				   		for(j=i-1;j>0;j--) cout<<" ";
				   		for(m=0;m<w;m++) cout<<"*";
				   		cout<<endl;		
				   }
				   break;
			case 3: cin>>w>>h;
					for(i=0;i<h;i++){
						for(j=0;j<w;j++){
							cout<<"*";
						}
						cout<<endl;
					}
		}
		cout<<endl;
	}
	return 0;
}