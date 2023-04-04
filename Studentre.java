import java.util.Scanner;

public class Student {

    String fname, lname;
    int age, sscore, hscore;


    Student()
    {System.out.println("object created.");}

    Student(String nm)

    {
    this.fname = nm;
    }


    void studRegistration()
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter you First Name: ");
        fname = sc.nextLine();
        System.out.println("Enter you Last Name: ");
        lname = sc.nextLine();
        System.out.println("Enter your age : ");
        age = sc.nextInt();
        System.out.println("Enter your Secondary Score: ");
        sscore = sc.nextInt();
        System.out.println("Enter yor Higher Secondary Score : ");
        hscore = sc.nextInt();

    }

    void studRegistration(String ln)
    {
        fname = "Tony";
    lname = ln;
    }

    void studRegistration(String fn, String ln, int ag, int scr, int hscr)
    {
        this.fname = fn;
        this.lname = ln;
        this.age = ag;
        this.sscore = scr;
        this.hscore = hscr;

    }

    void studRegistration(int ag, int scr, int hscr)
    {
        this.age = ag;
        this.sscore = scr;
        this.hscore = hscr;

    }


    void display()
    {
        System.out.println(" \n First Name:" + this.fname);
        System.out.println(" Last Name:" + this.lname);
        System.out.println(" age :" + this.age);
        System.out.println(" secondary Score :" + this.sscore);
        System.out.println(" higher Secondary :" + this.hscore + "\n");

    }

    public static void main(String[] args)
    {
        Student st1 = new Student();
        st1.studRegistration();

        Student st2 = new Student();
        st2.studRegistration("Trump", "Micky", 32, 78, 80);

        Student st3 = new Student("Tom");
        st3.studRegistration("Bob will");

       Student st4 = new Student();

       Scanner sc = new Scanner(System.in);

        String ftnm = sc.nextLine();
        System.out.println("Enter your last name: ");
        String ltnm = sc.nextLine();

        st4.fname = ftnm;
        st4.lname = ltnm;
        st4.studRegistration(30,90,95);

        System.out.println("\n\n Printing all the records - ");

        st1.display();
        st2.display();
        st3.display();
        st4.display();
    }
    }


