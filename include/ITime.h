#ifndef ITIME_H
#define ITIME_H

#include <vector>
#include "raylib.h"

#include "IClickable.h"

class ITime : public IClickable {

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
        : IClickable(x, y, width, height) {}

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
     * @brief Displays the ITime object on the raylib window
    */
    void display() override;

    //SETTER METHODS

    /**
     * @brief Sets the color of an ITime object's border
     * 
     * @param color The Raylib color you would like to set
    */
    void setLineColor(Color color);

    /**
     * @brief Sets the "selected" property of the ITime
     * 
     * @param newSelected The new value of isSelected
     */
    void setIsSelected(bool newSelected) override;

    /**
     * @brief Toggled the "selected" property of ITime
     */
    void toggleIsSelected() override;

    /**
     * @brief Returns the status of the selection
     * 
     * @returns True if the boolean is selected, False if the boolean is not selected
    */
    bool getIsSelected() const override;

    /**
     * @brief Gets the parent element of the ITime* element
     * 
     * @returns The parent element of the current ITime*
     */
    ITime* getParent() const;

    /**
     * @brief Sets parent element of ITime*. 
     * 
     * @note SHOULD NOT BE USED EXCEPT IN A CONSTRUCTOR. A PARENT ELEMENT SHOULD NOT BE CHANGING.
     * 
     * @param parent_elem The parent (should be the decade if year etc)
    */
    void setParent(ITime* parent_elem);

    /**
     * @brief Sets ITime and children (if applicable to a certain color)
     * 
     * @param newColor The color that the ITime will be set to (should be from settings)
    */
   void setFillColor(Color newColor) override;

protected:

    ITime* parent = nullptr;

    bool isSelected = false;

    Color lineColor = WHITE; //Default white
    Color fillColor = BLACK;

    Color defaultLineColor = WHITE;

};



#endif