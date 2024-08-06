#include <iostream>
#include <queue>

using namespace std;

int binary_from_1_to_n(int n)
{
    queue<string> q;
    q.push("1"); // Enqueue the first binary number
    

    while (n--)
    {
        string s1 = q.front(); // Dequeue the front binary number
        q.pop();
        cout << s1 << endl; // Print the binary number

        string s2 = s1;b
        q.push(s1.append("0")); // Enqueue the binary number obtained by appending 0 to the front binary number
        q.push(s2.append("1")); // Enqueue the binary number obtained by appending 1 to the front binary number
    }
    return 0;
}

int main ()
{
    int n;
    cout << "Enter how many binary numbers you want to generate: ";
    cin >> n;
    cout << "The result is: " << endl;
    int result = binary_from_1_to_n(n);
    

    return 0;
}
