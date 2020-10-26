////
//// Created by ADmin on 10/23/2020.
////
//
//#include <iostream>
//
//int main() {
//    int n;
//    int evenCount = 0;
//    int e = -1, ne = -1;
//    std::cin >> n;
//    for (int i = 1;i <= n;++ i) {
//        int x;
//        std::cin >> x;
//        if (x % 2 == 0) {
//            evenCount += 1;
//            e = e != -1 ? e : i;
//        }
//        else {
//            ne = ne != -1 ? ne : i;
//        }
//    }
//    int result = evenCount == 1 ? e : ne;
//    std::cout << result;
//    return 0;
//}
