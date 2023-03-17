#include <iostream>
#include <string>
using namespace std;

int main() {
    char Ryad1[50];char Ryad2[50];
    cout<<"Vvedite pervoe slovo: "; cin>>Ryad1;
    cout<<"Vvedite vtoroe slovo: "; cin>>Ryad2;
    strcat(Ryad1, Ryad2);
    cout<<"Dlina stroki: "<<strlen(Ryad1)<<endl;
    return 0;
}
