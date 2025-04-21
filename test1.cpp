#include <iostream>
#include <vector>
using namespace std;
int main(){
    /*
    int age;
    cout << "I am " << age << " years old.";
    unsigned int a = 10;
    long int b=100;
    cout << a<<endl;
    cout<<sizeof(a)<<endl;
    cout<<sizeof(b)<<endl;
    cout << "Hello \t World\n! \beinrerinf" << endl;

    const int c=100;
    #define c 1000;
    cout << c << endl;
    return 0;
    */

    /*write a pro*/ 
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