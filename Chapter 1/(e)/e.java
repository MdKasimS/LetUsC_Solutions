import java.util.Scanner;

class e 
{
	static public void main(String args[])
	{
		Scanner input=new Scanner(System.in);
		float l,b,r;

		System.out.print("Enter the "+"length : ");
		l=input.nextFloat();
		System.out.print("Enter the "+"breadth : ");
		b=input.nextFloat();
		System.out.print("Enter the "+"radius : ");
		r=input.nextFloat();

		System.out.println("Area of "+"rectangle : "+l*b );
		System.out.println("Perimeter of "+"rectangle "+2*(l+b) );
		System.out.println("Area of "+"circle "+3.14*r*r );
		System.out.println("Circumference of "+"circle "+2*3.14*r );

	}
}