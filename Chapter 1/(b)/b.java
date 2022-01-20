import java.util.Scanner;
class b
{
    static public void main(String args[])
    {
        float dist;
        System.out.println("Enter the distance ");
        Scanner input=new Scanner(System.in);
        dist=input.nextFloat();
        System.out.println("Distance in "+"meters "+dist *1000);
        System.out.println("Distance in "+"centi-meters "+dist *100000);
        System.out.println("Distance in "+"feet "+dist *100000/30.48);
        System.out.println("Distance in "+"inches "+dist *100000/2.54);
        


    }
}