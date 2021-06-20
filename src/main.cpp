#define _GLIBCXX_DEBUG
#include "functions/command.h"
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
    else if (command == "reset") {
      run("Reset", "cat ./settings/template.cpp > a.cpp");
    }
    else {
      message("No Command Found. Try Again.");
    }
  }
  return 0;
}