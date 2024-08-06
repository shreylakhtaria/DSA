#include <iostream>
#include <stack>
#include <string>

using namespace std;

// Function to check if a character is an operator
bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

// Function to get the precedence of an operator
int getPrecedence(char op) {
    if (op == '+' || op == '-')
        return 1;
    else if (op == '*' || op == '/')
        return 2;
    return 0;
}

// Function to convert infix expression to postfix expression
string infixToPostfix(string infix) {
    stack<char> s;
    string postfix;

    for (char c : infix) {
        // If the character is an operand, append it to the postfix expression
        if (isalnum(c))
            postfix += c;
        // If the character is an opening parenthesis, push it to the stack
        else if (c == '(')
            s.push(c);
        // If the character is a closing parenthesis, pop operators from the stack and append them to the postfix expression until an opening parenthesis is encountered
        else if (c == ')') {
            while (!s.empty() && s.top() != '(') {
                postfix += s.top();
                s.pop();
            }
            s.pop(); // Pop the opening parenthesis from the stack
        }
        // If the character is an operator, pop operators from the stack and append them to the postfix expression until an operator with lower precedence is encountered or the stack is empty
        else if (isOperator(c)) {
            while (!s.empty() && getPrecedence(s.top()) >= getPrecedence(c)) {
                postfix += s.top();
                s.pop();
            }
            s.push(c);
        }
    }

    // Pop any remaining operators from the stack and append them to the postfix expression
    while (!s.empty()) {
        postfix += s.top();
        s.pop();
    }

    return postfix;
}

int main() {
    string infix;
    cout << "Enter an infix expression: ";
    getline(cin, infix);

    string postfix = infixToPostfix(infix);
    cout << "Postfix expression: " << postfix << endl;

    return 0;
}