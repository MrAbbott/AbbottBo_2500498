/* 
   File:   main
   Author: Bo Abbott
   Created on September 12, 2016, 10:30 AM
   Purpose:  calculate distance traveled in free fall
 */

//System Libraries
#include <iostream>//Input/Output objects

using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const float GRAVITY=32.174; //acceleration in ft/sec^2
//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float time; //time as input in seconds
    float dist; //distance to free fall
    //Input values
    cout<<"This problem determines distance dropped in free fall"<<endl;
    cout<<"Input the time in free fall, un its of secons"<<endl;
    cin>>time;
    //Process values -> Map inputs to Outputs
    dist=GRAVITY*time*time/2;
    
    //Display Output
    cout<<"Gravity ="<<GRAVITY<<"ft/sec^2"<<endl;
    cout<<"Time fallen ="<<time<<"seconds"<<endl;
    cout<<"Distance traveled ="<<dist<<"ft"<<endl;
    //Exit Program
    return 0;
}