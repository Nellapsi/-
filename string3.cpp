#include <iostream>
#include <string>

int main () {
    std::string a;
    //std::cin >> a;
    std::getline(std::cin, a);
    int i, j;
    bool c = true;
    i = 0;
    j = a.size () - 1;
    while (i < j && c) {
        while (!isalnum(a [i])) {
            i++;
        }
        while (!isalnum(a [j])) {
            j--;
        }
        if (toupper(a [i]) != toupper(a [j])) {
            c = false; 
            break;
        }
        i++;
        j--;
    }
    if (c) {
        std::cout << "da" << std::endl;
    } else {
        std::cout << "net" << std::endl;
    }
    return 0;
}