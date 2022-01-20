import java.util.Scanner;

class f
{
	static public void main(String args[])
	{
		int B,C;
		Scanner input=new Scanner(System.in);
		System.out.print("Enter B : ");
		B=input.nextInt();
		System.out.print("Enter C : ");
		C=input.nextInt();
		B=B-C;
		C=C+B;
		B=C-B;
		System.out.println("After Swapping B is : "+B);
		System.out.println("After Swapping C is : "+C);

	}
}