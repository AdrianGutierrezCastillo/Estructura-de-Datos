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
void class1::contador(int vec[],int n){

    int cont[10005],v[10005],c=0;
    for(int i=0; i<n; i++){
        cont[vec[i]]++;
        if(cont[vec[i]]==1){
            v[c] = vec[i];
            c++;
        }
    }
     cout<<"Contador de numeros"<<endl;
     cout<<endl;
     for(int i=0; i<c; i++){
        cout<<"El numero "<<v[i]<<" aparece : "<<cont[v[i]]<<" veces"<<endl;
     }

}



