#include<bits/stdc++.h>
#include "class1.h"
using namespace std;
class1::class1(){}
class1::~class1(){}

void class1::cargarVector(int vec[],int n){
    for(int i=0; i<n; i++){
        cout<<i<<"): ";
        cin>>vec[i];
    }
}
void class1::divisor(int vec[],int n,int x){

   cout<<"Divisores entre X : ";
   for(int i=0; i<n; i++){
     if(vec[i]%x == 0){
        cout<<vec[i]<<' ';
     }
   }
   cout<<endl;

}



