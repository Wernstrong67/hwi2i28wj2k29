#include <stdio.h>

int main()
{//this code created by me<<@edetnehemiah8@gmail.com>>
int y,n;
back:
printf("-------------------------------------------------\n");
printf("YOU WANT TO CREATE THE MOBILE TOWER:()0/1)\n'O' FOR YES '1' FOR NO./n>>>");
scanf("%d",&y);
if (y==0)
  {
    
  
    printf("\n================================================");
    printf("\n  .;'                                   `;,   ||");
    printf("\n .;'    .;'                      `;,     `;,  ||");
    printf("\n.;'    .;'     .;'        `;,     `;,     `;, ||");
    printf("\n::     ::      :    (  )    :      ::      :: ||");
    printf("\n':.    ':.     ':.  /__\\  .:'     ,:'     ,:' ||");
    printf("\n ':.    ':.        /____\\      ,:'       ,:'  ||");
    printf("\n  ':.             /______\\              ,:'   ||");
    printf("\n                 /        \\                   ||");
    printf("\n================================================");
  
   }
    else{
      goto end;
    }
    end:
    sleep (1);
    printf ("\n          PLEASE GIVE ME A STAR (🌟)");
    sleep (1.5);
    printf("\nCLICK '0' FOR EXIT CLICK '1' FOR BACK.\n>>> ");
    scanf("%d",&n);
    if(n==0);
    {
      goto exit;
    }
    if(n==1)
    {
      goto back;
    }
    exit:
    return 0;
}
