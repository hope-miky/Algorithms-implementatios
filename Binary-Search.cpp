#include <iostream>


int sar[10] = {10, 14, 19, 26, 27, 31, 33, 35, 42, 44};
int first = 0, last = sizeof(sar)-1, mid = 0;

using namespace std;

int midFinder(int f, int l){
int m = first + (l-f)/2;
return m;
}

int main()
{
    int item;
    cout<<" Pleas enter the value to search:  ";
    cin>>item;
    mid = midFinder(first, last);

    while(item!=sar[mid]){

        if(item>sar[mid]){
            first = mid+1;
            mid = midFinder(first, last);
        }

        else if(item<sar[mid]){
            last = mid-1;
            mid = midFinder(first, last);
        }

    };

    cout<<"item found in "<<mid<<" and its "<<sar[mid];
    return 0;
}
