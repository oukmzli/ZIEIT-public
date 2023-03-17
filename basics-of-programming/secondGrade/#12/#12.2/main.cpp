#include <iostream>
#include <fstream>
using namespace std;

int main() {
    double cnst, temp = 0, counter = 0; // обявлення змінних
    std::ifstream f("infi.txt"); std::ofstream g("smoothed.txt");
    // перевірка файлів
    if (!f) {
        cout << "Сannot open input file\n";
        return 1;
    } else if (!g) {
        cout << "Problems with output file\n";
        return 1;
    }
    while (f >> cnst) counter++; // підрахунок кількості констант
    if (counter == 0) {     // перевірка наявності констант в файлі
        cout << "infi.txt is empty" << endl;
        return 1; }
    f.clear(); f.seekg(0); // повернення до початку зчитування файлу
    //обчислення та заповнення файлу
    while (f >> cnst) {
        if (counter > 1) {
            g << (temp + cnst) / 2 << '\n';
            temp = cnst;
        } else g << cnst << '\n';
    }
    f.close(); g.close(); // закриття читання та редагування файлу
    return 0;
}
