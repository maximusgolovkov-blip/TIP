#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<string> words; 
    string word;

    while (cin >> word) {
        
        bool found = false;
        for (int i = 0; i < (int)words.size(); ++i) {
            if (words[i] == word) {
                found = true;
                break;
            }
        }
        if (!found) {
            words.push_back(word);
        }
    }

    
    for (int i = 0; i < (int)words.size(); ++i) {
        cout << words[i] << '\n';
    }

    return 0;
}
