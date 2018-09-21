#include <iostream>
#include <string>
using namespace std;
class Test
{
  private:
   int m_nVal;
  public:
  Test(){
   m_nVal=1000;
  }
  Test(const Test & test)
  {
    m_nVal=test.m_nVal;
  }
  Test& operator= (const Test & test)
  {
     m_nVal=test.m_nVal;
     return *this;
  }
  void PrnVal()
  {
   cout<<m_nVal<<endl;
  }
};
int main()
{
  Test  test;
  test.PrnVal();
  return 1;
}
