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

        vector<int> vector1;
        vector<int> vector2;

        vector1.push_back(10);
        vector1.push_back(20);
        cout<<"vector 1 first ele and size:"<<endl;
        cout << vector1.at(0) << endl;
        cout << vector1.size() << endl;

        vector2.push_back(100);
        vector2.push_back(200);
        cout<<"vector 2 first ele and size:"<<endl;
        cout << vector2.at(0) << endl;
        cout << vector2.size() << endl;

        vector<vector<int>> vector2d;
        vector2d.push_back(vector1);
        vector2d.push_back(vector2);
        
        // Print 2D vector
        for(const auto& row : vector2d) {
            for(const auto& elem : row) {
                cout << elem << " ";
            }
            cout << endl;
        }
        return 0;
    
}