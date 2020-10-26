////
//// Created by ADmin on 10/26/2020.
////
//
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main() {
//    string s;
//    getline(cin, s);
//    int ss[100 + 7];
//    int j = 0;
//    for (int i = 0;i < s.length();++ i) {
//        if (s[i] != '+') {
//            ss[j] = s[i] - 48;
//            ++ j;
//        }
//    }
//    sort(ss, ss + j);
//    for (int i = 0;i < j - 1;++ i) {
//        cout << ss[i] << "+";
//    }
//    cout << ss[j - 1];
//    return 0;
//}