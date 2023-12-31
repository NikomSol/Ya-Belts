#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
#define all(c) c.begin(), c.end()

class SortedStrings {
public:
  void AddString(const string& s) {
    words.push_back(s);
  }
  vector<string> GetSortedStrings() {
    sort(all(words));
    return words;
  }
private:
  vector <string> words = {};
};

void PrintSortedStrings(SortedStrings& strings) {
  for (const string& s : strings.GetSortedStrings()) {
    cout << s << " ";
  }
  cout << endl;
}


int main() {
  SortedStrings strings;
  
  strings.AddString("first");
  strings.AddString("third");
  strings.AddString("second");
  PrintSortedStrings(strings);
  
  strings.AddString("second");
  PrintSortedStrings(strings);
  
  return 0;
}