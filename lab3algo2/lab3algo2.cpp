#include <iostream>
#include <cmath>

using namespace std;

int power(int a, int b) {
    return pow(a, b);
}

int main() {
    int a, b;
    cout << "Введіть a (0 ≤ a ≤ 10): ";
    cin >> a;
    cout << "Введіть b (0 ≤ b < 20): ";
    cin >> b;

    if (a < 0 || a > 10 || b < 0 || b >= 20) {
        cout << "Некоректні значення a або b!" << endl;
        return 1;
    }

    cout << a << " ^ " << b << " = " << power(a, b) << endl;
    return 0;
}
