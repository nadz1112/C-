#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct SinhVien {
    string ten;
    float toan, ly, hoa, dtb;
};

//ham nhap diem va kiem tra hop le
float nhapDiem(string mon) {
    float diem;
    while (true) {
        cout << "Diem " << mon << ": ";
        cin >> diem;

        if (cin.fail() || diem < 0 || diem > 10) {
            cout << "Nhap sai! Diem phai tu 0 den 10.\n";
            cin.clear();
            cin.ignore(1000, '\n');
        } else break;
    }
    return diem;
}

int main() {
    int n;
    do {
        cout << "Nhap so sinh vien: ";
        cin >> n;
        if (cin.fail() || n<=0) {
            cin.clear();
            cin.ignore(1000, '\n');
            n = -1;
        }
    } while (n <= 0);

    SinhVien ds[100];
    for (int i = 0; i<n; i++) {
        cout << "\nNhap sinh vien thu " << i + 1 << ":\n";

        cout << "Ten: ";
        getline(cin, ds[i].ten);

        ds[i].toan = nhapDiem("Toan");
        ds[i].ly   = nhapDiem("Ly");
        ds[i].hoa  = nhapDiem("Hoa");

        ds[i].dtb = (ds[i].toan + ds[i].ly + ds[i].hoa)/3;
    }

    //in sv co diem TB >= 8
    cout << "\nDanh sach sinh vien co diem trung binh >= 8:\n";
    cout << left << setw(25) << "Ten" << setw(10) << "Diem TB" << endl;

    for (int i = 0; i < n; i++) {
        if (ds[i].dtb >= 8) {
            cout << left << setw(25) << ds[i].ten
                 << fixed << setprecision(2) << ds[i].dtb << endl;
        }
    }

    return 0;
}

