#include <string>
#include "BWT.h"
#include<iostream>
using namespace std;

/**
 * Implement bwt() correctly
 */
string bwt(const string & s) {
    /* YOUR CODE HERE */
    cout << "SDFASDF" << endl;

    string* transforms = new string[s.length()];
    string temp = s; 
    string temp3;
    string tempChar;
    string output = "";
    for(int i =0; i <s.length();i++){
     transforms[i]=temp;
        tempChar = temp[s.length()-1];
        temp = temp.substr(0, s.length()-1);
        tempChar = tempChar + temp;
        temp = tempChar;
        
    }
    for(int i=0; i<s.length();i++){
        for(int j=0; j<s.length();j++){
        if (transforms[i].compare(transforms[j])<0){
            temp3 = transforms[i];
            transforms[i] = transforms[j];
            transforms[j]=temp3;
        }

        }
    }
    for(int i=0;i<s.length();i++){
        output = output + transforms[i][s.length()-1];
    
    }
    //delete transforms;
    return output;
    
}
