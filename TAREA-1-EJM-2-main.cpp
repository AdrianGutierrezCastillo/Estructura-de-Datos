#include<bits/stdc++.h>
#include<class1.h>
#define MAX 10005
using namespace std;
int main(){

    int vec[MAX],n;
    cout<<"Digite el tamaño del vector : "; cin>>n;
    class1 vectorX;
     vectorX.cargarVector(vec,n);
     vectorX.contador(vec,n);


    return 0;
}
