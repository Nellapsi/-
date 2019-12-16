#include <iostream>
#include <string> 

int main () {
    int i, j, k, y;
    std::string b;
    std::string a;
    std::cin >> a;    
    bool c = true;
    i = 0;
    j = a.size ();
    while (i < a.size () && c) {
        if (a [i] == 0) {
            i++;
            continue;
        // } else {
        //     bool y = true;
        //     while (c && y) {
        //         if (a [j] == 0) {
        //             a [j--];
        //             continue;
        //         } else {
        //             if (a [j] == a [i]) {
        //                 a [j--];
        //                 y = false;
        //             } else {
        //                 y = false;
        //                 c = false;
        //             }
        //         }
        //     } 
            i++;
        }
    }

    if (c = true) {
        std::cout << "polindrom" << std::endl;
    } else {
        std::cout << "Net" << std::endl;
    }
    return 0;
}   