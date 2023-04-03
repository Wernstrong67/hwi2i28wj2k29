/*
*Created by: Ankush Chugh on 5 Oct, 2019 with Dcoder mobile IDE
*The code iterates through an array of string representing characters,
it mimics typing effect by splitting using new line and introducing delay to print each line.
*/

//import statments for util functions and delay related code
import java.util.*;
import java.util.concurrent.TimeUnit;


class Dcoder
{ 
  //Strings representing all the characters and logo needed to be printed
  public static String DCODER_LOGO = "   //\\\\\\\n  //  \\\\\\\n //   ///\n//   ///\n_________\n";
  public static String D = "\n  ____\n | __ \\\n ||  \\ \\\n ||__/ /\n |____/";
  public static String c = "\n    ___\n   / __\n  | (__\n   \\___";
  public static String o = "\n   ___\n  / _ \\\n | (_) |\n  \\___/";
  public static String d = "\n     _\n  __| |\n / _` |\n| (_| |\n \\__,_|\n";
  public static String e = "\n   ___\n  / _ \\\n |  __/\n  \\___|";
  public static String r = "\n  _ __\n | '__)\n | |\n |_|";
  
  //DCODER holds the string array to be iterated
  public static String[] DCODER = new String[]{DCODER_LOGO,D,c,o,d,e,r};
  
  //main driver function
  //main drive
  public static void main(String args[]){   
    //Split the string by new lines and print each line with 200ms delay to give typing effect
    for(String s: DCODER){
      String[] splitString = s.split("\n");
      for(String line: splitString){
        System.out.println(line);
        delay(200);
      }
      delay(300); //300ms delay after printing each character
    }
  }

  /*
  *The delay function takes time in milliseconds as parameter 
  *and delays the execution by that amount.
  */
  public static void delay(int ms){
      try
      {
          TimeUnit.MILLISECONDS.sleep(300);
      }
      catch(InterruptedException ex)
      {
          Thread.currentThread().interrupt();
      }
  }
}
