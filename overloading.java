import java.util.*;

class Demo
{
    public int add(int no1,int no2)
    {
        return no1 +no2;
    }
    public int add(int no1,int no2,int no3)
    {
        return no1+no2+no3;
    }
}
class overloading
{
    public static void main(String arg[]) {
        Demo obj=new Demo();;
        Scanner s = new Scanner(System.in);

        System.out.println("Enter 1st number");
        int number1 =s.nextInt();

        System.out.println("Enter 2nd number");
        int number2 =s.nextInt();


        System.out.println(obj.add(number1,number2));
        System.out.println(obj.add(1,2,3));
        
    }
}