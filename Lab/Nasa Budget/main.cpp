/* 
   File:   main
   Created on September 12, 2016, 10:30 AM
   Purpose:  Calculate the Nasa Budget as percentage of Federal Budget
    Federal Budget -> $3.999 trillion from 
        https://en.wikipedia.org/wiki/2016_United_States_federal_budget
    Nasa Budget -> $18.5 billion from
        https://www.nasa.gov/sites/default/files/files/Agency_Fact_Sheet_FY_2016.pdf
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const unsigned char PERCENT=100;  //Conversion to percentage

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float NasaBt=585e9f;   //See reference from above
    float fedBdgt=3.999e12f;//See reference from above
    float pNasa;          //Percentage Nasa spending
    
    //Process values -> Map inputs to Outputs
    pNasa=NasaBt/fedBdgt*PERCENT;
    
    //How to round to 2 decimal places
    int round=pNasa*100+0.5f;//Shift by 2 decimal places *100 then round up 0.5
    pNasa=round/100.0f;//Integer truncated then shift back 2 decimal places
    
    //Display Output
    cout<<"The Nasa Budget for 2016 = $"<<NasaBt<<endl;
    cout<<"The Federal Budget for 2016  = $"<<NasaBt<<endl;
    cout<<"The Percentage spent on Nasa = "<<pNasa<<"%"<<endl;
    
    //Exit Program
    return 0;
}
