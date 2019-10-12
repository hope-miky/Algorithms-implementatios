#include <iostream>


int sar[10] = {10, 14, 19, 26, 27, 31, 33, 35, 42, 44};
int first = 0, last = sizeof(sar), mid = 0;

using namespace std;

int midFinder(int f, int l){
int m = (l-f)/2;
return m;
}

int main()
{
    int item;
    cout<<" Pleas enter the value to search:  ";
    cin>>item;
    mid = midFinder(first, last);
    while(item!=mid){
        

    }
    return 0;
}
