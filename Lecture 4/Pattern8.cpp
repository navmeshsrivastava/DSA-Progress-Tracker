// 1
// 2   3
// 4   5   6
// 7   8   9   10

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int num = 1;

    int i = 1;

    while (i<=n)
    {
        int j = 1;
        while (j<=i)
        {
            cout << num << "\t";
            num++;
            j++;
        }
        cout<<endl;
        i++;
        
    }
    

    return 0;
}