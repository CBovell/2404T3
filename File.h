#ifndef FILE_H
#define FILE_H

#include <iostream>
#include <string>
#include <iomanip>
#include "Date.h"

using namespace std;

class File {
		
	public:
        File(string n, string c, Date& d);
		bool lessThan(File* f);
        void print();
        void printContents();
        string getName();
		
	
	private:
		string name;
        string content;
        Date date;
	
};
#endif
