import java.util.*;
 class java
{
  public static void main(String arg[])
  {
    Scanner sc = new Scanner(System.in);
    int a, i, s = 0;
    System.out.println("Enter a number");
    a = sc.nextInt();
    for(i=1;i<= a/2;i++)
    {
      if(a%i==0)
      {
        s=s+i;
       }
       }
       
        if(s==a) 
    {
    System.out.println("Number is Perfect");
  }
  else
  {
    System.out.println("Number is not Perfect");
  }
   }
   }
   
