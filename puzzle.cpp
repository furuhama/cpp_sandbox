/* copyright furuhama 2017 */
#include <iostream>
#include <vector>

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
}
