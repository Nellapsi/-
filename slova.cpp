#include <iostream>
#include <string>
#include <vector>

int main () {
    int q;
    std::string a [] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    std::string b [] = {"", "ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    std::string c [] = {"hundred", "thousand", "million"};
    std::string v [] = {"Ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "eventeen", "eighteen", "nineteen"};
    std::cin >> q;
   
    if (q < 10) {
        std::cout << a [q] << std::endl;
    } else if (q < 20) {
        std::cout << v [q % 10];
    } else if (q < 100) {
        std::cout << b [q / 10] << " " << a [q % 10] << std::endl;
    } else if (q < 1000) {
        std::cout << a [q / 100] << " " << c [0] << " " << b [(q % 100) / 10] << " " << a [q % 10];
    }
    return 0;
}