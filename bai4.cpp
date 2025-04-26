#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
//nhap và kiem tra n
    do {
        cout << "Nhap so phan tu n: ";
        cin >> n;
        if (cin.fail() || n<=0) {
            cout << "Vui long nhap so nguyen duong.\n";
            cin.clear();
            cin.ignore(1000, '\n');
            n = -1;
        }
    } while (n<=0);

    int a[1000];
    set<int> tapPhanBiet;
//nhap mang va dua vao set
    cout << "Nhap " << n << " phan tu:\n";
    for (int i = 0; i<n; i++) {
        cin >> a[i];
        tapPhanBiet.insert(a[i]); // loai trung
    }
//in ra so luong gia tri phan biet trong mang
    cout << "So luong gia tri phan biet trong mang: " << tapPhanBiet.size() << endl;

    return 0;
}

