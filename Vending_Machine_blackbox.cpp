#include <iostream>
#include <iomanip>
#include <string>
#include <limits>

int main()
{
    double credits;       ///< user input for credits
    std::string selection;  ///< user input for vending address

    std::cout << "Welcome to vending machine!" << std::endl;
    std::cout << "Please input credits to purchase an item ex. 1.00 or 5.00" << std::endl;
    std::cout << "Ready -> " << std::flush;

    // we need to enforce that the user entered a number here
    while(!(std::cin >> credits))
    {
        std::cout << "Invalid value!\nPlease input credits to purchase an item! ex. 5.00" << std::endl;
        std::cout << "Ready -> " << std::flush;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    // (optional) format output stream for displaying credits i.e. 1.00
    std::cout << std::fixed;
    std::cout << std::setprecision(2);

    std::cout << "Please make a selection (A-J,0-8) ex. B6 or A2" << std::endl;
    std::cout << "Ready (cr. " << credits << ") -> " << std::flush;
    // any input can be a std::string so we will need to post-process to make sure
    // it's a valid input (format is correct and the product exists to vend)
    std::cin >> selection;
    // TODO: validate the users selection!

    return 0;
}







