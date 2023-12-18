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

    //GETTER METHODS

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

    /**
     * @brief Returns the x position of an ITime object
     * 
     * @returns The x position of the object
    */
   float getX() const;

   /**
     * @brief Returns the y position of an ITime object
     * 
     * @returns The y position of the object
    */
   float getY() const;

    //SETTER METHODS

    /**
     * @brief Sets the x position of an ITime object
     * 
     * @param newX The new desired x position
    */
   void setX(float newX);

   /**
     * @brief Sets the y position of an ITime object
     * 
     * @param newX The new desired y position
    */
   void setY(float newY);


    /**
     * @brief Sets the color of an ITime object's border
     * 
     * @param color The Raylib color you would like to set
    */
    void setLineColor(Color color);

    /**
     * @brief Sets the state of the object's display (true -> displayed)
     * 
     * @param displayed The boolean choice for the value
    */
   void setIsDisplayed(bool displayed);

    /**
     * @brief Toggles the state of the object's display value
    */
   void toggleDisplayed();

protected:

    bool isDisplayed = false;

    float width;
    float height;
    float x;
    float y;

    Rectangle visual;

    Color lineColor = WHITE; //Default white
    Color fillColor;

};



#endif