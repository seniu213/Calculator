#include <iostream>
#include <stack>
#include <sstream>

using namespace std;

int main() {
    string input;
    cout << "Enter expression in RPN: ";
    getline(cin, input);

    stack<double> st;
    stringstream ss(input);
    string token;

    while (ss >> token) {
        // если это число
        if (isdigit(token[0]) || (token[0] == '-' && token.length() > 1)) {
            st.push(stod(token));
        }
        else {
            // оператор
            double b = st.top(); st.pop();
            double a = st.top(); st.pop();

            if (token == "+") {
                st.push(a + b);
            }
            else if (token == "-") {
                st.push(a - b);
            }
            else if (token == "*") {
                st.push(a * b);
            }
            else if (token == "/") {
                st.push(a / b);
            }
        }
    }

    cout << "Result: " << st.top() << endl;

    return 0;
}