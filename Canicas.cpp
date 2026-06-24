#include<iostream>
using namespace std;
int Can[1000001];
int main(){
    int n, c;
    cin >> n >> c;

    for(int i = 0; i < c; i++){
        int v;
        cin >> v;
        Can[v] = Can[v] + 1;
    }
    cout<<"------------------------"<<endl;

    for(int i = 1; i <= n; i++){
        cout << Can[i] << "\n";
    }


    return 0;
}