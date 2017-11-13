// Include for header file
#include "weight.h"
// Class constructor for default weight
Weight::Weight()
{
    earthWeight_ = 100;
}
// Member function
void Weight::setPlanetMultiplier(float planetMult)
{
    planetMult_ = planetMult;
}
// Member function
// Setting earth weight
void Weight::setEarthWeight(float earthWeight)
{
        std::cout << "\nPlease input your weight on planet Earth\n" << std::endl
            << "If an invalid weight is chosen the default value of 100lbs will be selected\n" << std::endl;
        std::cin >> earthWeight;

        if (earthWeight > 0)
        {
            earthWeight_ = earthWeight;
        }
}
// Member function
// Returning converted weight
float Weight::getWeightConversion()
{
    float planetWeight = earthWeight_ * planetMult_;

    return planetWeight;
}
// Menu function with class passed by reference
void menu(Weight &weightConversion)
{
    float earthWeight;
    int planetSelection;
    bool exit = false;

    std::cout << "This is a planetary body weight conversion program" << std::endl;

    // Calling member function to set Earth weight
    weightConversion.setEarthWeight(earthWeight);

    std::cout << "\nEnter 1 for Mercury" << std::endl
        << "Enter 2 for Venus" << std::endl
        << "Enter 3 for Mars" << std::endl
        << "Enter 4 for Earth's Moon" << std::endl
        << "Enter 5 for all Conversions" << std::endl
        << "Enter 6 to end program\n" << std::endl;
    // While loop for menu selection
    while (!exit)
    {
        std::cin >> planetSelection;
        switch (planetSelection)
        {
            case 1:
                // Calling member function and setting multiplier to mercury
                weightConversion.setPlanetMultiplier(0.378);
                std::cout << std::fixed << std::setprecision(2) << "\nYour weight on Mercury = "
                    << weightConversion.getWeightConversion() << " lbs\n" << std::endl;
                break;
            case 2:
                weightConversion.setPlanetMultiplier(0.907);
                std::cout << std::fixed << std::setprecision(2) << "\nYour weight on Venus = "
                    << weightConversion.getWeightConversion() << " lbs\n" << std::endl;
                break;
            case 3:
                weightConversion.setPlanetMultiplier(0.377);
                std::cout << std::fixed << std::setprecision(2) << "\nYour weight on Mars = "
                    << weightConversion.getWeightConversion() << " lbs\n" << std::endl;
                break;
            case 4:
                weightConversion.setPlanetMultiplier(0.166);
                std::cout << std::fixed << std::setprecision(2) << "\nYour weight on Earth's Moon = "
                    << weightConversion.getWeightConversion() << " lbs\n" << std::endl;
                break;
            case 5:
                weightConversion.setPlanetMultiplier(0.378);
                std::cout << std::fixed << std::setprecision(2) << "\nYour weight on Mercury = "
                    << weightConversion.getWeightConversion() << " lbs\n" << std::endl;

                weightConversion.setPlanetMultiplier(0.907);
                std::cout << std::fixed << std::setprecision(2) << "\nYour weight on Venus = "
                    << weightConversion.getWeightConversion() << " lbs\n" << std::endl;

                weightConversion.setPlanetMultiplier(0.377);
                std::cout << std::fixed << std::setprecision(2) << "\nYour weight on Mars = "
                    << weightConversion.getWeightConversion() << " lbs\n" << std::endl;

                weightConversion.setPlanetMultiplier(0.166);
                std::cout << std::fixed << std::setprecision(2) << "\nYour weight on Earth's Moon = "
                    << weightConversion.getWeightConversion() << " lbs\n" << std::endl;
                break;
            case 6:
                std::cout << "\nThank you for using the program!\n" << std::endl;

                exit = true;
                break;
            default:
                std::cout << "\nInvalid selection, please try again\n" << std::endl;
        }
    }
}
