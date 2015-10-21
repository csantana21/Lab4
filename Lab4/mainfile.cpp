/*
 * mainfile.cpp
 *
 *  Created on: Oct 14, 2015
 *      Author: csantana
 */
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "Headerfile.h"
using namespace std;

struct patient {
		string firstname;
		string lastname;
		char sex;
		char bloodtype;
		string organ;
		int age;
		int year;
	};

patient arr[100];

int main (int argc, char *argv[]){

	int record = 0;
	int result;

	for(;1;)
	{
		cout << "There are currently " << record << " patient(s) in the list.";

			result = options();


			if(result == 1){
				record = record + 1;
				cout << "Please enter the following (in order):" << endl;
				//cout <<
			}
			if (result == 2){}

			if (result == 3){
				cout << "The program has ended.";
				break;
			}
			cout >> "what up cuz";
			cout >> "hello";
	}

}

