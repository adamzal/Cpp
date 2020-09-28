#include <iostream>
using namespace std;

double jedAstr(double a)
{
    return a*63240;
}

int main()
{    
    double latas;
    cout << "Podaj liczbe lat swietlnych: ";
    cin >> latas;
    cout << latas << " lat swietlnych = " << jedAstr(latas) << " jednostek astronomicznych";
}
