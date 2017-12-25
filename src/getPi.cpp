#include <iostream>
#include <random>
#define N 100000000
// N = 10^8 だと実行時間 2.04s くらい
// N = 10^9 だと実行時間 165.67s くらい

// 円周率を求める
// x, yの2次元空間 0.0 <= x, y <= 1.0 の範囲にランダムに点を配置し
// 原点からの距離が1.0以下である点の割合は π / 4 に近似することから計算する
int main() {
    double cnt = 0.0;
    std::random_device rd;  // ハードウェアエントロピーソースを利用してseed生成
    std::mt19937 mt(rd());  // メルセンヌツイスタを利用して乱数生成
    std::uniform_real_distribution<double> dist(0.0, 1.0);  // 乱数の分布を決定
    for (int i = 0; i < N; i++) {
        double x = dist(mt);
        double y = dist(mt);

        if ((x * x + y * y) <= 1.0) {
            cnt += 1.0;
        }
    }
    std::cout << "円周率は..." << std::endl << cnt / N * 4.0 << std::endl;
    return 0;
}

