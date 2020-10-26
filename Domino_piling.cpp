////
//// Created by ADmin on 9/17/2020.
//// https://codeforces.com/problemset/problem/50/A
//
//#include <iostream>
//
//void swap(int *x, int *y) {
//    *x = *x ^ *y;
//    *y = *x ^ *y;
//    *x = *x ^ *y;
//}
//
//int main() {
//    int m, n;
//    std::cin >> m >> n;
//    if (m > n)
//        swap(&m, &n);
//    if (m == 1) {
//        std::cout << (n>>1) << "\n";
//        exit(0);
//    }
//    else {
//        int result = (m>>1) * (n>>1) * 2;
//        int _m = m - ((m>>1)<<1);
//        int _n = n - ((n>>1)<<1);
//        result += _m != 0 ? (n>>1) : 0;
//        result += _n != 0 ? (m>>1) : 0;
////        std::cout << _m << " " << _n << "\n";
//        std::cout << result << "\n";
//    }
//    return 0;
//}
//
