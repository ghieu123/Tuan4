#include <iostream>

using namespace std;

// Hàm đệ quy và khử đệ quy cho S(n) = 1 + 1/3 + 1/5 + ... + 1/(2n+1)
double S3_dequy(int n) {
    if (n == 0) return 1.0;
    return 1.0 / (2 * n + 1) + S3_dequy(n - 1);
}

double S3_khudequy(int n) {
    double sum = 0;
    for (int i = 0; i <= n; ++i) {
        sum += 1.0 / (2 * i + 1);
    }
    return sum;
}

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;

    cout << "S3 de quy: " << S3_dequy(n) << endl;
    cout << "S3 khu de quy: " << S3_khudequy(n) << endl;

    return 0;
}
