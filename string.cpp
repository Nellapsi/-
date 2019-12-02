#include <iostream>
#include <string>


int main () {
    char a;
    bool c = false;
    std::string s;
    std::cout << "vvedite stroky" << std::endl;
    std::cin >> s;
    std::cout << "vvedite simdol" << std::endl;
    std::cin >> a;
    for (int i = 0; i < s.size (); i++) {
        if (s [i] == a) {
            c = true;
            std::cout << "pervi raz simvol poiavliaetsia v: " << i << " elemente" << std::endl;
            break;
        }
    }
    if (!c){
        std::cout << "takogo chisla net" << std::endl;
    }
    return 0;
}