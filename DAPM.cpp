////
//// Created by ADmin on 9/19/2020.
////
//
//#include <iostream>
//#include <math.h>
//
///*
// * Solution: http://cdmiennam.edu.vn/cach-giai-phuong-trinh-bac-2-va-cach-tinh-nham-nghiem.html
// * VSN : Vo so nghiem
// * VN : Vo nghiem
// * N : Nghiem
// * NK : Nghiem Kep
// */
//void bac1(double a, double b) {
//    if (a == 0) {
//        if (b == 0) {
//            std::cout << "VSN\n";
//        }
//        else {
//            std::cout << "VN\n";
//        }
//    }
//    else {
//        std::cout << "N: " << -b / a << "\n";
//    }
//}
//
//void ex1() {
//    double a, b;
//    std::cin >> a >> b;
//    bac1(a, b);
//}
//
//void ex2() {
//    double a, b, c;
//    std::cin >> a >> b >> c;
//    if (a == 0) {
//        bac1(b, c);
//    }
//    else {
//        double delta = b * b - 4 * a * c;
//        if (delta == 0) {
//            double x = -b / (2 * a);
//            std::cout << "NK:" << x << "\n";
//        }
//        else {
//            if (delta < 0) {
//                std::cout << "VN\n";
//            }
//            else {
//                double x1 = (-b + sqrt(delta)) / (2 * a);
//                double x2 = (-b - sqrt(delta)) / (2 * a);
//                std::cout << x1 << " " << x2 << "\n";
//            }
//        }
//    }
//}
//
//int main() {
//    ex2();
//    return 0;
//}
