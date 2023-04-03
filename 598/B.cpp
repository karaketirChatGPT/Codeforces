#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int m, l, r, k;
    cin >> s >> m;

    while (m--) {
        cin >> l >> r >> k;
        l--; r--;
        k %= (r - l + 1);
        string temp = s.substr(l, r - l + 1);
        temp = temp.substr(temp.size() - k) + temp.substr(0, temp.size() - k);
        s.replace(l, r - l + 1, temp);
    }

    cout << s << endl;
    return 0;
}
