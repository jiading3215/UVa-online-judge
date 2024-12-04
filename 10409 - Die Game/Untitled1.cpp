#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, temp;
    string in;
    while (cin >> n, n != 0) {
        int s[6] = {1, 2, 6, 5, 3, 4};
        while (n--) {
            cin >> in;
            if (in == "north") {
                temp = s[0];
                s[0] = s[3];
                s[3] = s[2];
                s[2] = s[1];
                s[1] = temp;
            }
            else if (in == "south") {
                temp = s[0];
                s[0] = s[1];
                s[1] = s[2];
                s[2] = s[3];
                s[3] = temp;
            }
            else if (in == "west") {
                temp = s[0];
                s[0] = s[5];
                s[5] = s[2];
                s[2] = s[4];
                s[4] = temp;
            }
            else {
                temp = s[0];
                s[0] = s[4];
                s[4] = s[2];
                s[2] = s[5];
                s[5] = temp;
            }
        }
        cout << s[0] << endl;
    }
    return 0;
}
