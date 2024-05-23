#include <iostream>
#include <string>
using namespace std;

class ValidPalindrom {
private:
    // case-1: remove all non valid chars, nums
    bool valid(char ch) {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
            return true;
        }
        return false;
    }

    // case-2: Make all in lower case
    char toLowerCase(char ch) {
        if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) {
            return ch;
        } else {
            return ch - 'A' + 'a';
        }
    }

    // case-3: check string is Palindrome or not
    bool isPalindrome(string s) {
        int st = 0;
        int e = s.length() - 1;

        while (st < e) {
            if (s[st] != s[e]) {
                return false;
            } else {
                st++;
                e--;
            }
        }
        return true;
    }

public:
    bool isPalindrom(string s) {
        // case-1: remove non-valid chars
        string temp = "";
        for (int j = 0; j < s.length(); j++) {
            if (valid(s[j])) {
                temp.push_back(s[j]);
            }
        }

        // case-2: convert to lowercase
        for (int j = 0; j < temp.length(); j++) {
            temp[j] = toLowerCase(temp[j]);
        }

        // case-3: check if palindrome
        return isPalindrome(temp);
    }
};

int main() {
    ValidPalindrom vp;
    string testString;

    cout << "Enter string to check valid palindrome or not: ";
    getline(cin, testString);

    if (vp.isPalindrom(testString)) {
        cout << " valid palindrome." << endl;
    } else {
        cout << " not a valid palindrome." << endl;
    }

    return 0;
}

