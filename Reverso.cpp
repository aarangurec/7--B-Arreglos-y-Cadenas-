#include <iostream>
using namespace std;

int main() {
    int n, A[50];
    cin >> n;
   
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    for (int i = n - 1; i >= 0; i--) {
        cout << A[i];
        if (i > 0) cout << " ";
    }
    cout << endl;
    return 0;
}