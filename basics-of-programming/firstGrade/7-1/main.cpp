#include<iostream> //Програма 7.1
#include<fstream>
using namespace std;
int main(){
ofstream fout ("output.txt");
fout<<"Prog na C++ "<<" klas 'Server'"<<endl;
fout<<"Bilgorod-Dnistrovsky"<<endl;
fout<<"2007 year."<< endl;
return 0;
}
