#include <iostream>
#include "chp1/chp1.h"


int main() {
    std::cout << "Hello, World!" << std::endl;

    //chp1
    std::vector<int> aar{4,3,5,4,3,3,6,7};
    std::vector<int> res = getMaxWindow(aar,3);
    for(auto val : res) {
        std::cout << val << " ";
    }
    std::cout<<std::endl;
    return 0;
}
