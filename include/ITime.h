#ifndef ITIME_H
#define ITIME_H

#include <vector>

class ITime {

public:

    virtual ~ITime() {}

    /**
     * @brief Returns the sub-array of a time. Ex: Decade -> years
     * 
     * You must keep in mind that this returns POINTERS rather than by reference
     * So please manage this properly in the future
    */
    virtual std::vector<ITime*> getSubTime() const = 0;

};



#endif