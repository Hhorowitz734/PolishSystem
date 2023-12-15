#include "../include/decade.h"
#include "../include/year.h"
#include <vector>
#include <iostream>

int main() {

    Decade sixties(1960);
    Decade seventies(20, 70);

    std::vector<Year> seventies_years = seventies.getYears();

    for (Year y : seventies_years) {
        std::cout << y.getYear() << '\n';
    }

    

    return 0;
}