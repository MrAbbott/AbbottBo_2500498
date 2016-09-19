/* 
   File:   main
   Author: Bo Abbott
   Created on September 19, 2016, 9:56 AM
   Purpose:  
 */

//System Libraries
#include <iostream>  //Input/Output objects
#include <iomanip>  //format
#include <cmath>   //math library for power function
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const int PERCENT=100;  //percentage conversion
const int MONTHS=12; //months in year
//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    char ncmprds=36; //number of monthly compounding periods
    float intrate=12; //percentage per year
    float loanamt=1e4f; //$10,000 Loan
    float monpay;      //monthly payment 
    float totpaid;     //total amount paid
    float intpaid;     //total interest paid
    //Input values
  
    
    //Process values -> Map inputs to Outputs
    intrate/=(PERCENT*MONTHS);
    float temp=pow((1+intrate/PERCENT/MONTHS),ncmprds);
    monpay=intrate*temp*loanamt/(temp-1);
    totpaid=ncmprds*monpay;
    intpaid=totpaid-loanamt;
    
    //Display Output
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Using floating point values given an error"<<endl;
    cout<<"Loan Amount                 $:"<<setw(15)<<loanamt<<endl;
    cout<<"interest rate % per month   $:"<<setw(15)<<intrate<<endl;
    cout<<"number of months             :             "<<static_cast<int>(ncmprds)<<endl;
    cout<<"monthly Payment             $:"<<setw(15)<<monpay<<endl;
    cout<<"interest paid               $:"<<setw(15)<<intpaid<<endl;
    cout<<"total paid                  $:"<<setw(15)<<totpaid<<endl;
    
    // 
    //display output
    cout<<fixed<<setprecision(2)<<showpoint;
    
    
    //Exit Program
    return 0;
}