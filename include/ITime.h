#ifndef ITIME_H
#define ITIME_H

#include <vector>
#include "raylib.h"

class ITime {

public:

    /**
     * @brief Provides a default constructor for ITime
     * 
     * @param x The x value on the raylib window
     * @param y The y value on the raylib window
     * @param width The width of the drawn object
     * @param height The height of the drawn object
    */
    ITime(float x, float y, float width, float height)
        : x(x), y(y), width(width), height(height),
          visual{x, y, width, height} {}

    virtual ~ITime() {}

    /**
     * @brief Returns the sub-array of a time. Ex: Decade -> years
     * 
     * You must keep in mind that this returns POINTERS rather than by reference
     * So please manage this properly in the future
    */
    virtual std::vector<ITime*> getSubTime() const = 0;

    /**
     * @brief Getter method for the Rectangle object that represents the ITime
    */
    Rectangle getVisual() const;

    /**
     * @brief Displays the ITime object on the raylib window
    */
    void display();

protected:

    float width;
    float height;
    float x;
    float y;

    Rectangle visual;

};



#endif