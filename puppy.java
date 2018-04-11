import java.util.*;
class Puppy 
{
	public static void main(String args[])
	{
		System.out.println("Enter a Number");
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		Puppy obj = new Puppy();
		int var = obj.pup(n);
		System.out.println("Value is "+var);
	}
	public int pup(int num)
	{
		int val;
		val = num + num + num;
		return val;
	}
}