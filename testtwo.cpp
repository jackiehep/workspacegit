#include <iostream>
#include <string>
#include <list>
using namespace std;

class YourName
{
 private:
   string m_sVal;
 public:
  YourName(string sVal)
  {
   m_sVal=sVal;
  }
  void ShowInfo()
  {
   cout<<m_sVal<<endl;
  }
};
int main()
{
  YourName yourname("english");
  yourname.ShowInfo();
  return 1;
}
