#include <iostream>
#include <string>
#include <stdio.h>
#include <string.h>
#include <vector>
#include <sstream>

using namespace std;

void error_message(string cmd) {
  cout << "Error: " << cmd << " Unknown command\n";
}

std::vector<string> parse(string rep) {
  cout << "parsing";
  std::vector<string> command;
  string temp = ""; 

  for (std::string::iterator it = rep.begin(); it != rep.end(); ++it) {
     if(it.compare(" ") == 0){
       command.push_back (temp);
       temp = "";
     } else {
       temp.append(it);
     }
  }
  return command;
}

int main() {
 string rep;
 cout << "turtle> ";
 cin >> rep; 
 std::vector<string> cmd_vector = parse(rep);
 for (std::vector<string>::const_iterator i = cmd_vector.begin(); i!= cmd_vector.end(); ++i) {
   cout << *i << ' ';
 } 
 cout << '\n';

 return 0;
}



//while(true) {


//cout << rep;
/*
 if (command == "help") {
   cout << "help\n";
   cout << "new 'filepath' - creates a new file to draw on\n";
   continue;
 } else if (rep == "quit") {
   cout << "bye\n";
   break;
 } else {
   error_message(rep)
 }
*/

//}

