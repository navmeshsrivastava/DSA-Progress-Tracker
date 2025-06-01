/*
A   B   C
A   B   C
A   B   C
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
        char ch = 'A';
        while (j<=n)
        {
            cout << ch <<"\t";
            ch++;
            j++;
        }
        cout << endl;
        i++;
        
    }
    

    return 0;
}

/*
int i = 1;
while (i <= n) {
    int j = 1;
    while (j <= n) {
        char ch = 'A' + j - i;
        cout << ch << "\t";
        j++;
    }
    cout << endl;
    i++;
}
*/