#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n, m;
    std::cin >> n >> m;
    std::vector<int> a(n), b(m);
    
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    for (int i = 0; i < m; ++i) {
        std::cin >> b[i];
    }
    
    std::sort(a.begin(), a.end());
    
    for (int i = 0; i < m; ++i) {
        int cnt = std::upper_bound(a.begin(), a.end(), b[i]) - a.begin();
        std::cout << cnt << (i == m - 1 ? '\n' : ' ');
    }
    
    return 0;
}
