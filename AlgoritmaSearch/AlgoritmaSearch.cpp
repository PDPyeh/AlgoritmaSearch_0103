#include<iostream>
using namespace std;

int arr[20];
int n;
int i;

void input() {
	while (true) {
		cout << "Masukan jumlah elemen di array = ";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		else
			cout << "\n Minimum Array adalah 1 sampai dengan 20 Elements. \n\n";
	}
	cout << "\n==============\n";
	cout << "Masukan Element Array\n";
	cout << "===============\n";
	for (i = 0; i < n; i++) {
		cout << "<" << (i + 1) << ">";
		cin >> arr[1];
	}

}
	

