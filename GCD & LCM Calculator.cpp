#include<iostream>
using namespace std;

int gcd(int a, int b) 
{
    if (b == 0) 
    {
        return a;
    }
    return gcd(b, a % b);
}

int lcm(int a, int b)
{
    int h;
    h = a * b / gcd(a, b);
    return h;
}

int main() 
{
    int n;
    int a;
    cout << "Enter 0 for GCD / 1 for LCM: ";
    cin >> a;
    //int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    int result = arr[0];
    for (int i = 1; i < n; i++) 
    {  
        if(a == 0)
        {
            result = gcd(result, arr[i]);
            cout << "The GCD of the " << n << " elements is: " << result << endl;
            break;
        }
        if(a == 1)
        {
            result = lcm(result, arr[i]);
            cout << "The LCM of the " << n << " elements is: " << result << endl;
            break;
        }
    }
    return 0;
}
