/* 
   File:   gaddis ch3 problem
   Author: Bo Abbott    
   Created on september 14, 2016, 10:15 AM
   Purpose:  develop math tutor to emphasize the random number generator
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <cstdlib>    // random number seed
#include <ctime>      // seed random number gerator 
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
   //set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declaration of Variables
    unsigned short op1,op2,result,answer;
    
    //Input values
    op1=rand()%900+100; //3 digit random number
    op2=rand()%900+100;    //Process values -> Map inputs to Outputs
    
    //process value -> Map inputs to outputs
    result=op1+op2;
    
    //Display Output
    cout<<"solve the following addition problem"<<endl;
    cout<<"   "<<op1<<endl;
    cout<<"  +  "<<op2<<endl;
    cout<<"------"<<endl;
    
    //ask user for answer
    cout<<endl<<"what is the answer?"<<endl;
    cin>>answer;
    cout<<endl;
    
    //determine if coorect or not
    cout<<"The answer is " <<(result==answer?"correct":"Incorrect")<<endl;
    
    cout<<"answer"<<result<<endl;
    //Exit Program
    return 0;
}

