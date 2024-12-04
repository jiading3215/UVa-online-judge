#include <iostream>
#include <string>
using namespace std;

int main() {
    string in;
    while (cin >> in) {
        if (in[0] == '0')
            break;
        int sum = 0, i, temp = 0;
        for (i = 0; i < in.size(); i++)
            sum += in[i] - '0';
        if (sum < 10)
            cout << sum << endl;
        else {
            do {
                temp = sum;
                for (sum = 0; temp != 0; temp /= 10)
                    sum += temp % 10;
            } while (sum > 9);
            cout << sum << endl;
        }
    }
    return 0;
}
