    #include <iostream>
    #include <string>

    using namespace std;

    char stack[10];
    int n = 10;
    int top = -1;

    void push(char val)
    {
        if (top >= n - 1)
            cout << "Stack Overflow" << endl;
        else
        {
            top++;
            stack[top] = val;
        }
    }
    char pop()
    {
        if (top <= -1)
        {
            cout << "Stack Underflow" << endl;
            return 0;
        }
        else
        {
            char val = stack[top];
            top--;
            return val;
        }
    }

    bool isValid(string s)
    {
        for (char ch : s)
        {
            if (ch == '(' || ch == '{' || ch == '[')
            {
                push(ch);
            }
            else if (ch == ')' || ch == '}' || ch == ']')
            {
                if (top == -1)
                {
                    return false;
                }
                char topElement = pop();
                if ((ch == ')' && topElement != '(') ||
                    (ch == '}' && topElement != '{') ||
                    (ch == ']' && topElement != '['))
                {
                    return false;
                }
            }
        }
        return top == -1;
    }

    int main()
    {
        string str;
        cout << "Enter a string: ";
        getline(cin, str);
        cout << (isValid(str) ? "Valid" : "Invalid") << endl;
        return 0;
    }