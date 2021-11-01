//shortest cpp
#include<iostream>
using namespace std;
int main()
{
    char a[100];
    cin.getline(a,100);
    //we are at origin
    int x=0;
    int y=0;
    for(int i=0; a[i]!='\0'; i++)
    {
        switch(a[i])
        {
            case 'N':
            y++;
            break;
            case 'S':
            y--;
            break;
            case 'E':
            x++;
            break;
            case 'W':
            x--;
            break;
        }
    }
    cout<<x<<" "<<y;
    return 0;
}