#include <iostream>
#include <string>
#include <stack>

using namespace std;

string str;
stack<char> s;

int main() {
    cin >> str;

    int answer = 0, temp = 1;
    bool isValid = true;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '(') {
            temp *= 2;
            s.push('(');
        } else if (str[i] == '[') {
            temp *= 3;
            s.push('[');
        } else if (str[i] == ')' || str[i] == ']') {
            if (s.empty() || (str[i] == ')' && s.top() != '(') || (str[i] == ']' && s.top() != '[')) {
                isValid = false;
                break;
            }

            if ((str[i] == ')' && str[i-1] == '(') || (str[i] == ']' && str[i-1] == '[')) {
                answer += temp;
            }

            temp /= (str[i] == ')') ? 2 : 3;
            s.pop();
        }
    }

    if (!s.empty() || !isValid) answer = 0; 

    cout << answer << "\n";

    return 0;
}
