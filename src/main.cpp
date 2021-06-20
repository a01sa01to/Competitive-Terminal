#define _GLIBCXX_DEBUG
#include "functions/message.h"
#include "functions/question.h"

#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main() {
  cout << fixed << setprecision(15);
  cout << endl;
  cout << "┌──────────────────────────────────────┐" << endl;
  cout << "│                                      │" << endl;
  cout << "│   Competitive Programming Terminal   │" << endl;
  cout << "│                                      │" << endl;
  cout << "│                          Made by Asa │" << endl;
  cout << "└──────────────────────────────────────┘" << endl;
  cout << endl;
  while (true) {
    string command = question("Command");
    if (command == "exit") {
      message("Exiting...");
      break;
    }
    else {
      message("No Command Found. Try Again.");
    }
  }
  return 0;
}