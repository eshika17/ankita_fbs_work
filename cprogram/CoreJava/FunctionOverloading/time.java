 class Time
 {
     int hr;
     int min;
     int sec;

    
    Time(int hr, int min, int sec)
    {
        this.hr = hr;
        this.min = min;
        this.sec = sec;
        
    }

    void normalizeTime() 
   {
        
        this.min += this.sec / 60;
        this.sec = this.sec % 60;

        this.hr += this.min / 60;
        this.min = this.min % 60;

        this.hr = this.hr % 24;
    }

    Time add(Time t)
    {
        return new Time(this.hr + t.hr, this.min + t.min, this.sec + t.sec);
    }

     Time addHours(int hours)
    {
        return new Time(this.hr + hours, this.min, this.sec);
    }

    Time addMinutes(int minutes)
    {
        return new Time(this.hr, this.min + minutes, this.sec);
    }

    Time addSeconds(int seconds) 
    {
        return new Time(this.hr, this.min, this.sec + seconds);
    }

    void display()
    {
        System.out.printf("%02d:%02d:%02d\n", hr, min, sec);
    }
}
class test
 {
    public static void main(String[] args)
 {
        Time t1 = new Time(10, 45, 30);
        Time t2 = new Time(5, 30, 45);

        Time result1 = t1.add(t2);            
        Time result2 = t1.addHours(3);        
        Time result3 = t1.addMinutes(80);     
        Time result4 = t1.addSeconds(5000);  

        System.out.print("Add Time Objects");
        result1.display();

        System.out.print("Add 3 Hours");
        result2.display();

        System.out.print("Add 80 Minutes");
        result3.display();

        System.out.print("Add 5000 Second");
        result4.display();
    }
}
