import java.util.Scanner;

class g
{
	static public void main(String args[])
	{
		Scanner input=new Scanner(System.in);
		int sum;
		int num;
		sum=0;
		System.out.print("Enter the number (digits <5)");
		num=input.nextInt();

		for(int i=0;i<num;++i)
		{
			sum=sum+ num%10;
			num=num/10;
		}

		System.out.println("Sum of all digits is "+sum);



	}
}