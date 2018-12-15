#include <iostream>
#include <string>
using namespace std;

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
class Drive:public Base
{
public:
  Drive(int nval,string sval):Base(nval,sval){}
  void showInfo()
  {
   Base::showInfo();
  }
};
int main()
{
  Base base(1000,"jackie");
  base.showInfo();
  Drive drive(2000,"hepeng");
  drive.showInfo();
  return 1;
}
