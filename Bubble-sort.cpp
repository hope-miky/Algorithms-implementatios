// START
#include <iostream>

using namespace std;

int sar[11] = {14,30,47,17,60,5,25,2,78,54,19};             // the array to be sorted
int temp =0, i=0,j=0,k=0;                                   // variables to be used
bool swap1 =true;                                           // bool to store whether or not swapping took place
int Max = 11;                                               // max size of the array

// Method to display the array
void display(){
    cout<<endl;                                             // New line
    cout<<"[ ";                             
    for(i =0; i<Max-1; i++){
        cout<<sar[i]<<", ";                                 // display thevalue
    }
    cout<<" ]";
}

// Main method
int main(){
    display();                                              // Display the unsorted array
    // First loop
    for(j=0; j<Max-1;j++){                      
      swap1=false;                                          
      display();                                            // Display before sorting one step
      // Second loop
        for(i =0; i<Max-2-j; i++){
            // Compare the two numbers and swap if sar[i] > sar[i+1]
            if(sar[i] >= sar[i+1]){
                temp = sar[i];
                sar[i] = sar[i+1];                                          // Swapping
                sar[i+1] = temp;
                swap1 =true;
            }
            
        }
    if(!swap1) break;                                                   // if there is swap taken place it means the array is sorted so exit
         
    }

    return 0;
}

// END