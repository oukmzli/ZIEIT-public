#include <iostream> //Програма 6.1
using namespace std;
int main()
{
char abc [27]; // 26 символів плюс NULL
char let; int i;
//Заповнення рядкового масиву латинськими літерами
for (let = 'a', i = 0; let <= 'z'; let++, i++)
abc [i] = let;
abc [i] = '\0'; //Ознака кінця рядка
cout << abc; //Виведення рядкової константи;
return 0;
}
