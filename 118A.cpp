////
//// Created by ADmin on 10/25/2020.
////
//
//#include <iostream>
//#include <algorithm>
//#include <string>
//
//
//int main() {
//    std::string s;
//    getline(std::cin, s);
//    std::string vowels = "aoyeui";
//    std::transform(s.begin(), s.end(), s.begin(), ::tolower);
//
//    for (int i = 0;i < vowels.length();++ i) {
//        char x = vowels[i];
//        while (s.find(x) != std::string::npos) {
//            s.erase(s.find(x), 1);
//        }
//    }
//    std::string result = "";
//    for (int i = 0;i < s.length();++ i) {
//        result = result + "." + s[i];
//    }
//    std::cout << result << "\n";
//
//    return 0;
//}