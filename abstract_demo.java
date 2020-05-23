abstract class Base
{
    int sub(int no1,int no2)
    {
        return no1- no2;

    }
    abstract public int add(int no1,int no2);
}
class Derived extends Base
{
    public int add(int no1,int no2)
    {
        return no1 + no2;
    }
}
public class abstract_demo {

        public static void main(String arg[])
        {
            //Base bobj = new Base();
            Base bobj = new Derived();
            System.out.println(bobj.add(3,4));
        }

}