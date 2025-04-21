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

    //exercise2
    int nc;
    cin >> nc;

    int dol = 0;
    int quart = 0;
    int dimes = 0;
    int nickels = 0;
    int pennies = 0;

    int res = nc;

    if(res >= 100) {
        dol = res/100;
        res = res%100;
    }

    if(res >= 25) {
        quart = res/25;
        res = res%25;
    }

    if(res >= 10) {
        dimes = res/10;
        res = res%10;
    }

    if(res >= 5) {
        nickels = res/5;
        res = res%5;
    }

    pennies = res;

    cout << "dollar: " << dol << endl;
    cout << "quarter: " << quart << endl;
    cout << "dimes: " << dimes << endl;
    cout << "nickels: " << nickels << endl;
    cout << "pennies: " << pennies << endl;

}