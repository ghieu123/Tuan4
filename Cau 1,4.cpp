#include <iostream>

using namespace std;

// Hàm đệ quy và khử đệ quy cho S(n) = 1*2 + 2*3 + 3*4 + ... + n*(n+1)
int S4_dequy(int n) {
    if (n == 1) return 1 * 2;
    return n * (n + 1) + S4_dequy(n - 1);
}

int S4_khudequy(int n) {
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i * (i + 1);
    }
    return sum;
}

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;

    cout << "S4 de quy: " << S4_dequy(n) << endl;
    cout << "S4 khu de quy: " << S4_khudequy(n) << endl;

    return 0;
}
