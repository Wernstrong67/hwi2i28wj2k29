#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
 {
   int l= 1, u = 6,p=5,s=0,t1=0,h=0,t=0,e=0,g=0,f=0,a,b,r=0;
   printf("\nEnter numbers between 1-6\n____________________________________________________________\n");
   printf(" \n You are balling first \n\n Guess same number as your opponent to out him \n____________________________________________________________\n");
   srand(time(0)); //current time as seed of random number generator
   while(1<2)
   {
     printf("\n");
      r= (rand() % (u - l + 1)) + l;
     printf("Enter value : ");
     scanf("%d",&a);
      if(a>6||a<1)
     {
       printf("Wrong Input\n");
       continue;
     }
        if(h==a)
     {
       e++;
     }
     else
     {
       e=0;
     }
     if(e>2)
     {
       r=(rand() % (p - l + 1)) + l;
     if(a==r)
     {
       r=r+1;
     }
     }
      
     printf("Opponents value : %d\n",r);
     if(r==a)
     {
       printf("Your opponent got out 😁\n");
       printf("Your target is : %d\n",s+1);
       break;
     }
     else
     {
       s=s+r;
       printf("Opponents score : %d \n",s);
     }
  h=a; 
}
printf("\n____________________________________________________________\n\nYou are now batting\n");
printf("\nEnter different number from your opponent to score more\n");
printf("____________________________________________________________\n");
while(t<=s)
{
  printf("\n");
    r= (rand() % (u - l + 1)) + l;
     printf("Enter value : ");
     scanf("%d",&b);
       if(b>6||b<1)
     {
       printf("Wrong Input\n");
       continue;
     }
     if(f>2)
     {
       r=b;
     }
     if(g==b||t1==b)
     {
       f++;
     }
     else
     {
       f=0;
     }
   
     printf("Opponents value : %d\n",r);
     if(r==b)
     {
       printf("You got out 🥺\n");
       
       break;
     }
     else
     {
       t=t+b;
       printf("Your score : %d \n",t);
     }
    g=b; 
    t1=r;
}
printf("\n************************************************************\n");
printf("Your score is %d\n",t);
printf("Opponents score is %d\n",s);
  if(s<t)
  printf("You won the cricket match 😊🎉\n\n");
  else if(s>t)
  printf("You loose the cricket match 😭\n\n");
  else
  printf("Match Tied\n\n");
  printf("Give a star if you Enjoy the game🙂\n");
  return 0;
 }
