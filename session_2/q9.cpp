#include <iostream>
using namespace std;

void joinString(string& a, string& b){
    string res = a + b;
    cout << res << endl;
}

int main() {
  string a = "Hello ";
  string b = "World";
  joinString(a, b);
  return 0;
}
