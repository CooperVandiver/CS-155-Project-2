//***************************************
// Name: Cooper Vandiver
// Course: CS 155 - Computer Science 1
// Semester: Spring 2021
// Project 2: The user will enter one, single integer that represents a date in the ISO 8601 format. The input should
// be in the form YYYYMMDD (no dashes/no spaces/year 1000 or later, maximum year 9999). From the integer in this form,
// the program will output the date in the format we are familiar with in the United States, MM/DD/YYYY.
//***************************************
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int val, year, month, day, leap; //declaring variables
    cout<<"Please input a date in the ISO 8601 format (YYYYMMDD)."; //asking user for input
    cin>>val; //input from user
    if(val >= 100000000){ //first conditional to see if date is larger than 8 digits
        cout<<"Invalid length."; //outputting that input was not correct
    } else {
    day = val % 100; //finding and assigning value for day of the date
    val = val / 100; //getting rid of values used for date
    month = val % 100; //finding and assigning value for the month of the date
    val = val / 100; //getting rid of values used for month
    year = val; //assigning remaining portion of original value to the year
    if(year < 1000 || year > 9999){ //conditional to find if length of the input was invalid by using remaining value that was assigned to year
        cout<<"Invalid length."; //outputting that the length of original value was invalid
    } else {
        if(day <=0 || day > 31){ //conditional to test if day of the date is not correct
        cout<<"Invalid day."; //outputting that the day was not valid
    } else {
        if(month <=0 || month >12){ //conditional to test if month is not valid
        cout<<"Invalid month."; //outputting that the month was not valid
    } else {
    if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)){ //conditional to find if given year was a leap year, and if so, assigning that to "leap" value
        leap = year; //assigning year value to leap value
    }
    if (year != leap && month == 2 && day == 29){ //conditional to find if February 29th if valid determined by whether it is a leap year or not
        cout<<"Invalid day."; //outputting that day inputted is not valid
    } else if(month == 2 && (day == 30 || day == 31)){ //conditional to find if the days inputted for February are invalid
        cout<<"Invalid day."; //outputting that day inputted is not valid
    } else if(month == 4 && day == 31){ //conditional to find if day inputted for April is invalid
        cout<<"Invalid day."; //outputting that day inputted is invalid
    } else if(month == 6 && day == 31){ //conditional to find if day inputted for June is invalid
        cout<<"Invalid day."; //outputting that day inputted is invalid
    } else if(month == 9 && day == 31){ //conditional to find if day inputted for September is invalid
        cout<<"Invalid day."; //outputting that day inputted is invalid
    } else if(month == 11 && day == 31){ //conditional to find if day inputted for November is invalid
        cout<<"Invalid day."; //outputting that day inputted is invalid
    } else {
    cout<<month<<"/"<<day<<"/"<<year; //outputting date in format typically used in US
    }
    }
    }
    }
    }
}
