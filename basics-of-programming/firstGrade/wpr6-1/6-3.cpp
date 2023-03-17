#include <iostream>
using namespace std;

void show_ryad(char ryad[])
{
cout << ryad << endl;
}

int main()
{
    char lineOne [] = "Hello, C++!";
    char lineTwo [] = "Good Bye, C++!";
    show_ryad(lineOne);
    show_ryad(lineTwo);

return 0;
}