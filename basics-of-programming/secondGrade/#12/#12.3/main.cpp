#include <iostream>
#include <fstream>
using namespace std;

int screenOutput (ifstream f) {
    char ch;
    while (f >> ch) cout << ch; /* цикл уведення */
    cout << endl;
    f.close();// закривається редагування файлу
    return 0;
}
int fileOutput(std::ifstream f, std::ofstream g) {
    char ch;
    while (f >> ch) g << ch; /* цикл уведення */
    f.close(); g.close();// закривається редагування файлів
    return 0;
}
int fileEndOutput (std::ifstream f, std::ofstream g) {
    char ch;
    g.seekp(0, ios::end);// переміщення курсору на кінець файлу
    g << '\n';// відступ від попередніх даних
    while (f >> ch) g << ch; /* цикл уведення */
    f.close(); g.close();// закривається редагування файлів
    return 0;
}
int main() {
    // перевірка файлів
    if (!std::ifstream("infi.txt")) {
        cout << "Сannot open input file\n"; return 1;
    } else if (!std::ofstream("output.txt")) {
        cout << "Problems with output file\n"; return 1;
    }
    // вибір методу виводу
    cout<<"Choose output method:\n'a'-screen;\n'b'-another file;\n'c'-end of another file.\n";
    char method;
    cin >> method;
    // виклик функцій
    switch (method) {
        case 'a':
            return screenOutput(ifstream("infi.txt"));
        case 'b':
            return fileOutput(std::ifstream("infi.txt"), std::ofstream("output.txt"));
        case 'c':
            return fileEndOutput(std::ifstream("infi.txt"), std::ofstream("output.txt", ofstream::app));
        default:
            cout << "You have not choosen method." << endl;
            return 1;
    }
}

