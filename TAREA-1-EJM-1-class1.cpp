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
void class1::criba(int vec[],int n){
    bool ok[10005];
    for(int i=1; i<10005; i++){
        ok[i] = true;
    }
    for(int i=2; i<10005; i++){
        for(int j=2; i*j<10005; j++){
            ok[i*j] = false;
        }
    }
    cout<<endl;
    cout<<"Numeros primos del vector :  ";
    for(int i=0; i<n; i++){
        if(ok[vec[i]] && vec[i]>=2){
            cout<<vec[i]<<' ';
        }
    }


}



