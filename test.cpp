#include <iostream>
#include <string>
using namespace std;
class Test
{
 private:
   string m_sIn;
 public:
   Test(string sIn)
   {
     m_sIn=sIn;
   }
   void showInfo()
   {
     cout<<m_sIn<<endl;
   }
};
int main()
{
  cout<<"hello,world"<<endl;
  Test test("jackie");
  test.showInfo();
  return 1;
}
