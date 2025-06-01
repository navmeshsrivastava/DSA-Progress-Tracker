/*
A   A   A   
B   B   B
C   C   C
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;
    char ch = 'A';

    while (i<=n)
    {
        int j = 1;
        while (j<=n)
        {
            cout << ch << "\t";
            j++;
        }
        cout << endl;
        i++;
        ch++;
        
    }
    

    return 0;
}

/*
#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;

    int row = 1;
    while(row <= n) {

        int col = 1;

        while(col <= n) {
            char ch = 'A' + row - 1;
            cout<< ch;
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }
    return 0;
}
*/