#include <iostream>
using namespace std;
#include <string>
int get_age(const std::string& she_said) {
  return stoi(she_said);
}
int main()
{
    cout<<  get_age("5 years old")<<endl;
    cout<<  get_age("6 years old")<<endl;
    cout << get_age("9 years old")<<endl;
}