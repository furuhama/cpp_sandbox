/* copyright furuhama 2017 */
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <utility>

typedef unsigned long ul;
typedef std::pair<ul, ul> P;

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
    // std::map<char, int> mp;  // <key, value>という記法をとる
    // mp['a'] = 100;
    // mp['b'] = 200;
    // std::cout << mp['a'] << ' ' << mp['b'] << std::endl;

    // mp.insert(std::map<char, int>::value_type('x', 300));
    // if (mp.find('x') != mp.end())
    //     std::cout << mp['x'] << std::endl;

    // *** string usage ***
    // std::string str;
    // str = "this is a string";
    // str[2] = 'a';  // []でアクセスできる
    // str[3] = 't';
    // if (str.length() >= 5) {  // length()で長さ取得
    //     std::cout << str << std::endl;
    // }
    // // 文字列検索 あればindex なければstring::niposを返す
    // if (str.find("is") != std::string::npos) {
    //     std::cout << str.find("is") << std::endl;
    // }

    // *** swap usage ***
    // int a = 1;
    // int b = 5;
    // std::swap(a, b);
    // std::cout << "a: " << a << " b: " << b << std::endl;

    // *** typedef usage ***
    std::vector<P> vc;
    int n;
    std::cin >> n;
    while (n--) {
        ul x, y;
        std::cin >> x >> y;
        vc.push_back(P(x, y));
    }
}
