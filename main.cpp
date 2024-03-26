#include <iostream>
#include <vector>

int main() {
    int t;
    std::cin>>t;
    std::vector<std::vector<int>> a(t);
    std::vector<std::vector<int>> b(t);
    for (int i = 0; i < t; ++i) {
        int n;
        std::cin>>n;
        std::vector<int> currA(n);
        std::vector<int> currB(n);
        for (int j = 0; j < n; ++j) {
            std::cin>>currA[j];
        }
        for (int j = 0; j < n; ++j) {
            std::cin>>currB[j];
        }
        a[i] = currA;
        b[i] = currB;
    }
    std::cout<<a[0][0];
}
