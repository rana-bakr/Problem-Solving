#include <iostream>
#include<string>
using namespace std;
string bonus_time(int salary, bool bonus)
{
  int total;
  if(bonus)
     return "$"+ to_string(salary*10);
  else
    return "$"+ to_string(salary);
}
int main()
{
    cout<<bonus_time(10000, true) <<endl;
    cout<<bonus_time(60000, false) <<endl;
}