#include <iostream>
using namespace std;

int main() 
{
    int count;
    float price;
    float tax;

    cout << "Calculate the total price of all products incl. value added tax:\n";

    cout << "\nItem price (in EUROS)?";
    cin >> price;

    cout << "\nValue added tax rate (in %)?";
    cin >> tax;

    cout << "\nNumber of items?";
    cin >> count;

    cout << "\nTOTAL PRICE = " << price*(1 + tax/100)*count << ",- EUROS";
    
    return 0;
}
