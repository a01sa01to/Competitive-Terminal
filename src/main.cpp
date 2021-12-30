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
  cout << "Type 'help' or 'h' to show help." << endl;
  while (true) {
    cout << endl;
    string command = question("Command");
    if (command == "compile" || command == "c") {
      message("Compile Selected.");
      message("Compiling...");
      int x = run((char*) "g++ a.cpp -o a.out -std=c++17 -I . -D_GLIBCXX_DEBUG -DLOCAL");
      showResult("Compile", x);
    }
    else if (command == "exit" || command == "e") {
      message("Exiting...");
      break;
    }
    else if (command == "help" || command == "h") {
      help();
    }
    else if (command == "install" || command == "i") {
      message("Install Selected.");
      border();
      message("Updating...");
      cout << endl;
      int x = run((char*) "sudo apt update -y");
      cout << endl;
      showResult("Update", x);
      if (x != 0) continue;
      border();
      message("Installing...");
      cout << endl;
      x = run((char*) "sudo apt install -y g++");
      cout << endl;
      showResult("Install", x);
      if (x != 0) continue;
      border();
      message("Finished!");
    }
    else if (command == "reset" || command == "r") {
      message("Reset Selected.");
      int x = run((char*) "cat ./settings/template.cpp > a.cpp");
      showResult("Reset", x);
    }
    else if (command == "test" || command == "t") {
      message("Test Selected.");
      cout << "? Type Sample Input" << endl;
      border();
      int x = run((char*) "./a.out");
      border();
      showResult("Test", x);
    }
    else if (command == "test-in" || command == "ti") {
      message("Test (Input from stdin.txt) Selected.");
      message("Running...");
      border();
      int x = run((char*) "./a.out < stdin.txt");
      border();
      showResult("Test", x);
    }
    else if (command == "test-in-out" || command == "tio") {
      message("Test (Input from stdin.txt, Output to stdout.txt) Selected.");
      message("Running...");
      int x = run((char*) "./a.out < stdin.txt > stdout.txt");
      showResult("Test", x);
    }
    else if (command == "test-out" || command == "to") {
      message("Test (Output to stdout.txt) Selected.");
      cout << "? Type Sample Input" << endl;
      border();
      int x = run((char*) "./a.out > stdout.txt");
      border();
      showResult("Test", x);
    }
    else {
      message("No Command Found. Try Again.");
    }
  }
  this_thread::sleep_for(chrono::seconds(1));
  return 0;
}