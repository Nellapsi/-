#include <iostream>
#include <string> 

int main () {
    std::string a;
    std::getline (std::cin, a);    
    bool c = true;
    int i = 0;
    while ( a [i] != ' ' && i < a.size ()) {
        if (a [i] != a [a.size () - i - 1]) {
            c = false;
            std::cout << "net" << std::endl;
            break;
        }
    i++;
    }

    if (c) {
        std::cout << "polindrom" << std::endl;
    }
    return 0;
}   