#include <iostream>
#include <iomanip>
// Display 5% tax 
/* Write a program that asks the user to enter a dollar-and-cents amount, 
    then displays the amount with 5% tax added:

    example:
        Enter an amount: 100.00
        With tax added: $105.00
*/

using namespace std;

int main(void)
{
    double d;
    //std::cout.unsetf ( std::ios::floatfield ); 
    std::setprecision(2);
    printf("Enter an amount: ");
    cin >> d;

    cout << "With tax added: $" << d + (d * 5 / 100);
    return 0;
}