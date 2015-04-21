// harmonic.cc -- Sample C++ program to be debugged with DDD
//
// This program prompts the user for an integer n, and then
// computes and prints the nth harmonic number, defined as:
//             1/n + 1/(n-1) + 1/(n-2) + ... + 1/3 + 1/2 + 1/1.
//

using namespace std;
#include <iostream>

double harmonic(int n) {
    double h = 0.0;

    for (int i=1;i<=n;i++) {
        h = h + (1.0/i);
    }
    return (h);
}

int main() {
    int n;

    cout << "Enter an integer: ";
    cin >> n;

    cout << "The " << n << "th harmonic number is: ";
    cout << harmonic(n) << endl;

    return (0);
}

