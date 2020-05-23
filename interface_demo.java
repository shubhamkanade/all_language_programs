import java.io.*;
import java.lang.*;

interface Demo
{
    int i=11;

    void fun();
    void gun();
}
class Hello implements Demo{

    public void fun()
    {
        System.out.println("in fun");
    }
    public void gun()
    {
        System.out.println("in gun");
    }
}
public class interface_demo {

    public static void main(String arg[])
    {
        //Demo dobj = new Demo();
        Demo dobj = new Hello();
        Hello hobj = new Hello();

        hobj.fun();
        hobj.gun();
        dobj.fun();
        dobj.gun();
    }

}