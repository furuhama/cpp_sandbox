/* copyright furuhama 2017 */
#include <iostream>
#include <vector>
#include <map>

int main() {
    // 以下2行は速くするためのおまじない(らしい)
    std::cin.tie(0);
    std::ios::sync_with_stdio(false);

    // *** Normal usage ***
    // int x;
    // std::cin >> x;
    // std::cout << x*x*x << std::endl;  // endl ではなく '\n' の方が速いらしい

    // *** Vector usage ***
    // std::vector<int> vc;  // <T>でT型のvector
    // int n;
    // std::cin >> n;
    // while (n--) {
    //     int x;
    //     std::cin >> x;
    //     vc.push_back(x);
    // }

    // for (int a : vc) {
    //     std::cout << a << std::endl;  // vectorの中身を表示
    // }

    // n = vc.size() / 2;
    // if (vc[n] == vc.at(n))
    //     std::cout << n << std::endl;

    // *** Map usage ***
    std::map<char, int> mp;  // <key, value>という記法をとる
    mp['a'] = 100;
    mp['b'] = 200;
    std::cout << mp['a'] << ' ' << mp['b'] << std::endl;

    mp.insert(std::map<char, int>::value_type('x', 300));
    if (mp.find('x') != mp.end())
        std::cout << mp['x'] << std::endl;
}
