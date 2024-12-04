#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    int n;
    string str;
    map<string, int> name;
    cin >> n;
    while (n--) {
        cin >> str;
        if (! name.count(str))
            name[str] = 1;
        else
            name[str]++;
        getline(cin, str);
    }
    map<string, int>::iterator iter;
    for (iter = name.begin(); iter != name.end(); iter++)
        cout << iter->first << " " << iter->second << endl;
    return 0;
}
