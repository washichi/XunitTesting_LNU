#include <stdio.h>
#include <iostream>

int main()
{

    int input = 0;

    while (true)
    {
        switch (input)
        {
        case 1:
            std::cout << "You chose operation 1 \n";
            input = 0;
            break;
        case 2:
            std::cout << "You chose operation 2 \n";
            input = 0;
            break;
        case 3:
            std::cout << "You chose operation 3 \n";
            input = 0;
            break;
        case 4:
            std::cout << "You chose operation 4 \n";
            input = 0;
            break;
        case 5:
            std::cout << "You chose operation 5 \n";
            input = 0;
            break;
        case 6:
            std::cout << "You chose Exit \n";
            return 0;
            break;

        default:
            std::cout << "\n"
                      << "PlaylistOptimizer 1.0: \n\n";
            std::cout << "Type one of the numbers to choose an option \n"
                      << "\n";
            std::cout << "[0] Show me the menu again \n";
            std::cout << "[1] Use operation 1 \n";
            std::cout << "[2] Use operation 2 \n";
            std::cout << "[3] Use operation 3 \n";
            std::cout << "[4] Use operation 4 \n";
            std::cout << "[5] Use operation 5 \n";
            std::cout << "[6] Exit Program \n";
            std::cin >> input;
            break;
        }
    }
    return 0;
}