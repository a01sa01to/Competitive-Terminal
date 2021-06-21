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

void test() {
  cout << "! Test Selected." << endl;
  cout << "? Type Sample Input" << endl;
  cout << "─────────────────────" << endl;
  int ret = system("./a.out");
  cout << "─────────────────────" << endl;
  cout << endl;
  if (WIFEXITED(ret)) {
    cout << "! Test completed with status " << WEXITSTATUS(ret) << endl;
  }
  else {
    cout << "! Test failed with status -1" << endl;
  }
  cout << endl;
}

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
    if (command == "compile" || command == "c") {
      run("Compile", (char*) "g++ a.cpp -o a.out");
    }
    else if (command == "exit" || command == "e") {
      message("Exiting...");
      break;
    }
    else if (command == "help" || command == "h") {
      help();
    }
    else if (command == "install" || command == "i") {
      run("Install", (char*) "sudo apt update -y && sudo apt upgrade -y && sudo apt install g++");
    }
    else if (command == "reset" || command == "r") {
      run("Reset", (char*) "cat ./settings/template.cpp > a.cpp");
    }
    else if (command == "test" || command == "t") {
      test();
    }
    else if (command == "test-in" || command == "ti") {
      run("Test (Input from stdin.txt)", (char*) "cat ./stdin.txt | ./a.out");
    }
    else if (command == "test-in-out" || command == "tio") {
      run("Test (Input from stdin.txt and Output to stdout.txt)", (char*) "cat ./stdin.txt | ./a.out > ./stdout.txt");
    }
    else if (command == "test-out" || command == "to") {
      run("Test (Output to stdout.txt)", (char*) "./a.out > ./stdout.txt");
    }
    else {
      message("No Command Found. Try Again.");
    }
  }
  this_thread::sleep_for(chrono::seconds(1));
  return 0;
}