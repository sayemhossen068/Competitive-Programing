#include <iostream>
using namespace std;

int main() {
	int a, b,n;

	cin >> n;

	for (int i=1; i<=n; i++) {
		cin >> a >> b;

		for(int i = a; i <= b; i++) {
			if(i < 2) continue;
			bool isPrime = true;
			for(int j = 2; j * j <= i; j++) {
				if(i % j == 0) {
					isPrime = false;
					break;
				}
			}
			if(isPrime) {
				cout << i << endl;
			}
		}
		
	}
	return 0;
}
