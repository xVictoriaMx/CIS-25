#include <iostream>
#include <ctime>
#include <cstdlib>

//Prints a dice roll
int main() {

    srand(static_cast<unsigned int>(time(0)));

    int roll, roll1;
    int min = 1;
    int max = 6;

    roll = (rand() % (max - min + 1)) + min;
    roll1 = (rand() % (max - min + 1)) + min;

    std::cout << "First dice roll: " << roll << std::endl;
    std::cout << "Second dice roll: " << roll1 << std::endl;

    return 0;
    
}