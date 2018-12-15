#include <iostream>
#include <string>
using namespace sdt;

class Base{
private:
  int mnval;
  string msval;
public:
  Base(int nval,string sval)
  {
    mnval=nval;msval=sval;
  }
  void showInfo()
  {
    cout<<msval<<"..."<<mnval<<endl;
  }
};
int main()
{
  Base base(1000,"jackie");
  base.showInfo();
  return 1;
}
