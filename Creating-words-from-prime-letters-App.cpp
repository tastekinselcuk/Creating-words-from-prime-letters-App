#include <iostream>
#include <time.h>
using namespace std;

int main() {
    int x, y, d;
    string z;
    for (int sayi = 97; sayi <= 123; sayi++) {
        int kosul = 1;
        for (int i = 2; i < sayi; i++) {
            if (sayi % i == 0) {
                kosul = 0;
                break;
            }
        }
        if (kosul) {
            char x = sayi;
            z += sayi;
        }
    }
    for (int sayi2 = 65; sayi2 <= 91; sayi2++) {
        int kosul2 = 1;
        for (int i = 2; i < sayi2; i++) {
            if (sayi2 % i == 0) {
                kosul2 = 0;
                break;
            }
        }
        if (kosul2) {
            char y = sayi2;
            z += y;
        }
    }
    srand(time(0));
    for (int t = 0; t < z.size(); t++) {
        for (int l = 0; l < 3; l++) {
            d = rand() % (z.size() - 1) + 0;
            cout << z[d];
        }
        cout << endl;
    }
    system("pause");
    return 0;
}
