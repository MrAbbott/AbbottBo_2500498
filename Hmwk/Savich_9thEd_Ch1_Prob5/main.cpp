/* 
   File:   main1
   Author: Bo Abbott
   Created on September 14, 2016, 12:30 AM
   Purpose:  Creates big "C" using input character
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    char s=' ';//The space character
    char c;    //Character used to create the Big C
    
    //Input values
    cout<<"What character would you like to use to make a Big C, input\n";
    cin>>c;
    
    //Process values -> Map inputs to Outputs
    
    //Display Output -> The Big C
    cout<<s<<s<<c<<c<<c<<endl;
    cout<<s<<c<<s<<s<<c<<endl;
    cout<<c<<s<<s<<s<<s<<endl;
    cout<<c<<s<<s<<s<<s<<endl;
    cout<<c<<s<<s<<s<<s<<endl;
    cout<<c<<s<<s<<s<<s<<endl;
    cout<<c<<s<<s<<s<<s<<endl;
    cout<<s<<c<<s<<s<<c<<endl;
    cout<<s<<s<<c<<c<<c<<endl;

    //Exit Program
    return 0;
}