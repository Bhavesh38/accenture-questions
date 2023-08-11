#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

bool isValid(const string &regex, const string &str) {
    int i = 0, j = 0;
    while (i < regex.size() && j < str.size()) {
        if (regex[i] == '[') {
            i++;
            while (regex[i] != ']') {
                if (regex[i] == str[j]) {
                    j++;
                    break;
                }
                i++;
            }
        } else if (regex[i] != str[j]) {
            return false;
        } else {
            i++;
            j++;
        }
    }
    return i == regex.size() && j == str.size();
}

string findLongestRegex(string a, string b, string c, string regex = "", int idx = 0) {
    if (idx == 26) {
        if (isValid(regex, a) && isValid(regex, b) && !isValid(regex, c)) {
            return regex;
        }
        return "";
    }

    string withChar = findLongestRegex(a, b, c, regex + (char)('A' + idx), idx + 1);
    string withoutChar = findLongestRegex(a, b, c, regex, idx + 1);

    if (withChar.size() > withoutChar.size()) {
        return withChar;
    } else {
        return withoutChar;
    }
}

int main() {
    string a = "AB";
    string b = "BD";
    string c = "CD";

    string result = findLongestRegex(a, b, c);

    if (result.empty()) {
        cout << "-1" << endl;
    } else {
        cout << "Longest regex: " << result << endl;
    }

    return 0;
}
