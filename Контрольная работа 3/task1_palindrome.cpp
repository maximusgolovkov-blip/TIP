#include <iostream>
#include <string>
using namespace std;

bool f(const string& s, int l, int r) {
    if (l >= r) return true;                 // база рекурсии
    if (s[l] != s[r]) return false;
    return f(s, l + 1, r - 1);               // рекурсивный вызов
}

int main() {
    string s;
    cin >> s;
    cout << (f(s, 0, static_cast<int>(s.size()) - 1)
                ? "Палиндром" : "Не палиндром") << endl;
    return 0;
}
