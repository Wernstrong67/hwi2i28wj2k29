import java.util.*;

 // Compiler version JDK 11.0.2

 class Dcoder
 {
   
   private static String name;
   private static String password;
   private static String mName;
   private static String mPassword;
   private static int age;
   
   public static void main(String args[])
   {
     System.out.println("CREATED BY A 22 YEAR OLD DUDE \nfrom NIGERIA 🇳🇬 \nHope you like it\n\n");
     initialize();
   } 
    
    private static void SignUp(){
      Scanner sc = new Scanner(System.in);
      System.out.println("\n\nSIGN UP\n");
      System.out.println("Hello there, new user! \nPlease tell us your name.");
      
      name = sc.nextLine();
      
      System.out.println("For your further security\nplease tell us your password");
      
      password = sc.nextLine();
      
      System.out.println("Wonderful! Whats your age?");
      
      age = sc.nextInt();
      
      System.out.println("Cool!"); 
      System.out.println("\n\nYoure now signed up!\n Please login now!\n\n");
      initialize();
      
    }
    
    private static void Login(){
      System.out.println("\n\nLOGIN\n");
      Scanner sc = new Scanner(System.in);
      System.out.println("Hello, whats your name again?");
      mName = sc.nextLine();
      
      if(mName.equals(name)){
        System.out.println("Oh, yes! Almost forgot. Hello, " + name);
        System.out.println("Please enter your password");
        mPassword = sc.nextLine();
        
        if(mPassword.equals(password)){
          System.out.println("\n\nPROFILE");
          System.out.println("\nYour name is "+name);
          System.out.println("Your password is "+password);
          System.out.println("Your age is "+age);
        }else{
          System.out.println("\nWrong password \nPlease try again");
          Login();
        }
      }else{
        System.out.println("\nSorry, I dont remember you. \nHave you signed up?");
        initialize();
      }
    }
    
    private static void initialize(){
      Scanner sc = new Scanner(System.in);
     
      System.out.println("Login or Signup? \n\nIf Login press 1\nIf Signup press 2");
     
      int input = sc.nextInt();
     
      if(input == 1){
        Login();
      }else{
        SignUp();
      }
    }
    
 }
