#ifndef YEAR_H  
#define YEAR_H

#include "ITime.h"

class Year : public ITime {

public:

    /**
     * @brief Constructor for Year object given integer year
     * 
     * @param year Integer representing the year
    */
    Year(int year);

    /**
     * @brief Getter method for a block's year
     * 
     * @return The year of the given Year object
    */
    int getYear();


    /**
     * @brief Destructor for Year that frees all memory
    */
    ~Year() = default;

    /**
     * @brief Returns an empty array. Function must be implemented for interface
     * 
     * @returns An empty array of ITime* type
    */
    std::vector<ITime*> getSubTime() const override;


private:

    int year;
    
};

#endif