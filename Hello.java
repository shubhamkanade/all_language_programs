import java.lang.*;

class Demo
{

    public float Sub(float no1,float no2) 
    {
        return no1- no2;    
    }
    public float Sub(float no1,float no2,float no3)
    {
        return no1-no2-no3;
    }
}
class Hello
{
    public static void main(String arg[])
    {
        Demo dobj = new Demo();
        System.out.println(dobj.Sub(7.0f,5.0f,1.0f));
        System.out.println(dobj.Sub(3.54f,2.1f));
    }
}