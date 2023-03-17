#include <iostream>
#include <string>
using namespace std;

struct NOTE {
    string name;
    long tel;
    int bday[3];
};

NOTE setPersonData(int n, NOTE blocknote[n]) {
    for (int i = 0; i < n; i++) {
        cout << "Person No " << i + 1 << endl;
        cout << "Enter name - "; cin >> blocknote[i].name;
        cout << "Enter phone number - "; cin >> blocknote[i].tel;
        cout << "Enter day of bday - "; cin >> blocknote[i].bday[0];
        cout << "Enter month of bday - "; cin >> blocknote[i].bday[1];
        cout << "Enter year of bday - "; cin >> blocknote[i].bday[2];
    }
    return blocknote[n];
}

bool bdayChecker (int i, int month, NOTE blocknote[i]) {
    if (blocknote[i].bday[2] == month) {
        return true;
    }
    return false;
}

int main() {
    int n;
    cout << "Enter the number of persons: ";
    cin >> n;
    int month;
    cout << "Enter month: "; cin >> month;
    NOTE blocknote[n];
    setPersonData(n, blocknote);
    
    bool anyBdays = false;
    cout << "________________________________" << endl;
    cout << "List of people born this month: " << endl;
    for (int i = 0; i < n; i++) {
        if (bdayChecker(i, month, blocknote) == true) {
            cout << "Name - " << blocknote[i].name << endl;
            cout << "Phone number - " << blocknote[i].tel << endl;
            cout << "Date of birth - " << blocknote[i].bday[1] << ".";
            cout << blocknote[i].bday[1] << ".";
            cout << blocknote[i].bday[2] << endl;
            anyBdays = true;
        }
    }
    if (anyBdays == false) {
        cout << "There is no bdays this month." << endl;
    }
    cout << "________________________________" << endl;
    
    return 0;
}
