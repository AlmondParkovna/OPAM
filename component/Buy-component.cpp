#include "Buy-component.h"
#include <iostream>

void printName(int maxChars) {
    std::string name = "Vlad";
    int nameLength = name.length();
    int repeatCount = maxChars / nameLength;

    for (int i = 0; i < repeatCount; ++i) {
        std::cout << name;
    }
    std::cout << std::endl;
    std::cout << maxChars << std::endl;
}
