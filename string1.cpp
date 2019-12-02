#include <iostream>
#include <string> 

int main () {
    std::string a;
    std::cin >> a;
    std::string b;
    bool c = true;
    for (int i = 0; i < a.size (); i++) {
        int j = a.size () - i - 1;
        if (a [i] != 'q') {
            b.push_back (a [j]);
        }
    }
    std::cout << b << std::endl;
    for (int i = 0; i < b.size (); i++) {
        int j = b.size () - i - 1;
        std::cout << b [j] << ". " << b [i] << std::endl;
        if (b [j] != b [i]) {
                std::cout << "net" << std::endl;
                c = false;
                break;
        }
    }
    if (c) {
        std::cout << "polindrom: " << a << std::endl;
    }
    return 0;
}   