#ifndef note_hpp
#define note_hpp
#include <string>
struct NOTE {
    std::string name;
    long tel;
    int bday[3];
};
NOTE setPersonData(int n, NOTE blocknote[n]);
bool bdayChecker (int i, int month, NOTE blocknote[i]);
#endif
