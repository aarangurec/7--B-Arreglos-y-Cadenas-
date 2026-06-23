#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int t = 0; t < n; t++) {
        char palabra[1000];
        cin >> palabra;

        int lg = 0;
        while (palabra[lg] != '\0') {
            lg++;
        }

        bool esPalindromo = true;
        for (int j = 0; j < lg / 2; j++) {
            if (palabra[j] != palabra[lg - j - 1]) {
                esPalindromo = false;
                break;
            }
        }

        if (esPalindromo) {
            cout << "P\n";
        } else {
            cout << "NP\n";
        }
    }

    return 0;
}
    
