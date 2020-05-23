import java.util.Scanner;

class Demo
{
    int string_word(String str)
    {
        String arr[] = str.trim().split("\\s+");

        return arr.length;
    }
}
public class string_word {

    public static void main(String arg[])
    {
        Demo dobj = new Demo();
        Scanner s= new Scanner(System.in);

        System.out.println("Enter string");
        String str = s.nextLine();

        System.out.println("Count from word is " + dobj.string_word(str));
    }

}