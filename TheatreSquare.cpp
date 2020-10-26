////
//// Created by ADmin on 10/23/2020.
////https://codeforces.com/problemset/problem/1/A
//
//#include <iostream>
//#include <math.h>
//
//int main() {
//    int n, m, a;
//    std::cin >> n >> m >> a;
//    if (n * m <= a * a && std::max(n, m) <= a) {
//        std::cout << 1 << "\n";
//        exit(0);
//    }
//    float nResidual = n - (int)(n / a) * a;
//    float mResidual = m - (int)(m / a) * a;
//    long long result = (long long)(n / a) * (long long)(m / a);
//    result += nResidual > 0.0 ? (long long)(m / a) : 0;
//    result += mResidual > 0.0 ? (long long)(n / a) : 0;
//    result = nResidual > 0.0 && mResidual > 0.0 ? result + 1 : result;
//    std::cout << result << "\n";
//    return 0;
//}