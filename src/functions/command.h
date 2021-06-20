#include <iostream>
#include <string>
#include <sys/types.h>
#include <sys/wait.h>
using namespace std;

void run(string name, char* command) {
  cout << "! " << name << " Selected." << endl;
  int ret = system(command);
  if (WIFEXITED(ret)) {
    cout << "! " << name << " completed with status " << WEXITSTATUS(ret) << endl;
  }
  else {
    cout << "! " << name << " failed with status -1" << endl;
  }
  cout << endl;
  return;
}