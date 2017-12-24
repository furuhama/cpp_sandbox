/* copyright furuhama 2017 */
#include <iostream>

int main() {
    // 以下2行は速くなるためのおまじない(らしい)
    std::cin.tie(0);
    std::ios::sync_with_stdio(false);

    int x;
    std::cin >> x;
    std::cout << x*x*x << std::endl;
}
