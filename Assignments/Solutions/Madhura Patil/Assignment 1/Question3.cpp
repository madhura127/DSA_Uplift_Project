#include <iostream>
using namespace std;

int main()
{
    int x=1;
    for(int i=1; i<=4; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<x++<<" ";
        }
        cout<<endl;
    }

    return 0;
}
