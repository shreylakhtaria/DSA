#include <iostream>
#include <stack>
#include <string>

using namespace std;

int evaluatePostfixExpression(const string &postfixExpression)
{
    stack<int> operandStack;

    for (char ch : postfixExpression)
    {
        if (isspace(ch))
        {
            continue; // Ignore spaces
        }

        if (isdigit(ch))
        {
            operandStack.push(ch - '0'); // Convert char digit to int and push
        }
        else
        {
            int operand2 = operandStack.top();
            operandStack.pop();
            int operand1 = operandStack.top();
            operandStack.pop();

            switch (ch)
            {
            case '+':
                operandStack.push(operand1 + operand2);
                break;
            case '-':
                operandStack.push(operand1 - operand2);
                break;
            case '*':
                operandStack.push(operand1 * operand2);
                break;
            case '/':
                operandStack.push(operand1 / operand2);
                break;
            }
        }
    }

    return operandStack.top(); // The result will be on top of the stack
}

int main()
{
    string postfixExpression;
    cout << "Enter a postfix expression: ";
    getline(cin, postfixExpression);

    int result = evaluatePostfixExpression(postfixExpression);
    cout << "Result: " << result << endl;

    return 0;
}
