/*
    1   2   3   4   
    1   2   3   4
    1   2   3   4
    1   2   3   4   
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i<=n)
    {
        int j = 1;
        while (j<=n)
        {
            cout << j << "\t";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
        
    }
    

    return 0;
}