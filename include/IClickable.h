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

    /**
     * @brief Getter method for the x location of the IClickable in the raylib window
     * 
     * @returns The x location of the IClickable in the raylib window
    */
    float getX() const;

    /**
     * @brief Getter method for the y location of the IClickable in the raylib window
     * 
     * @returns The y location of the IClickable in the raylib window
    */
    float getY() const;

    /**
     * @brief Setter method for the x location of the IClickable in the raylib window
     * 
     * @param newX Desired x location of the IClickable
    */
    void setX(float newX);

    /**
     * @brief Setter method for the y location of the IClickable in the raylib window
     * 
     * @param newY Desired y location of the IClickable
    */
    void setY(float newY);

    /**
     * @brief Setter method for the line color of the IClickable in the raylib window
     * 
     * @param newColor Desired line color of the IClickable
    */
    void setLineColor(Color newColor);

    /**
     * @brief Setter method for the fill color of the IClickable in the raylib window
     * 
     * @param newColor Desired fill color of the IClickable
    */
    virtual void setFillColor(Color newColor);

    /**
     * @brief Sets the display state of the IClickable in raylib
     * 
     * @param newDisplayed Desired line color of the IClickable
    */
    void setIsDisplayed(bool newDisplayed);

    /**
     * @brief Toggles the display state of the IClickable in raylib
    */
    void toggleDisplayed();
    
    /**
     * @brief Sets the selected state of the IClickable in raylib
     * 
     * @param newSelected Desired selected state of the IClickable
    */
    virtual void setIsSelected(bool newSelected);

    /**
     * @brief Toggles the selected state of the IClickable in raylib
    */
    virtual void toggleIsSelected();

    /**
     * @brief Getter method for the selected state of the IClickable
     * 
     * @returns The selected state location of the IClickable
    */
    virtual bool getIsSelected() const;

    /**
     * @brief Getter method for the Rectangle object used by Raylib to show the IClickable
     * 
     * @returns The Rectangle object for the IClickable
    */
    Rectangle getVisual() const;

protected:

    // Dimensions
    float x;
    float y;
    float width;
    float height;

    Rectangle visual;

    Color lineColor = WHITE;
    Color fillColor = BLACK;

    bool isDisplayed = false;
    bool isSelected = false;


};

#endif