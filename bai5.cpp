#include <iostream>
using namespace std;

//ham de quy tin Fibonacci
int fibonacci(int n) {
    if (n == 1 || n == 2)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
//nhap va kiem tra hop le
    do {
        cout << "Nhap n (1<=n <= 30): ";
        cin >> n;
        if (cin.fail() || n<=0 || n>30) {
            cout << "Vui long nhap so nguyen tu 1 den 30.\n";
            cin.clear();
            cin.ignore(1000, '\n');
            n = -1;
        }
    } while (n<=0 || n>30);

//in day Fibonacci tu F(1) den F(n)
    cout << "Day Fibonacci tu F(1) den F(" << n << "): ";
    for (int i = 1; i<=n; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;
    return 0;
}

