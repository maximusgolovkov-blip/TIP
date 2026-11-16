#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<int> st; 
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        string cmd;
        cin >> cmd;

        if (cmd == "push") {
            int x;
            cin >> x;
            st.push_back(x);
        } else if (cmd == "pop") {
            if (!st.empty()) {
                st.pop_back();
            }
        } else if (cmd == "empty") {
            if (st.empty()) {
                cout << "true" << '\n';
            } else {
                cout << "false" << '\n';
            }
        }
    }

    return 0;
}
