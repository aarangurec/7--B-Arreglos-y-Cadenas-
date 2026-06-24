#include<iostream>
using namespace std;
int count[1000001];
int main(){
    int n, c;
    cin >> n >> c;

    for(int i = 0; i < c; i++){
        int v;
        cin >> v;
        count[v] = count[v] + 1;
    }

    for(int i = 1; i <= n; i++){
        cout << count[i] << "\n";
    }


    return 0;
}