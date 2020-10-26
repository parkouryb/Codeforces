////
//// Created by ADmin on 10/23/2020.
//// https://codeforces.com/problemset/problem/469/A
//
//#include <iostream>
//
//int main() {
//    int n, p;
//    int a[100 + 7];
//    int result = 0;
//    for (int i = 0;i < 100 + 5;++ i) {
//        a[i] = -1;
//    }
//    std::cin >> n;
//    std::cin >> p;
//    for (int i = 0;i < p;++ i) {
//        int x;
//        std::cin >> x;
//        result += a[x] == -1 ? 1 : 0;
//        a[x] = 1;
//    }
//    std::cin >> p;
//    for (int i = 0;i < p;++ i) {
//        int x;
//        std::cin >> x;
//        result += a[x] == -1 ? 1 : 0;
//        a[x] = 1;
//    }
//    if (result >= n) std::cout << "I become the guy.";
//    else std::cout << "Oh, my keyboard!";
//    return 0;
//}
//
