import java.util.Scanner;
class a
{
    static int basic_pay;
    static public void main(String args[])
    {
        
        System.out.println("Enter the salary :");
        Scanner input=new Scanner(System.in);
        a.basic_pay=input.nextInt();
        System.out.println("Dearness Allowance 40% "+ .4*a.basic_pay);
        System.out.println("House Allowance 20% " + .2* a.basic_pay);
        System.out.println("Gross salary is "+(1+.2+.4)*a.basic_pay);

        
    }
}