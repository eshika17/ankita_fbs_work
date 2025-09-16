class Calculator
{
	void add(int a,int b)
	{
		System.out.println("result is"+(a+b));
		System.out.println("void add(int a,int b)");
	}
	void add(int a,double d1)
	{
		System.out.println("result is"+(a+d1));
		System.out.println("void add(int a,double d1)");
	}
	void add(double d1,double d2)
	{
		System.out.println("result is"+(d1+d2));
		System.out.println("(void add(double d1,double d2)");
	}

	void add(double d1,int a)
	{
		System.out.println("result is"+(d1+a));
		System.out.println("(void add(double d1,int a)");
	}
}//end calculator
	class test
	{
	public static void main(String []args)
	{
	Calculator c1=new Calculator();
	c1.add(11,12);
	c1.add(11,1.4);
	c1.add(1.5,1.4);
	c1.add(1.4,12);
}
}

