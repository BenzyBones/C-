// Header guards to prevent multiple inclusion
#ifndef WEIGHT_H
#define WEIGHT_H

#include <iostream>
// iomanip for set precision
#include <iomanip>

class Weight
{
    public:
        // Member function declarations
        float getWeightConversion();
        void setPlanetMultiplier(float planetMult);
        void setEarthWeight(float earthWeight);
        // Class constructor
        Weight();
    private:
        // Member names
        float planetMult_;
        float earthWeight_;
};

void menu(Weight &weightConversion);

#endif // WEIGHT_H
