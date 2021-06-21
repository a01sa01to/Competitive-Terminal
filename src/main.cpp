#define _GLIBCXX_DEBUG
#include "functions/command.cpp"
#include "functions/help.cpp"
#include "functions/message.cpp"
#include "functions/question.cpp"

#include <chrono>
#include <iomanip>
#include <iostream>
#include <string>
#include <thread>
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
    if (command == "compile") {
      run("Compile", (char*) "g++ a.cpp -o a.out");
    }
    else if (command == "exit") {
      message("Exiting...");
      break;
    }
    else if (command == "help") {
      help();
    }
    else if (command == "reset") {
      run("Reset", (char*) "cat ./settings/template.cpp > a.cpp");
    }
    else {
      message("No Command Found. Try Again.");
    }
  }
  this_thread::sleep_for(chrono::seconds(1));
  return 0;
}