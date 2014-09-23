#include <iostream>
#include <cstdlib>

using namespace std;

int compare (const void * a, const void * b){
  return ( *(int*)a - *(int*)b );
}

int main (){
  int n,i;
  cin>>n;
  int valores[n];
  for(i=0;i<n;i++)	cin>>valores[i];
  qsort (valores, n, sizeof(int), compare);
  for (i=0;i<n;i++){cout<<valores[i]<<endl;}
  return 0;
}