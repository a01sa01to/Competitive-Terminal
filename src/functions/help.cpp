#include <iostream>
using namespace std;
void help() {
  cout << "──────────────────────────────────────────────────" << endl;
  cout << "         Competitive Programming Terminal         " << endl;
  cout << "  Copyright © Since 2021 Asa All Rights Reserved. " << endl;
  cout << "──────────────────────────────────────────────────" << endl;
  cout << endl;
  cout << "This Program is Open Source Software" << endl;
  cout << "  and available on GitHub with MIT License." << endl;
  cout << endl;
  cout << "https://github.com/a01sa01to/Competitive-Terminal" << endl;
  cout << endl;
  cout << "─────────────── Available Commands ───────────────" << endl;
  cout << "          Commands are Case-insensitive.          " << endl;
  cout << "─ compile (Alias: c)" << endl;
  cout << "  Compile a.cpp and Output as a.out" << endl;
  cout << "  Same as 'g++ a.cpp -o a.out'" << endl;
  cout << "─ exit (Alias: e)" << endl;
  cout << "  Exit this terminal" << endl;
  cout << "─ help (Alias: h)" << endl;
  cout << "  Show this help" << endl;
  cout << "─ install (Alias: i)" << endl;
  cout << "  Update and Upgrade packages, then Install g++" << endl;
  cout << "  Same as 'sudo apt update -y &&" << endl;
  cout << "    sudo apt upgrade -y && sudo apt install g++'" << endl;
  cout << "─ reset (Alias: r)" << endl;
  cout << "  Reset a.cpp according to settings/template.cpp" << endl;
  cout << "  Same as 'cat ./settings/template.cpp > a.cpp'" << endl;
  cout << "─ test (Alias: t)" << endl;
  cout << "  Run a.out; you can test sample inputs" << endl;
  cout << "  Same as './a.out'" << endl;

  cout << endl;
}