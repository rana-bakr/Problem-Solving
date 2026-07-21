#include <string>
#include <iostream>
using namespace std;

string sum_str(const std::string& a, const std::string& b) {
  int x = a.empty() ? 0 : stoi(a);
  int y= b.empty()? 0 : stoi(b);
    return to_string(x+y);
}
int main()
{
    cout<<sum_str("4", "5")<<endl;
    cout<<sum_str("42", "")<<endl;
    cout<<sum_str("", "42")<<endl;
}