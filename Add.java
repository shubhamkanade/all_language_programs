import java.io.*;
import java.lang.*;
import java.util.*;

//import jdk.internal.org.jline.utils.InputStreamReader;

class Demo
{
    public int no1 ,no2;

    public Demo(int no1,int no2)
    {
        this.no1 = no1;
        this.no2 = no2;
    }
    public int add()
    {
        return no1 + no2;
    }
    public int sub()
    {
        return no1 - no2;
    }
}
class Add{

    public static void main(String arg[]) throws Exception
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
       
        int value1 = Integer.parseInt(br.readLine());

        int value2 = Integer.parseInt(br.readLine());

        Demo dobj = new Demo(value1 , value2);
        System.out.println(dobj.add());
        System.out.println(dobj.sub());
    }
}