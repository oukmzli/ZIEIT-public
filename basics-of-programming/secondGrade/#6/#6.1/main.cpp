#include <iostream>
using namespace std;

class Volume {
public:
    float x;
    float y;
    float z;
    
};

int main() {
    Volume firstRoom;
    cout << "Room 1: " << endl;
    cout << "Enter x: "; cin >> firstRoom.x;
    cout << "Enter y: "; cin >> firstRoom.y;
    cout << "Enter z: "; cin >> firstRoom.z;
    int vOne = firstRoom.x * firstRoom.y * firstRoom.z;
    cout << "Volume of first room is: " << vOne << endl;
    Volume secondRoom;
    cout << "Room 2: " << endl;
    cout << "Enter x: "; cin >> secondRoom.x;
    cout << "Enter y: "; cin >> secondRoom.y;
    cout << "Enter z: "; cin >> secondRoom.z;
    int vTwo = secondRoom.x * secondRoom.y * secondRoom.z;
    cout << "Volume of second room is: " << vTwo << endl;
    
    
    int vThree;
    Volume* thirdRoom = new Volume[3];
    int n;
    cout << "Enter amount of third rooms: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> thirdRoom[i].x;
        cin >> thirdRoom[i].y;
        cin >> thirdRoom[i].z;
        vThree = thirdRoom[i].x * thirdRoom[i].y * thirdRoom[i].z;
        cout << "Volume of third room #" << i << "is: " << vThree << endl;
        
        cout << "For thirdRoom's #" << i << ": ";
        if (vOne > vTwo && vOne > vThree) {
            cout << "Largest room  is Room #1" << endl;
        } else if (vTwo > vOne && vTwo > vThree) {
            cout << "Largest room  is Room #2" << endl;
        } else {
            cout << "Largest room  is Room #3" << endl;
        }
    }
    
    return 0;
}
