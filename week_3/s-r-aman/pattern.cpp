#include <iostream>

using namespace std;

int main() {
	int n = 0;
	cout << "Enter the number 👉";
	cin >> n;

	int lenght = 2 * n - 1;


	for(int i = 0; i < lenght; i++) {
		int to_print = n + 1;
		for(int j = 0; j < lenght; j++) {
			if(i > j - 1) {
				to_print = to_print - 1;
			}
			if(j > 2 * n - i - 2) {
				to_print = to_print + 1;
			}
			cout << to_print << "  ";
		}
		cout << endl;
	}

}