// This is the CPP file you will edit and turn in.

#include <cctype>
#include <cmath>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include "console.h"
#include "filelib.h"
#include "grid.h"
#include "gwindow.h"
#include "simpio.h"
#include "strlib.h"
#include "lifegui.h"
using namespace std;

int main() {
	string s;

	ifstream stream;

    openFile(stream, "life.cpp");
    getline(stream,s);
    cout << "Have a nice Life!" << s << endl;
    return 0;
}
