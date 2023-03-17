#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    string str;
    cin >> str;
    int count = 0;
    for (int i = 0; i <= str.size() - 1; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'y') {
            count++;
        }
    }
     cout << count << endl;
    }
