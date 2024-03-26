#include <iostream>
#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    for (int i = 0; i < t; ++i) {
        int n;
        std::cin>>n;
        std::pair<int, int> curr[n];
        for (int j = 0; j < n; ++j) {
            std::cin>>curr[j].first;
        }
        for (int j = 0; j < n; ++j) {
            std::cin>>curr[j].second;
        }
        std::sort(curr,curr+n);
        for(int j = 0;j < n;++j)
        {
            std::cout << curr[j].first << ' ';
        }
        std::cout << "\n";
        for(int j = 0;j < n;++j)
        {
            std::cout << curr[j].second << ' ';
        }
        std::cout << "\n";
    }

}
