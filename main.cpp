#include <iostream>
using namespace std;
int main() 
{
    srand(time(0));
    int n, i;
    double sommaV, sommaH, giroV, giroH;

    do {
        cout << "inserisci il numero di giri" << endl;
        cin >> n;
    } while (n <= 0);
    double v[n], h[n];
    i = 0;
    while (i <= n - 1) {
        v[i] = (150+rand() % (321 - 150)) / 100;
        h[i] = (150+rand() % (321 - 150)) / 100;
        i = i + 1;
    }
    i = 0;
    sommaV = 0;
    sommaH = 0;
    while (i <= n - 1) {
        sommaV = sommaV + v[i];
        sommaH = sommaH + h[i];
        i = i + 1;
    }
    if (sommaV < sommaH) {
        cout << "Verstappen ha vinto la gara" << endl;
    } else {
        cout << "Hamilton ha vinto la gara" << endl;
    }
    giroV = v[0];
    giroH = h[0];
    i = 0;
    while (i <= n - 1) {
        if (v[i] < giroV) {
            giroV = v[i];
        }
        if (h[i] < giroH) {
            giroH = h[i];
        }
        i = i + 1;
    }
    if (giroH < giroV) {
        cout << "Hamilton ha fatto il giro veloce" << endl;
    } else {
        cout << "Verstappen ha fatto il giro veloce" << endl;
    }
    return 0;
}