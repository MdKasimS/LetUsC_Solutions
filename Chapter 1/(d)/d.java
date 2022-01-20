import java.util.Scanner;

class d
{
    static public void main(String args[])
    {
        float tempF;
        System.out.println("Enter the tenperature in Fahrenheit ");
        Scanner input=new Scanner(System.in);
        tempF=input.nextFloat();
        System.out.println("Temperature in Centigrades is "+(tempF-32)*5/9);
    }
}