#ifndef ICLICKABLE_H
#define ICLICKABLE_H

// Libraries
#include "raylib.h"

class IClickable {

public:


    /**
     * @brief Provides a default constructor for IClickable
     * 
     * @param x The x value on the raylib window
     * @param y The y value on the raylib window
     * @param width The width of the drawn object
     * @param height The height of the drawn object
    */
    IClickable(float x, float y, float width, float height) : x(x),
                                                              y(y),
                                                              width(width),
                                                              height(height),
                                                              visual{x, y, width, height} {}; 

    
    

    virtual void display() = 0; // Implement a basic visual drawing method here instead of =0

    float getX() const;

    float getY() const;

    void setX(float newX);

    void setY(float newY);

    void setLineColor(Color newColor);

    virtual void setFillColor(Color newColor);

    /**

    void setIsDisplayed(bool newDisplayed);

    void toggleDisplayed();

    virtual void setIsSelected(bool newSelected);

    void toggleIsSelected();

    bool getIsSelected() const;

    Rectangle getVisual() const;

    */

protected:

    // Dimensions
    float x;
    float y;
    float width;
    float height;

    Rectangle visual;

    Color lineColor = WHITE;
    Color fillColor = BLACK;

    /*

    bool isDisplayed;
    bool isSelected;

    */



};

#endif