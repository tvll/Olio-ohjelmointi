#include <iostream>
#include <iomanip>

using namespace std;

void calcSum(int a, int b) {
    cout << "Summa (calcSum): " << a + b << endl;
}

void calcDiv(int a, int b) {
    if (b == 0) {
        cout << "Virhe: Jakaja ei voi olla nolla." << endl;
    } else {
        cout << fixed << setprecision(2);
        cout << "Osamäärä (calcDiv): " << static_cast<float>(a) / b << endl;
    }
}

int retSum(int a, int b) {
    return a + b;
}

float retDiv(int a, int b) {
    if (b == 0) {
        cout << "Virhe: Jakaja ei voi olla nolla." << endl;
        return 0;
    } else {
        return static_cast<float>(a) / b;
    }
}

int main() {
    int a, b;

    cout << "Anna ensimmäinen kokonaisluku (a): ";
    cin >> a;
    cout << "Anna toinen kokonaisluku (b): ";
    cin >> b;

    calcSum(a, b);
    calcDiv(a, b);

    int sumResult = retSum(a, b);
    float divResult = retDiv(a, b);

    // Tulostetaan palautetut arvot
    cout << "Summa (retSum): " << sumResult << endl;
    cout << fixed << setprecision(2);
    cout << "Osamäärä (retDiv): " << divResult << endl;

    return 0;
}
