import java.io.*;

class Base
{
    public int i;

    public Base()
    {
        i = 11;
    }

    public Base(int x)
    {
        i = x;
    }

    public void fun()
    {
        System.out.println("In Base fun");
    }
}

class Derived extends Base{

        public int i;

        public Derived()
        {
            super(11);
            i = 21;

        }

        public Derived(int x)
        {
            this();
            this.i = 21;
        }

        public void gun()
        {
            System.out.println(i);
            System.out.println(this.i);
            System.out.println(super.i);
            super.fun();
        }
}
public class Demo {

                public static void main(String arg[])
                {
                    Derived dobj = new Derived();
                    dobj.gun();
                    System.out.println("in main");
                }

}