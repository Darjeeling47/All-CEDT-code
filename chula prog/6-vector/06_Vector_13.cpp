#include <iostream>
#include <vector>
using namespace std;

vector<string> split(string line, char delimiter) {
    vector<string> sub;

    int l = line.length();

    string tmp = "";
    for(int i = 0; i < l; i++) {
        if(line[i] == delimiter) {
            sub.push_back(tmp);
            tmp = "";
        }
        else{
            tmp += line[i];
        }
    }
    sub.push_back(tmp);

    for(auto itr = sub.begin(); itr != sub.end(); itr++){
        string e = *itr;
        if(e.length() < 1){
            sub.erase(itr);
            itr--;
        }
    }

    return sub;
}

int main() {
    string line;
    getline(cin, line);
    string delim;
    getline(cin, delim);

    for (string e : split(line, delim[0])) {
        cout << '(' << e << ')';
    }
}