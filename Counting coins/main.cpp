        /*
        This proudly made by Tesfamichael Molla Ali
        BSc in Electrical and Computer Engineering ( Computer Engineering stream )
        A TME Education Ambassador in Ethiopia and Machine learning engineer
        */

              // START
#include <iostream>
#include <array>


using namespace std;

int mcoin=0, adcoin=0, temp =0, counter=0, ind =0;               //Variables for the algorithm
//int acoins [5] = {};
array <int,5> acoins;        // assigned coins from the user
array <int,15> fcoins;       // final destination for the coins


int main()
{
    cout<<"Enter the coin to be build - ";
    cin>>mcoin;                                      // leting the user choose which coin is going to be bilt from the list
    cout<<"The coin to be constructed will be "<<mcoin<<endl;
    cout<<"Now enter the coins you have ";

    //This loop will recieve the type of coins the user has in his pocket acording to the size of the acoins array
    //It will put the recieved arrays in acoins array acordingly
    for(int i=0; i <arraysize; i++){

        cout<<endl<<i<<" one here: ";
        cin>>acoins[i];
        if(acoins[i]==0) break;           // Terminate if the user enters 0

        cout<<" you have entered - "<<i<<" - valuesplease add more here ot enter 0 to finish "<<endl;

    }

    // Displying what he user have entered so far
    cout<<"you have entered - ";
    for(int i=0; i<acoins.size(); i++)
        if(acoins[i]!=0)
            cout<<acoins[i];

    cout<<" coins"<<endl;
    cout<<"****************************************************************"<<endl;         //Algorithm has started
    cout<<"                     Algorithm Started                          "<<endl;
    cout<<"****************************************************************"<<endl;

            while(true){

                    //This loop will find the largest number from the list acoins
                    for(int i=0; i<acoins.size()-1; i++){

                        if(acoins[i]>temp){         // It should be greater than the old greatest number
                                temp=acoins[i];     // we will save the value on temp var
                                ind=i;              // we will also save the index where we get the max number for letter uses
                                    }
                    }

                    // After finding the max number we will add it to the adcoin to check if it exceeds our prefered value when added
                    // If so we will empty the acoins value corosponding to the max value index saved from above and temp will also be refreached
                    if((adcoin+temp)>mcoin){
                            acoins[ind] = 0;
                            temp = 0;
                            }
                    // If not we will add temp to our final destination, increse the size of our collected coin which is counter
                    // and increase our current stage which is adcoin
                    // If temp is 0 which mans we have reached our end so break the loop
                    else {
                        if(temp == 0) break;
                        fcoins[counter] = temp;
                        counter++;
                        cout<<"Coin "<<temp<<" is chossen as number "<<counter<<" coin"<<endl;
                        adcoin = adcoin + temp;

                            }

            }                                                                                           // Algorithm Finished

    cout<<"******************************************************************"<<endl;
    cout<<"                     Algorithm Finished                          "<<endl;
    cout<<"******************************************************************"<<endl;

    cout<<"Here are your Coins";
            //Display our final destination array
            for(int i=0; i<fcoins.size();i++)
                if(fcoins[i]!=0)
                    cout<<fcoins[i]<<" ";



    // END

    return 0;
}
