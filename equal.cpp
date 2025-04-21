#include <iostream>
using namespace std;

int main(){
    bool res {false};
    cout << boolalpha << endl;
    cout << res;

    bool eq = false;
    double a {11.99999999999999999999};
    double b {12.0};
    eq = a==b;
    cout << eq;

    /*logical operators
    &&
    ||
    >=
    <=
    >
    <
    <=> (spaceship opertor returns a positive,negative or zero value, based on the comparison)
    */

    //exercise
    if ( (age>=18 || (age>15 && parental_consent)) && ssn && !accidents)
        cout << "Yes, you can work.";
}