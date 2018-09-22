import java.io.*;
import java.util.*;

class TestNode
{
  private String m_sVal="jackie";
  public TestNode(String sVal)
  {
    m_sVal=sVal;
  }
  public void showNode()
  {
    System.out.println("value is:"+m_sVal);
  }
}
class TestContainer
{
  private List<TestNode> tl=new ArrayList<TestNode>();
  public void addNode(TestNode node)
  {
   int size=tl.size();
   if(size==100) tl.clear();
   tl.add(node);
  }
  public void listNode()
  {
    Iterator it=tl.iterator();
    while(it.hasNext())
    {
     TestNode node=(TestNode)it.next();
     node.showNode();
    }
  }
}
public class test{
  public static void main(String [] args)
  { 
    TestNode test1=new TestNode("helen");
    TestNode test2=new TestNode("shirly");
    TestContainer tc=new TestContainer();
    tc.addNode(test1);
    tc.addNode(test2);
    tc.listNode();
  }
}
