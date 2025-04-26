#include <iostream>
#include <cmath>
using namespace std;

//ham kiem tra so nguyen to
bool so_nguyen_to(int n) {
	if(n<2) {
		return false;
	}
	else {
		for(int i=2; i <= sqrt(n); i++) {
			if (n%i==0) {
				return false;
			}
		}
	}
	return true;
}

int main() {
	int n;
	cout << "nhap n: ";
	cin >> n;
	if (n <= 2) {
		cout << "Khong co so nguyen to" << endl;
	}
	else {
		cout << "Cac so nguyen to nho hon N la: " << endl;
		for (int i = 0;i < n; i++)  {
			if (so_nguyen_to(i)){
				cout << i << ", ";
			}
		}	
	}
	return 0;
}
