#include <iostream>
#include "volume.hpp"
using namespace std;

int main() {
    Volume firstRoom;
    cout << "Room 1: " << endl;
    cout << "Enter x: "; cin >> firstRoom.x;
    cout << "Enter y: "; cin >> firstRoom.y;
    cout << "Enter z: "; cin >> firstRoom.z;
    cout << "Volume of first room is: " << calc(firstRoom) << endl;
    Volume secondRoom;
    cout << "Room 2: " << endl;
    cout << "Enter x: "; cin >> secondRoom.x;
    cout << "Enter y: "; cin >> secondRoom.y;
    cout << "Enter z: "; cin >> secondRoom.z;
    cout << "Volume of second room is: " << calc(secondRoom) << endl;
    
    Volume* thirdRoom = new Volume[3];
    int n;
    cout << "Enter amount of third rooms: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Enter x of #" << i+1 << " third room: ";
        cin >> thirdRoom[i].x;
        cout << "Enter y of #" << i+1 << " third room: ";
        cin >> thirdRoom[i].y;
        cout << "Enter z of #" << i+1 << " third room: ";
        cin >> thirdRoom[i].z;
        cout << "Volume of third room #" << i+1 << " is: " << calc(thirdRoom) << endl;
        
        cout << "For thirdRoom's #" << i+1 << ": ";
        comparison(firstRoom, secondRoom, thirdRoom);
    }
     
    return 0;
}
