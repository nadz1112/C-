#include <iostream>
#include <limits>
using namespace std;

int main() {
    int n;
// nhap va kiem tra n
    while (true) {
        cout << "Nhap so luong phan tu n: ";
        cin >> n;

        if (cin.fail() || n<=0) {
            cout << "Gia tri n khong hop le. Vui long nhap lai!\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            break;
        }
    }
//nhap mang
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cout << "Nhap phan tu thu " << i+1 << ": ";
        while (true) {
            cin >> arr[i];
            if (cin.fail()) {
                cout << "Khong phai so nguyen. Vui long nhap lai: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            } else {
                break;
            }
        }
    }
// tim so lon nhat chia het cho 3
    int maxDiv3 = 0;
    bool found = false;
    for (int i = 0; i < n; ++i) {
        if (arr[i]%3 == 0 && arr[i] > maxDiv3) {
            maxDiv3 = arr[i];
            found = true;
        }
    }
    if (found) {
        cout << "So lon nhat chia het cho 3 la: " << maxDiv3 << endl;
    } else {
        cout << "Khong co so nao chia het cho 3 trong mang.\n";
    }

    return 0;
}

