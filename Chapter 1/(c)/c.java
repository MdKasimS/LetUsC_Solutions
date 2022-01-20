import java.util.Scanner;
class c
{
    static public void main(String args[])
    {
        float sum=0;
        float []sub=new float[5];
        Scanner input=new Scanner(System.in);

        for(int i=0;i<sub.length;++i)
        {
                System.out.print("Enter the marks : ");
                sub[i]=input.nextFloat();
                sum=sum+sub[i];

        }
        System.out.println("Average of marks is "+ sum/5);
        System.out.println("Percentage is "+ sum/5 +" %");
    }
}