#include <iostream>
#include <string>// using string constructors
#include <vector>
#include "general.h"

using namespace std;

string commandline{};
vector<string> CmdArgs{};


int main(){

    commandline = "sachin vasanta shet siddapur UK karnataka";
    CmdArgs = split(string commandline);
    return 0;
}