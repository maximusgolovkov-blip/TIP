#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age;

    cout << "Имя: ";
    getline(cin, name);     // имя может содержать пробелы

    cout << "Возраст: ";
    cin >> age;
    if (!cin) {
        cerr << "Некорректный возраст" << endl;
        return 1;
    }

    cout << "Имя: " << name << ", Возраст: " << age << " лет" << endl;
    return 0;
}
