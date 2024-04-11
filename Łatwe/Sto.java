import java.util.*;
import java.lang.*;
import java.util.Scanner;
 
class Main
{
    public static void main (String[] args) throws java.lang.Exception
    {
        Scanner scanner = new Scanner(System.in);
        String mainString = scanner.nextLine();
        scanner.close();
        String subString = "sto";
        if (mainString.contains(subString))
        {
            System.out.println("TAK");
        }
        else
        {
            System.out.println("NIE");
        }
    }
} 