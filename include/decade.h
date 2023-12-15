#ifndef DECADE_H 
#define DECADE_H

#include <vector>
#include "year.h"

class Decade {


public:
    
    /**
     * @brief Constructs new Decade object from decade and century
     * 
     * @param decade Integer in [0, 10, 20...]
     * @param century Integer in [1, ..., 21]
     * 
    */
    Decade(int century, int decade);

    /**
     * @brief Constructs new Decade object from start year
     * 
     * @param start_year An integer representing the start year
    */
    Decade(int start_year);

    /**
     * @brief Getter method for array of years
     * 
     * @returns years array for given Decade
    */
    std::vector<Year> getYears();

    /**
     * @brief Destructor for Decade that frees all memory
    */
    ~Decade() = default;


private:

    std::vector<Year> years;

    
};

#endif
