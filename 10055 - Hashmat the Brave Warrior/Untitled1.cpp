#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    long long m, n;
    while (cin >> m >> n)
        cout << abs(m - n) << endl;
    return 0;
}
