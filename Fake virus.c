#include <stdio.h> // THIS FAKE VIRUS CREATE BY ME ..
#include <unistd.h> //@HEYGOURAB
void printdot()
{
    for (int i = 0; i <= 3; i++)
    {
        printf(".");
        sleep(1);
    }
}
void printline()
{
    for (int i = 0; i < 50; i++)
    {
        printf("-");
        sleep(0.5);
    }
}
int main()
{

START:
    printline();
    printf("\n   WELCOME TO MY HACKING SYSTEM !!!\n");
    printf("   PLEASE WAIT 10 to 15 SEC");
    printdot();
    sleep(2);
    printf("\n   ACTIVATE <<HEY VIRUS>>\n");
    sleep(1);
    printline();
    printf("\n  SCANNING YOUR DEVICE <<PLEASE WAIT>>\n  SCANNING");
    printdot();
    printf("\n  SCANNING COMPLETE.\n");
    printline();
    sleep(1);
    printf("\n  INTSTALING");
    printdot();
    sleep(2);
    printf("\n  INSTALING COMPLETE.\n");
REBOOT:
    printline(); 
    sleep(2);
    printf("\n  REBOOT IN 5 SEC\n");
    for (int i = 1; i <= 5; i++)
    {
        printf("%4d SEC.\n", i);
        sleep(1);
    }
    printf("  REBOOTING");
    printdot();
    sleep(4);
    printf("\n  REBOOTING COMPELETE.\n");
    printline();
    printf("\n  ALL DONE.\n");
    sleep(2);
    printf("\n  ACTIVATE <<HEY VIRUS>>\n  COMPLETE.\n");
ABOUT:
    printline();
    sleep(2);
    printf("\n  HI (0088)");
    printdot();
    printf("\n  I AM <<HEY VIRUS>> \n  CODE NAME");
    printdot();
    printf("(****0*01)\n");
    sleep(1);
    printf("\n  <<HEY VIRUS>> V2.0");
    printf("\n  CREATED_BY_GOURAB.\n");
BACK:
    printline();
    printf("\n");
    sleep(1.5);
    printf("\n  NOW GET STARTED");
    printdot();
    printf("\n");
OPTION:
{
    int NUM;
    printline();
    printf("\n  OPTION:\n");
    sleep(1.5);
    printf("\n  CLICK 0 FOR HACK SOME ONE DEVICE...\n");
    sleep(1);
    printf("\n  CLICK 1 FOR VIRUS SCAN...\n");
    sleep(1);
    printf("\n  CLICK 2 FOR ABOUT ME !!!\n");
    sleep(1);
    printf("\n  CLICK 3 FOR REBOOT SYSTEM...\n");
    sleep(1);
    printf("\n  CLICK 4 FOR EXIT.\n");
    printf("\n  >>>");
    scanf("%d", &NUM);
    if (NUM == 0)
    {
        int NUM1;
        printline();
        printf("\n  ENTER HIS OR HER MOBILE NUMBER\n\n  >>>");
        scanf("%d",&NUM1);
        printf("\n  CONNECTING TO THE MAIN SERVER");
        printdot();
        sleep(2);
        printf("\n  CONNCTED TO THE MAIN SERVER\n");
        sleep(1);
        printf("\n  SENDING VIRUS TO %d",NUM1);
        printdot();
        sleep(1);
        printf("\n  SENDING COMPLETE\n");
        sleep(0.5);
        printf("\n  FACEBOOK HACKING");
        printdot();
        sleep(1);
        printf("\n  COMPLETE\n");
        printf("\n  INSTAGRAM HACKING");
        printdot();
        sleep(1);
        printf("\n  COMPLETE\n");
        printf("\n  CAMERA HACKING");
        printdot();
        sleep(1);
        printf("\n  COMPLETE\n");
        printf("\n  CONTACTS HACKING");
        printdot();
        sleep(1);
        printf("\n  COMPLETE.\n");
        sleep(1.5);
        printf("\n  ALL DONE !!!\n");
        sleep(1);
        printf("\n  YOU WANT TO DISTROY THE PHONE\n");
            int DIS;
            printf("\n  CLICK 0 FOR DISTROY THE PHONE\n");
            sleep(0.5);
            printf("\n  CLICK 1 FOR BACK TO OPTION.\n");
            sleep(0.5);
            printf("\n  CLICK 2 FOR EXIT.\n>>>");
            scanf("%d", &DIS);
            if (DIS == 0)
            {
                printf("\n  DISTROING PHONE");
                printdot();
                sleep(3.5);
                printf("\n  COMPLETE.\n");
            }
            if (DIS == 1)
            {
                sleep(1);
                goto OPTION;
            }
            if (DIS == 2)
            {
                goto EXIT;
            }
        
    }
    if (NUM == 2)
    {
        goto ABOUT;
    }
    if (NUM == 3)
    {
        goto REBOOT;
    }
    if (NUM == 1)
    {printf("\n");
      printline();
        printf("\n  SCANING YOUR DEVICE");
        printdot();
        sleep(2);
        printf("\n  SCANING COMPLETE.");
        sleep(2);
        printf("\n  REMOVE ANONYMOUS'S VIRUS");
        printdot();
        sleep(2);
        printf("\n  COMPLETE.");
        sleep(0.5);
        printf("\n  CLICK 0 FOR OPTION OR CLICK 1 FOR EXIT.\n>>>");
        int OPT;
        scanf("%d", &OPT);
        if (OPT == 0)
        {
            goto OPTION;
        }
        if (OPT == 1)
        {
            goto EXIT;
        }
    }
    if (NUM == 4)
    {
        goto EXIT;
    }
EXIT:
    printline();
    sleep(3.5);
    printf("\n  YOUR DIVICE IS MY CONTROL");
    printdot();
    printdot();
    printf("\n  YOU CAN NOT REMOVE ME .\n");
    sleep(2);
    for (int i = 0; i < 1000; i++)
    {
        printf("        HACKED\n");
        sleep(0.8);
    }
}
    printf("\n");
    printline();
    printline();
    printf("\n  PLEASE GIVE ME STAR.\n");
    printline();
    return 0;
}
