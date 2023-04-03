#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, result;
        cin >> n;
        long long highest_power = log2(n);
        result = (n * (n + 1) / 2) - (2 * (pow(2, highest_power + 1) - 1));
        cout << result << endl;
    }
    return 0;
}