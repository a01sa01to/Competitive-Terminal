#include <iostream>
#include <string>
#include <sys/types.h>
#include <sys/wait.h>
using namespace std;

int run(char* command) {
  int ret = system(command);
  if (WIFEXITED(ret)) {
    return WEXITSTATUS(ret);
  }
  else {
    return -1;
  }
}

void showResult(string name, int x) {
  if (x == 0) message(name + " Completed!");
  else
    message(name + " Failed... (code: " + to_string(x) + ")");
}