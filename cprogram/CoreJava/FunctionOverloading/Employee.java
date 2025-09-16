class Employee
{
	int id;
	String name;
	double annualsalary;
	
	Employee()
	{
	this.id=101;
	this.name="radha";
	this.annualsalary=500000;
	}
	
	Employee(int id,String name,double annualsalary){
	this.id=id;
	this.name=name;
	this.annualsalary=annualsalary;
	}
	//setters
	void setid(int id){
	this.id=id;
	}
	void setname(String name){
	this.name=name;
	}
	void setannualsalary(double annualsalary){
	this.annualsalary=annualsalary;
	}
	
	//getters
	int getid(){
	return this.id;
	}
	String getname(){
	return this.name;
	}
	double getannualsalary(){
	return this.annualsalary;
	}
	
	void displayEmployee(){
	System.out.println("id:"+this.id);
	System.out.println("name:"+this.name);
	System.out.println("annualsalary:"+this.annualsalary);

	}

}
    class test
	{
	public static void main(String[] args)
	{
	Employee e1 = new Employee(1,"ankita",500000);
	Employee e2 = new Employee(2,"akshay",1100000);
	Employee e3 = new Employee(3,"bhagwat",700000);

	e1.displayEmployee();
	e2.displayEmployee();
	e3.displayEmployee();
 }
}

	
	