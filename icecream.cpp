#include <iostream>
#include <cstdint>

using std::cout;

namespace Flavors {
    const uint32_t VANILLA = 1;     // 1 << 0;
    const uint32_t CHOCOLATE = 2;   // 1 << 1;
    const uint32_t CHILI = 4;       // 1 << 2; 
};


float orderIceCream(uint32_t flavors) {
    float cost = 0;
    
    if (flavors & Flavors::VANILLA) {
        cout << "zzzzzzzz\n";
        cost += 2.75;
    }

    if (flavors & Flavors::CHOCOLATE) {
        cout << "yummmy chocolate?\n";
        cost += 2.75;
    }

    if (flavors & Flavors::CHILI) {
        cout << "hooh chili\n";
        cost += 2.75;
    } else {
        cout << "no chili!? bruh\n";
    }
    

    return cost;
}

int main(void) {
    
    uint32_t myOrder = Flavors::CHILI | Flavors::CHOCOLATE;
    float cost = orderIceCream(myOrder);
    cout << "that will be : " << cost << "!\n";
}