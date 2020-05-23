import java.util.Scanner;

class Hello{

    public int Count_character(String str,char ch)
    {
        char arr[] = str.toCharArray();
        int icnt = 0;
        for(char letter: arr)
        {
            if(letter == ch)
                icnt++;
        }
        return icnt;
    }
}
public class string {

        public static void main(String arg[])
        {
            Hello hobj = new Hello();
            Scanner sobj = new Scanner(System.in);
            String str = "";
            System.out.println("Enter string");
            str = sobj.nextLine();

            System.out.println("Enter character");
            char ch = sobj.next().charAt(0);

            System.out.println(hobj.Count_character(str,ch));

        }

}