#include <iostream>
#include <string.h>
using namespace std;
char* strupr(char* s) { //как изпользовать windows.h на маке?..
char* p = s;
    while(*p) {
        *p++ = toupper((signed char)*p);
    }
return s;
}


int main() {
    char Ryad1[50];
    cin>>Ryad1;
    cout<<"Ryad1="<<strupr(Ryad1)<<endl;
    
    return 0;
}
