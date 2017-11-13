#include "weight.h"

int main()
{
    // Create an object from the class
    Weight weightConversion;
    // Call the menu function
    menu(weightConversion);
    // To keep console open after program execution is finished
    std::cin.sync();
    std::cin.get();

    return 0;
}
