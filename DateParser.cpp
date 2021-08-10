#include <iostream>
#include <string>

using namespace std;

int DateParser(string month) {
	int monthInt = 0;
	
	if (month == "January")
		monthInt = 1;
	else if (month == "February")
		monthInt = 2;
	else if (month == "March")
		monthInt = 3;
	else if (month == "April")
		monthInt = 4;
	else if (month == "May")
		monthInt = 5;
	else if (month == "June")
		monthInt = 6;
	else if (month == "July")
		monthInt = 7;
	else if (month == "August")
		monthInt = 8;
	else if (month == "September")
		monthInt = 9;
	else if (month == "October")
		monthInt = 10;
	else if (month == "November")
		monthInt = 11;
	else if (month == "December")
		monthInt = 12;
	return monthInt;
}

int main () {
	
	// TODO: Read dates from input, parse the dates to find the one
	//       in the correct format, and output in m/d/yyyy format
    string date, month, day, year;
    date = "0";
    while(date != "-1"){
        getline(cin, date);

        size_t pos = date.find(' ');
        month = date.substr(0, pos);
        month = to_string(DateParser(month));
        //if not a valid month then skip the rest of this iteration
        if(month == "0") continue;

        size_t pos2 = date.find(",");
        year = date.substr(pos2+2);

        day = date.substr(pos+1,pos2 - 9);
        
        if(month != "0"){
            cout << month << "/" << day << "/" << year << endl;
        }
    }




    
}


/*
Complete main() to read dates from input, one date per line.

Each date's format must be as follows: March 1, 1990. Any date not following that format is incorrect and should be ignored.

Use the substr() function to parse the string and extract the date. The input ends with -1 on a line alone. Output each correct date as: 3/1/1990.

March 1, 1990
April 2 1995
7/15/20
December 13, 2003
-1

3/1/1990
12/13/2003

*/