#include <iostream>
#include <string>
#include <stdio.h>
#include <string.h>

using namespace std;

int main() {
 string rep;
while(true) {
 cout << "turtle> ";
 cin >> rep; 
 //cout << rep;
 if (rep == "help") {
   cout << "help\n";
   cout << "new 'filepath' - creates a new file to draw on\n";
   continue;
 } else if (rep == "quit") {
   cout << "bye\n";
   break;
 } else {
   cout << "Error: " << rep << " Unknown command\n";
   continue;
 }

}


 return 0;
}
