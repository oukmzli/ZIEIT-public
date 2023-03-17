#include <iostream>
using namespace std;

int str_len(char ryad[])
{
int i;
for (i = 0; ryad[i] != '\0'; i++);
return(i);
}

int main()
{
    char title[] ="Vchimosya programuvannyu ......";
    char lesson[]="Simvolni ryadki ......";
    cout<<"Ryadok: "<<title<<" mae "<<
    str_len(title)<<" simvoliv"<<endl;
    cout<<"Ryadok: "<<lesson<<" mae "<<
    str_len(lesson)<<" simvoliv"<<endl;
    
return 0;
}
