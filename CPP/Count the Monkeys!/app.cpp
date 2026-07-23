#include <iostream>
#include <vector>
using namespace std;

vector<int> MonkeyCount(int n) {
  // your code here
  vector<int> monkeyCount;

    for (int i = 1; i <= n; i++)
    {
        monkeyCount.push_back(i);
    }

    return monkeyCount;
}
int main()
{
     vector<int> monkeys = MonkeyCount(10);

    for (int i = 0; i < monkeys.size(); i++)
    {
        cout << monkeys[i] << " ";
    }

    cout << endl;
}