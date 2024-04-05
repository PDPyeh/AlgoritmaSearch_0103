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

void LinearSearch() {
	char ch;
	int ctr;
	int hitem;

	do {
		cout << "\nMasukan Element yang mau di cari = ";
		cin >> item;

		ctr = 0;
		i = 0;
		while (i < n) {
			ctr++;
			if (arr[i] == item) {
				cout << "\n" << item << "Ditemukan Diposisi" << (i + 1) << endl;
				break;
			}
			i++;
		}
		if (i == n) {
			cout << "\n" << item << "Tidak ditemukan di Array\n";
			cout << "\nNomor Comparisons = " << ctr << endl;

			cout << "\nLanjut Mencari? (y/n) = ";
			cin >> ch;
		}
	} while ((ch == 'y') || (ch == 'Y'));
}

void display() {
	cout << "Array Elementnya adalah = ";
	for (i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main()
	

