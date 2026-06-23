#include<iostream>
using namespace std;
int main(){
    int P, A, F[100];
    cout<<"Alumnos: ";
    cin >> A;
    cout<<"Profesores: ";
    cin >> P;
    for (int i = 0; i < A; i++) {
       int V;
       cin >> V;
       F[V]++;
   };






    return 0;
}