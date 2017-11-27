#include <iostream>

/** Celsius to Fahrenheit
 *  Cathal Hogan
 *  C00184521
 *  25/09/2017
 */

using namespace std;

int main()
{    //Variable
    double Cel,Fah;

    //Cout displays on screen
    cout << "Degrees to Fahrenheit" << endl;
    cout << "Enter Degrees Celsius:";
    // Cin relates to cout
    cin>>Cel;

    //Calculates sum
    Fah= (Cel*1.8)+32;

    // Display result on screen
    cout<<"Temperature in Fahrenheit:\t"<<Fah<<endl;

    return 0;
}
