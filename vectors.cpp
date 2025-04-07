/*write a pro*/

#include <iostream>
using namespace std;

int main(){
    vector vector1<int> {};
    vector vector2<int> {};

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

    vector<int> vector2d {}{};
    vector2d.push_back(vector1);
    vector2d.push_back(vector2);
}