#include <iostream>
#include <vector>
using namespace std;
std::vector<int> countBy(int x,int n){
  vector<int> v;
  for(int i=0;i<n;i++)
  {
    v.push_back(x*(i+1));
  }
  return v;
}
int main()
{
    vector<int>result = countBy(2,5);
    for(int val : result)
    {
        cout<< val << " ";
    }
}