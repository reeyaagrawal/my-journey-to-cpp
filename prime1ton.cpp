#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    if (n < 2) {
        cout << "No prime numbers in this range." << endl;
        return 0;
    }
    cout << "Prime numbers from 1 to " << n << " are: ";
    for (int num = 2; num <= n; num++) {
        bool isPrime = true;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
            }
        }
        if (isPrime) {
            cout << num << " ";
        }
    }
    cout << endl;
    return 0;
}
