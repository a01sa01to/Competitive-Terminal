#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

string question(string q) {
  cout << "? " << q << endl;
  cout << "> ";
  string ans;
  cin >> ans;
  cout << endl;
  transform(ans.begin(), ans.end(), ans.begin(),
            [](unsigned char c) { return tolower(c); });
  return ans;
}