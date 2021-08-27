#include<bits/stdc++.h>
#include<class1.h>
#define MAX 10005
using namespace std;
int main(){

    int vec[MAX],n,x;
    cout<<"Digite el tamaño del vector : "; cin>>n;
    class1 vectorX;
     vectorX.cargarVector(vec,n);
     cout<<"Digite el numero X : "; cin>>x;
     cout<<endl;
     vectorX.divisor(vec,n,x);


    return 0;
}
