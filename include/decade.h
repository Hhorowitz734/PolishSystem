#ifndef DECADE_H 
#define DECADE_H

#include <vector>
#include "ITime.h"
#include "year.h"

class Decade : public ITime {


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

    /**
     * @brief Returns an array of ITime pointers to Year objects
     * 
     * @returns The array of pointers to Year objects
     * You must keep in mind that this returns POINTERS rather than by reference
     * So please manage this properly in the future
    */
    std::vector<ITime*> getSubTime() const override;



private:

    std::vector<Year> years;

    
};

#endif
