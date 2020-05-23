class Demo
{
    public void fun()
    {
        System.out.println("In fun method of base class");
    }
    public void gun()
    {
        System.out.println("In gun method od base class ");
    }
}
class Derived extends Demo{

    public void fun()
    {
        System.out.println("In fun method of Derived class");
    }
    
}
class overriding
{

    public static void main(String arg[]) {
        Demo bobj = new  Derived();
        bobj.fun();      
    }
}