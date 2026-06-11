#include <iostream>
using namespace std;

long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

long long permutation(int n, int r) {
    return factorial(n) / factorial(n - r);
}

long long combination(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n, r;

    cout << "Enter n: ";
    cin >> n;

    cout << "Enter r: ";
    cin >> r;

    if (r > n || n < 0 || r < 0) {
        cout << "Invalid input";
        return 0;
    }

    cout << "Permutation (nPr) = " << permutation(n, r) << endl;
    cout << "Combination (nCr) = " << combination(n, r) << endl;

    return 0;
}