#include <iostream>


int sar[10] = {10, 14, 19, 26, 27, 31, 33, 35, 42, 44};    // the array to be searched on
int first = 0, last = sizeof(sar)-1, mid = 0,item=0;       // variables for the algorithm

using namespace std;

// Mid finder method to find the next mid point 
int midFinder(int f, int l){
int m = first + (l-f)/2;                                                           // Binary search with O(log n) complexity
// int m = first +((l - f) / (sar[l] - sar[f])) * (item - sar[f]);                 This is for Interpolation search with O(log (log n)) complexity 
return m;
}


// Main method
int main()
{
    // START
    cout<<" Pleas enter the value to search:  ";            // Display a dialog for the user
    cin>>item;                                              // Enter the value to be seached 
    mid = midFinder(first, last);                           // Find the first mid point

    // Loop untill you find the item in the middle
    while(item!=sar[mid]){

        if(item>sar[mid]){                                  // If Item greater than the mid value
            first = mid+1;                                  // Change the first to be mid + 1
            mid = midFinder(first, last);                   // Update the middle value
        }

        else if(item<sar[mid]){                             // If Item less than the middle value
            last = mid-1;                                   // Change the last value to be mid - 1
            mid = midFinder(first, last);                   // Update the middle value
        }

        if (first == mid){                                  // If first is equal to mid, means the item does not found so,
            cout<<"Item not found";                         // Warn the user about the topic
            return 0;                                       // Quit the program
        }

    };

    cout<<"item found in "<<mid<<" and its "<<sar[mid];     // If the loop exit it means the item is found so disply if 
    return 0;                                               // Quit the program

    // END
}
