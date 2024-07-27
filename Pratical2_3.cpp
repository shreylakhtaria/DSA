#include <iostream>
using namespace std;

void rearrangeArray(int A[], int N)
{
    for (int i = 0; i < N - 1; ++i)
    {
        if (i % 2 == 0)
        {
            if (A[i] > A[i + 1])
            {
                // Swap A[i] and A[i+1]
                int temp = A[i];
                A[i] = A[i + 1];
                A[i + 1] = temp;
            }
        }
        else
        {
            if (A[i] < A[i + 1])
            {
                // Swap A[i] and A[i+1]
                int temp = A[i];
                A[i] = A[i + 1];
                A[i + 1] = temp;
            }
        }
    }
}

int main()
{
    int T;
    cout << "Enter the number of test cases" << endl;
    cin >> T;
    while (T--)
    {
        int N;
        cout << "Enter the size of the array" << endl;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; ++i)
        {
            cout << "Enter the element " << i + 1 << endl;
            cin >> A[i];
        }
        rearrangeArray(A, N);
        for (int i = 0; i < N; ++i)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
