#include <iostream>
using namespace std;

double farh(double a)
{
    return 1.8 * a + 32.0;
}

int main()
{    
    double celsjusz;
    cout << "Podaj temperature w stopniach Celsjusza: ";
    cin >> celsjusz;
    cout << celsjusz<< " stopnie Celsjusza to " << farh(celsjusz) << " stopnie Farhrenheita";
}
