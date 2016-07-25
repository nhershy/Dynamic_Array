//creating dynamic array
#include<iostream>
using namespace std;

int main()
{
    int aSize;
    int *ary;
    cout << "how big is your array? ";
    cin >> aSize;
    int num=0;
    ary = new int[aSize];

    for (int i=0;i<aSize;i++)
    {
        cout << "input number in element " << i+1 << " :";
        cin >> num;
        ary[i] = num;
    }

    for (int i=0;i<aSize;i++)
    {
        cout << ary[i] << endl;
    }
    return 0;
}
