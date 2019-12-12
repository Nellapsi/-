#include <iostream>
#include <string> 

int main () {
    std::string b;
    std::string a;
    std::cin >> a;
    int k = a.size ();
    for (int i = 0; i < k; i++ ) {
        if (a [i] != ' ') {
            b [i] = a [i];
            std::cout << "a";
        } else {
            k--;
        }
    }
    for (int i = 0; i < b.size (); i++) {
        std::cout << b [i];
    }
    return 0;
}   