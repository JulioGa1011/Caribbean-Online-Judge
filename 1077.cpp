#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{long long n1, n2, cont,cont2,i,valor,j;
 while(cin>>n1&&cin>>n2)
 {if(n1<n2)
           {j=n1;
            valor=0;
            for(i=n1;i<=n2;i++)
               {n1=i;
                cont=0;
                while (n1!=1)
                      {if(n1%2==0)
                                  n1/=2;
                       else
                                  n1=(n1*3)+1;
                       cont++;
                       }
                if(cont>valor)
                valor=cont;
                }
                 cout<<j<<" "<<n2<<" "<<valor+1<<endl;
                }
     else
         {j=n2;
            valor=0;
            for(i=n2;i<=n1;i++)
               {n2=i;
                cont=0;
                while (n2!=1)
                      {if(n2%2==0)
                                  n2/=2;
                       else
                                  n2=(n2*3)+1;
                       cont++;
                       }
                if(cont>valor)
                valor=cont;
                }
                 cout<<n1<<" "<<j<<" "<<valor+1<<endl;
         }
     }
}