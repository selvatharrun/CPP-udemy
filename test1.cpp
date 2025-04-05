#include <iostream>
#include <vector> // Include the vector library
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
    vector<int> a;  // Dynamic array using vector
    int n;
    cout << "Enter how many numbers you want: ";
    cin >> n;

    for(int i = 0; i < n; i++){
        a.push_back(i);  // Add elements dynamically
    }

    for(int i = 0; i < a.size(); i++){
        cout << a[i];
        if(i < a.size() - 1) {
            cout << ",";
        }
    }
    cout << endl;

}