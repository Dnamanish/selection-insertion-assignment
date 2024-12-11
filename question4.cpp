#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {5, 1, 5, 5, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 1; i < n; i++)
    {
        int j = i;
        while (j >= 1 && arr[j] < arr[j - 1])
        {
            swap(arr[j], arr[j - 1]);
            j--;
        }
    }
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        x *= 10;
        x = x + arr[i];
    }

    // for 2nd minimum
    for (int i = n - 1; i >= 1; i--)
    {
        if (arr[i] != arr[i - 1])
        {
            swap(arr[i], arr[i - 1]);
            break;
        }
    }
    int y=0;
    for (int i = 0; i < n; i++)
    {
        y *= 10;
        y = y + arr[i];
    }
    cout<<"minimum sum:"<<x+y;
    
}