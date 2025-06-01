/*
1   2   3
2   3   4
3   4   5
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
        int num = i;
        int j = 1;
        while (j<=n)
        {
            cout << num << "\t";
            j++;
            num++;
        }
        cout << endl;
        i++;
        
    }
    

    return 0;
}

// i + j - 1