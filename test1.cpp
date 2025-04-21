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
    
    cin>>nc>>endl;;
    
    int dol;
    int quart;
    int dimes;
    int nickels;
    int pennies;

    int res;
    
    if((a/100)>0){
        dol=a/100;
        res = a%100;
    }
    
    else if((res/25)>0 && res!=0){
        quart=res/25;
        res = res%25;
    }

    else if((res/10)>0 && res!=0){
        dimes=res/10;
        res = res%10;
    }

    else if((res/5)>0 && res!=0){
        nickels=res/5;
        res = res%5;
    }

    else if((res/1)>0 && res!=0){
        pennies=res/1;
    }

    else{
        cout<<"dollar: "<<dol<<endl;
        cout<<"quarter: "<<quart<<endl;
        cout<<"dimes: "<<dimes<<endl;
        cout<<"nickels: "<<nickels<<endl;
        cout<<"pennies: "<<pennies<<endl
        return 0;
    }

    
}