/* 
frank's capret problem
no. of rooms: 2
price per room: 30
cost: 60 (no. of rooms * price per room)
tax rate: 0.06

tax: 3.6 (cost * tax rate))
total estimate: 63.6 (cost + tax)

get no. of rooms.
display price per room.
calculate cost, tax, total estimate and estimate expiration time.
*/

#include <iostream>
using namespace std;
int main(){
    cout << "Hello, welcome to Frank's Carpet Cleaning Service" << endl;
    cout << "\nHow many rooms would you like cleaned? ";
    int number_of_rooms{0};
    cin >> number_of_rooms;

    const int price_per_room{30};
    cout <<"\nthe price per room is:"<<price_per_room<<endl;

    double cost{number_of_rooms * price_per_room};
    cout<<"the cost is:"<<cost<<endl;

    const double tax_rate{0.06};
    double tax{tax_rate*cost};
    cout<<"the tax charged is:"<<tax<<endl;

    double estimate = cost + tax;
    cout<<"the estimate is:"<<estimate<<endl;

}



