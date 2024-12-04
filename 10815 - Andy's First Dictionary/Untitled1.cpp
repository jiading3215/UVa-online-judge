#include <iostream>
#include <sstream>
#include <string>
#include <set>
using namespace std;

int main() {
    string in;
    set<string> out;
    int i;
    while (cin >> in) {
        for (i = 0; i < in.size(); i++) {
            if (in[i] >= 'A' && in[i] <= 'Z')
                in[i] = in[i] - 'A' + 'a';
            else if (in[i] >= 'a' && in[i] <= 'z')
                ;
            else
                in[i] = ' ';
        }
        string temp;
        stringstream ss(in);
        while (ss >> temp)
            out.insert(temp);
    }
    set<string>::iterator iter;
    for (iter = out.begin(); iter != out.end(); iter++)
        cout << *iter << endl;
    return 0;
}
