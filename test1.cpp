#include <iostream>
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
    int a[10] {};  // Explicitly declare array size
    for(int i=0;i<10;i++){
        a[i]=i;
    }
    for(int i=0;i<10;i++){
        cout<<a[i];
        if(a[i] != a[-1]) {
            cout << ",";
        }
    }
    cout << endl;
    
}