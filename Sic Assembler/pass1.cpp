//============================================================================
// Name        : pass1.cpp
// Author      : sharshar
// Version     :
// Copyright   : Your copyright notice
// Description : pass1 assembler of sic/xe machine in C++, Ansi-style
//============================================================================

#include <iostream>
#include "parser.h"
using namespace std;

int main() {

	Pass1 pass1;
	regex e("\\s*pass1\\s+(.+)\\s*", regex_constants::icase);
	smatch m;
	string line;
	cout<<"    enter as follow (pass1 sourcefile)"<<endl;
	getline(cin, line);
	if (regex_search(line, m, e))
		pass1.excutePass1(m[1]);
	else
		cout<<" enter source file in proper format";
	return 0;
}
