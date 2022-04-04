#include <iostream>
#include "formatter_ex.h"
#include "formatter.h"
int main() {
    formatter(std::cout,"Whaaaat!?");
    std::string tmp = "NANIIIIIII!?!?!?!?!";
    std::cout << formatter(tmp); 
    return 0;
}