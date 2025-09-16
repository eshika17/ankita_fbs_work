class Student {
    int rollNo;
    String name;
    double percentage;

    // Constructor
    Student(int rollNo, String name, double percentage) {
        this.rollNo = rollNo;
        this.name = name;
        this.percentage = percentage;
    }

    // Setters
    void setRollNo(int r) {
        this.rollNo = r;
    }

    void setName(String n) {
        this.name = n;
    }

    void setPercentage(double p) {
        this.percentage = p;
    }

    // Getters
    int getRollNo() {
        return this.rollNo;
    }

    String getName() {
        return this.name;
    }

    double getPercentage() {
        return this.percentage;
    }
 // Display method
    void display() {
        System.out.println("RollNo: " + rollNo + ", Name: " + name + ", Percentage: " + percentage);
    }
}


class Bank {
    void approveLoan(Student s) {
        double perc = s.getPercentage();
        System.out.println("\nLoan Status for Student: " + s.getName());

        if (perc > 80) {
            System.out.println("Loan Approved: 50,000");
        } else if (perc >= 60) {
            System.out.println("Loan Approved: 50,000");
        } else if (perc >= 40) {
            System.out.println("Loan Approved: 25,000");
        } else {
            System.out.println("Loan Not Approved");
        }
    }
}

 class Test {
    public static void main(String[] args) {
        Student s1 = new Student(1, "Ankita", 100);
        Student s2 = new Student(2, "Ranu", 75);
        Student s3 = new Student(3, "Akshay", 55);

        s1.display();
        s2.display();
        s3.display();

      
        Bank bank = new Bank();

        bank.approveLoan(s1);
        bank.approveLoan(s2);
        bank.approveLoan(s3);
    }
}