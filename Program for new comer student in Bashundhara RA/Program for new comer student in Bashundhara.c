#include<stdio.h>
#include<windows.h>
#include<process.h>
#include <dos.h>
#include <string.h>
#define MAX_SIZE 100
void USER();
void ADMIN();
void GoBack_Exit();
void MainFunction();
void Hack();
void MainMenu_Admin();
void Search_Apartment();
void Block_A_info();
void Block_B_info();
void Block_C_info();
void Block_D_info();
void Search_Hostel();
void Male_hostel();
void Female_hostel();
void Map();
void University_details();
void Extra_feature();
int Home_Budget_calculator_sum(int arr[], int start, int len);
void About_Basundhara(char);
void About_Programmer();
struct NSU
{
      char *name;
      char *University_name;
      int ID;
      char *course;
      char *dept;

};
void info (struct NSU *pro);
void GoBack_Exit()
{
    char ch;
    fflush(stdin);
      printf("\n\n1.Back to Main menu\n");
      printf("2.Back to Log in menu\n");
      printf("3.Exit\n");
      printf("Your choice:");
      scanf("%c",&ch);
      fflush(stdin);
      switch (ch)
      {
      case'1':
         USER();
        break;
    case'2':
        MainFunction();
        break;
      case'3':
        break;
        default:
            {
               printf("Wrong choice\n\n");
               GoBack_Exit();
              break;
            }

      }
}

void gotoxy(int x,int y)           /// for loading
{
    COORD coord;
    coord.X =x;
    coord.Y =y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void loading()
{
    int r,q;
printf("                              *******\n");
printf("                                   *******\n");
printf("                                     ******\n");
printf("                                       *******      \n");
printf("                                       ****      **   \n");
printf("                                     *****    **    **\n");
printf("                                 *******   ***   ********  \n");
printf("                                     *****    **  * **  \n");
printf("                                       ****      **     \n");
printf("                                       *******      \n");
printf("                                     *******\n");
printf("                                   *******\n");
printf("                              *******\n");
gotoxy(36,14);
printf("LOADING BASHUNDHARA");
gotoxy(30,15);
for(r=1; r<=30;r++)
{
    for (q=0;q<=100000000;q++);
    printf("%c",177);
}
printf("\n\n");
//getch();

}
void Hack()
{
    int c = 1, d = 1;
    char spinner[] = "|/-\\";
    int i, j;
    printf( "Erasing data...." );
    for ( i = 0 ; i < 10 ; i++ ) {
        for ( j = 0 ; j < 4 ; j++ ) {
            printf( "%c\b", spinner[j] );
            fflush( stdout );
            for ( c = 1 ; c <= 32767 ; c++ )
       for ( d = 1 ; d <= 3276 ; d++ )
       {}
        }
    printf( "\nDESTROYING The program...." );
    for ( i = 0 ; i < 10 ; i++ ) {
        for ( j = 0 ; j < 4 ; j++ ) {
            printf( "%c\b", spinner[j] );
            fflush( stdout );
            for ( c = 1 ; c <= 32767 ; c++ )
       for ( d = 1 ; d <= 3276 ; d++ )
       {}
        }

    }
     printf( "\n\n\n\n\nDESTROYED...\n" );
}
}
void main(){
loading();


MainFunction();


}
void MainFunction()
{


char ch;
      fflush(stdin);
      printf("\n=====================\n");
      printf("1.Log in as USER\n");
      printf("2.Log in as ADMIN\n");
      printf("3.Exit\n");
      printf("=====================\n");
      printf("Your choice:");
      scanf("%c",&ch);
      fflush(stdin);
      switch (ch)
      {
      case'1':
          printf("\n\n                       Welcome to Bashundhara R/A\n\n");
        USER();
        break;
      case'2':
        ADMIN();
        break;
        case'3':
        break;
        default:
            {
               printf("Wrong choice\n\n");
            MainFunction();
            }

      }
      }
void USER()
{   fflush(stdin);
     char ch;
     printf("\n\n=================================\n");
    printf("1.Search Apartment\n");
    printf("2.Search Hostel\n");
    printf("3.Map\n");
    printf("4.University details\n");
    printf("5.Extra Feature\n");
    printf("6.About Bashundhara R/A\n");
    printf("7.About Programmer\n");
    printf("8.Back to log in menu\n");
    printf("=================================\n");
    printf("Your choice:");
      scanf("%c",&ch);
      fflush(stdin);

      switch (ch)
      {
      case'1':
        Search_Apartment();
        break;
      case'2':
        Search_Hostel();
        break;
        case'3':
            Map();
            break;
        case'4':
            University_details();
            break;
        case'6':{
               char x;
               hell:
                 printf("\n\n\n1.Bashundhara Details");
                 printf("\n2.Near by Bashundhara R/A\n");
                 printf("Your choice:");
                 scanf("%s",&x);
                if (x=='1' || x=='2')
                 {
                 About_Basundhara(x);
                 }
                 else
                    { printf("Wrong keyword.\n");
                        goto hell;
                    }

          break;
                }
        case'5':
            Extra_feature();
            break;
        case'7':
            About_Programmer();
            break;
         case'8':
            MainFunction();
            break;
        default:
            {
               printf("\n\nWrong choice\nChoose wisely.\n\n");
               USER();
            }

      }

}
void ADMIN()
{ int i=0;
    char *str="KAZI";
   int check;

do
    {
        if(i>2)
        {
            printf("\n\n                               YOU ARE NOT AN ADMIN!!\n");
            printf("                            IT SEEMS YOU ARE A HACKER!!\n\n\n");
            Hack();
            break;
        }

        char pass[MAX_SIZE];
        if (i==0){
        printf("\nEnter your password:");
                }
        if (i==1){
        printf("\nSomething went wrong, try again");
        printf("\nEnter password:");
                }
        if (i==2){
        printf("\nIf you are an ADMIN you should know it, This is the last chance");
        printf("\nEnter password:");
                }

        gets(pass);
         i++;
        check=strcmp(str,pass);
    }while(check!=0);

      if(check==0)
      {
        printf("\n\n                                HELLO ADMIN\n\n");
         MainMenu_Admin();
      }
}
void MainMenu_Admin()
{
    fflush(stdin);
    FILE *fp;
    char ch,x,c;
 char file_info[MAX_SIZE];
 char edit[MAX_SIZE];
 printf("\n\n===========================\n");
 printf("1.Show file names\n");
 printf("2.Edit or add files\n");
 printf("3.Open files\n");
 printf("4.Go Back\n");
 printf("===========================\n");
 printf("Your choice:");
 scanf("%c",&ch);
 switch (ch)
 {
 case '1' :
    printf("\n\n1.block A road 3\n");
    printf("2.block A road 6\n");
    printf("3.block A road 11\n");
    printf("4.block A road 12\n");
    printf("5.block B road 1\n");
    printf("6.block B road 3\n");
    printf("7.block B road 4 s1\n");
    printf("8.block B road 4\n");
    printf("9.block C road 3\n");
    printf("10.block C road 4\n");
    printf("11.block C road 5\n");
    printf("12.block C road 6\n");
    printf("13.block D road 1\n");
    printf("14.block D road 3\n");
    printf("15.block D road 4\n");
    printf("16.block D road 5\n");
    printf("17.block D road 11\n\n");

    printf("\n\nWanna go back, press enter\n");
    fflush(stdin);
        scanf("%c",&x);
        if (x=='1')
        {
        MainMenu_Admin();
        }
        else
        {
        MainMenu_Admin();
        }
     break;
 case '2':
     fflush(stdin);
    printf("\n\nWhich file you want to edit or add?\n");
    printf("Example: block A(capital) road 3.txt\n");
    printf("Enter file name:");
    gets(file_info);

    fp=fopen(file_info,"a");
    if(fp==NULL)
    {
        printf("\nFile not opened\n");
    }
    else if(fp!=NULL)
    {
    fflush(stdin);
    printf("\nEdit:\n\n");
    gets(edit);
    fprintf(fp,"%s",edit);
    printf("\n");
    printf("\nEdited\n");
    }
    fclose(fp);
    MainMenu_Admin();

     break;
case '3':
    fflush(stdin);
    printf("\n\nWhich file you want to open?\n");
    printf("Example: block A(capital) road 3.txt\n");
    printf("Enter file name:");
    gets(file_info);

    fp=fopen(file_info,"r");
    if(fp==NULL)
    {
        printf("\nFile not found\n");
    }


    while((c=getc(fp))!=EOF)
    {
        fputchar(c);
    }
    fclose(fp);


    printf("\n\nWanna go back, press enter\n");
        fflush(stdin);
        scanf("%c",&x);
        if (x=='1')
        {
        MainMenu_Admin();
        }
        else
        {
        MainMenu_Admin();
        }

  break;
  case '4':
      MainFunction();
      break;

 default:

     printf("\n\nWrong Choice\n\n");
     MainMenu_Admin();

 }

}
void Search_Apartment()
{

 fflush(stdin);
 char ch;
 printf("\n\n=============================\n");
 printf("Available Apartment=>17\n");
 printf("\n1.Block A\n");
 printf("2.Block B\n");
 printf("3.Block C\n");
 printf("4.Block D\n");
 printf("5.Go back\n");
 printf("=============================\n");
 printf("Your Choice:");
 scanf("%c",&ch);
        switch (ch)
      {
      case'1':
         Block_A_info();
        break;
    case'2':
        Block_B_info();
        break;
        case'3':
         Block_C_info();
        break;
    case'4':
        Block_D_info();
        break;
      case'5':
          USER();
        break;
        default:
            {
               printf("\nWrong choice\n\n");
               Search_Apartment();
              break;
            }

      }

}
void Block_A_info()
{
    fflush(stdin);
    FILE *fp;
     char ch,c,x;
     printf("\n\n==================================\n");
     printf("Available Apartment in block A =>4\n");
     printf("\n1.Block A Road 3\n");
     printf("2.Block A Road 6\n");
     printf("3.Block A Road 11\n");
     printf("4.Block A Road 12\n");
     printf("5.Apartment location Map\n");
     printf("6.Go back\n");
     printf("==================================\n");
     printf("Your choice:");

    scanf("%c",&ch);
        switch (ch)
      {
      case'1':
         fp=fopen("block A road 3.txt","r");
         if(fp==NULL)
    {
        printf("\nFile not found\n");
    }
    while((c=getc(fp))!=EOF)
    {
        fputchar(c);
    }
    fclose(fp);
    printf("\n\nWanna go back, press enter\n");
    fflush(stdin);
        scanf("%c",&x);
        if (x=='1')
        {
        Block_A_info();
        }
        else
        {
        Block_A_info();
        }
        break;
    case'2':
        fp=fopen("block A road 6.txt","r");
    if(fp==NULL)
    {
        printf("\nFile not found\n");
    }
    while((c=getc(fp))!=EOF)
    {
        fputchar(c);
    }
    fclose(fp);
     printf("\n\nWanna go back, press enter\n");
    fflush(stdin);
        scanf("%c",&x);
        if (x=='1')
        {
        Block_A_info();
        }
        else
        {
        Block_A_info();
        }
        break;
        case'3':
        fp=fopen("block A road 11.txt","r");
        if(fp==NULL)
    {
        printf("\nFile not found\n");
    }

    while((c=getc(fp))!=EOF)
    {
        fputchar(c);
    }
    fclose(fp);
    printf("\n\nWanna go back, press enter\n");
        fflush(stdin);
        scanf("%c",&x);
        if (x=='1')
        {
        Block_A_info();
        }
        else
        {
        Block_A_info();
        }
        break;
        case'4':
         fp=fopen("block A road 12.txt","r");
         if(fp==NULL)
    {
        printf("\nFile not found\n");
    }

    while((c=getc(fp))!=EOF)
    {
        fputchar(c);
    }
    fclose(fp);
    printf("\n\nWanna go back, press enter\n");
    fflush(stdin);
        scanf("%c",&x);
        if (x=='1')
        {
        Block_A_info();
        }
        else
        {
        Block_A_info();
        }
        break;
      case'6':
          Search_Apartment();
        break;
      case'5':
          fp=fopen("block A map.txt","r");
          if(fp==NULL)
    {
        printf("\nFile not found\n");
    }

    while((c=getc(fp))!=EOF)
    {
        fputchar(c);
    }
    fclose(fp);
    printf("\n\nWanna go back, press enter\n");
    fflush(stdin);
        scanf("%c",&x);
        if (x=='1')
        {
        Block_A_info();
        }
        else
        {
       Block_A_info();
        }
        break;
        default:
            {
               printf("\nWrong choice\n\n");
               Block_A_info();
              break;
            }

      }
}
void Block_B_info()
{
    fflush(stdin);
    FILE *fp;
     char ch,c,x;
     printf("\n\n==================================\n");
     printf("Available Apartment in block B =>4\n");
     printf("\n1.Block B Road 1\n");
     printf("2.Block B Road 3\n");
     printf("3.Block B Road 4 1st\n");
     printf("4.Block B Road 4 2nd\n");
     printf("5.Apartment location Map\n");
     printf("6.Go back\n");
     //printf("7.Road ");
     printf("==================================\n");

     printf("Your choice:");

    scanf("%c",&ch);
        switch (ch)
      {
      case'1':
         fp=fopen("block B road 1.txt","r");
         if(fp==NULL)
    {
        printf("\nFile not found\n");
    }

    while((c=getc(fp))!=EOF)
    {
        fputchar(c);
    }
    fclose(fp);
    printf("\n\nWanna go back, press enter\n");
    fflush(stdin);
        scanf("%c",&x);
        if (x=='1')
        {
        Block_B_info();
        }
        else
        {
        Block_B_info();
        }
        break;
    case'2':
        fp=fopen("block B road 3.txt","r");
        if(fp==NULL)
    {
        printf("\nFile not found\n");
    }

    while((c=getc(fp))!=EOF)
    {
        fputchar(c);
    }
    fclose(fp);
     printf("\n\nWanna go back, press enter\n");
    fflush(stdin);
        scanf("%c",&x);
        if (x=='1')
        {
        Block_B_info();
        }
        else
        {
        Block_B_info();
        }
        break;
        case'3':
        fp=fopen("block B road 4 s1.txt","r");
        if(fp==NULL)
    {
        printf("\nFile not found\n");
    }

    while((c=getc(fp))!=EOF)
    {
        fputchar(c);
    }
    fclose(fp);
    printf("\n\nWanna go back, press enter\n");
        fflush(stdin);
        scanf("%c",&x);
        if (x=='1')
        {
        Block_B_info();
        }
        else
        {
        Block_B_info();
        }
        break;
        case'4':
         fp=fopen("block B road 4.txt","r");
         if(fp==NULL)
    {
        printf("\nFile not found\n");
    }

    while((c=getc(fp))!=EOF)
    {
        fputchar(c);
    }
    fclose(fp);
    printf("\n\nWanna go back, press enter\n");
    fflush(stdin);
        scanf("%c",&x);
        if (x=='1')
        {
        Block_B_info();
        }
        else
        {
        Block_B_info();
        }

        break;
    case'6':
           Search_Apartment();
    break;
      case'5':
          fp=fopen("block B map.txt","r");
          if(fp==NULL)
    {
        printf("\nFile not found\n");
    }

    while((c=getc(fp))!=EOF)
    {
        fputchar(c);
    }
    fclose(fp);
    printf("\n\nWanna go back, press enter\n");
    fflush(stdin);
        scanf("%c",&x);
        if (x=='1')
        {
        Block_B_info();
        }
        else
        {
       Block_B_info();
        }
        break;
        default:
            {
               printf("\nWrong choice\n\n");
               Block_B_info();
              break;
            }

      }

}
void Block_C_info()
{
       fflush(stdin);
    FILE *fp;
     char ch,c,x;
     printf("\n\n==================================\n");
     printf("Available Apartment in block C =>4\n");
     printf("\n1.Block C Road 3\n");
     printf("2.Block C Road 4\n");
     printf("3.Block C Road 5\n");
     printf("4.Block C Road 6\n");
     printf("5.Apartment location Map\n");
     printf("6.Go back\n");
     //printf("5.Road ");
    // printf("6.Road ");
     //printf("7.Road ");
     printf("==================================\n");

     printf("Your choice:");

    scanf("%c",&ch);
        switch (ch)
      {
      case'1':
         fp=fopen("block C road 3.txt","r");
         if(fp==NULL)
    {
        printf("\nFile not found\n");
    }

    while((c=getc(fp))!=EOF)
    {
        fputchar(c);
    }
    fclose(fp);
    printf("\n\nWanna go back, press enter\n");
    fflush(stdin);
        scanf("%c",&x);
        if (x=='1')
        {
        Block_C_info();
        }
        else
        {
        Block_C_info();
        }
        break;
    case'2':
        fp=fopen("block C road 4.txt","r");
        if(fp==NULL)
    {
        printf("\nFile not found\n");
    }

    while((c=getc(fp))!=EOF)
    {
        fputchar(c);
    }
    fclose(fp);
     printf("\n\nWanna go back, press enter\n");
    fflush(stdin);
        scanf("%c",&x);
        if (x=='1')
        {
        Block_C_info();
        }
        else
        {
        Block_C_info();
        }
        break;
        case'3':
        fp=fopen("block C road 5.txt","r");
        if(fp==NULL)
    {
        printf("\nFile not found\n");
    }

    while((c=getc(fp))!=EOF)
    {
        fputchar(c);
    }
    fclose(fp);
    printf("\n\nWanna go back, press enter\n");
        fflush(stdin);
        scanf("%c",&x);
        if (x=='1')
        {
        Block_C_info();
        }
        else
        {
        Block_C_info();
        }
        break;
        case'4':
         fp=fopen("block C road 6.txt","r");
         if(fp==NULL)
    {
        printf("\nFile not found\n");
    }

    while((c=getc(fp))!=EOF)
    {
        fputchar(c);
    }
    fclose(fp);
    printf("\n\nWanna go back, press enter\n");
    fflush(stdin);
        scanf("%c",&x);
        if (x=='1')
        {
        Block_C_info();
        }
        else
        {
        Block_C_info();
        }

        break;
    case'6':
        Search_Apartment();
        break;
      case'5':
          fp=fopen("block C map.txt","r");
          if(fp==NULL)
    {
        printf("\nFile not found\n");
    }

    while((c=getc(fp))!=EOF)
    {
        fputchar(c);
    }
    fclose(fp);
    printf("\n\nWanna go back, press enter\n");
    fflush(stdin);
        scanf("%c",&x);
        if (x=='1')
        {
        Block_C_info();
        }
        else
        {
       Block_C_info();
        }
        break;
        default:
            {
               printf("\nWrong choice\n\n");
               Block_C_info();
              break;
            }

      }



}
void Block_D_info()
{
       fflush(stdin);
    FILE *fp;
     char ch,c,x;
     printf("\n\n==================================\n");
     printf("Available Apartment in block D =>5\n");
     printf("\n1.Block D Road 1\n");
     printf("2.Block D Road 3\n");
     printf("3.Block D Road 4\n");
     printf("4.Block D Road 5\n");
     printf("5.Block D Road 11\n");
     printf("6.Apartment location Map\n");
     printf("7.Go back\n");
     //printf("8.Road ");
     printf("==================================\n");
     printf("Your choice:");

    scanf("%c",&ch);
        switch (ch)
      {
      case'1':
         fp=fopen("block D road 1.txt","r");
         if(fp==NULL)
    {
        printf("\nFile not found\n");
    }

    while((c=getc(fp))!=EOF)
    {
        fputchar(c);
    }
    fclose(fp);
    printf("\n\nWanna go back, press enter\n");
    fflush(stdin);
        scanf("%c",&x);
        if (x=='1')
        {
        Block_D_info();
        }
        else
        {
        Block_D_info();
        }
        break;
    case'2':
        fp=fopen("block D road 3.txt","r");
        if(fp==NULL)
    {
        printf("\nFile not found\n");
    }

    while((c=getc(fp))!=EOF)
    {
        fputchar(c);
    }
    fclose(fp);
     printf("\n\nWanna go back, press enter\n");
    fflush(stdin);
        scanf("%c",&x);
        if (x=='1')
        {
        Block_D_info();
        }
        else
        {
        Block_D_info();
        }
        break;
        case'3':
        fp=fopen("block D road 4.txt","r");
        if(fp==NULL)
    {
        printf("\nFile not found\n");
    }

    while((c=getc(fp))!=EOF)
    {
        fputchar(c);
    }
    fclose(fp);
    printf("\n\nWanna go back, press enter\n");
        fflush(stdin);
        scanf("%c",&x);
        if (x=='1')
        {
        Block_D_info();
        }
        else
        {
        Block_D_info();
        }
        break;
        case'4':
         fp=fopen("block D road 5.txt","r");
         if(fp==NULL)
    {
        printf("\nFile not found\n");
    }

    while((c=getc(fp))!=EOF)
    {
        fputchar(c);
    }
    fclose(fp);
    printf("\n\nWanna go back, press enter\n");
    fflush(stdin);
        scanf("%c",&x);
        if (x=='1')
        {
        Block_D_info();
        }
        else
        {
        Block_D_info();
        }

        break;
    case'5':
        fp=fopen("block D road 11.txt","r");
        if(fp==NULL)
    {
        printf("\nFile not found\n");
    }

    while((c=getc(fp))!=EOF)
    {
        fputchar(c);
    }
    fclose(fp);
    printf("\n\nWanna go back, press enter\n");
        fflush(stdin);
        scanf("%c",&x);
        if (x=='1')
        {
        Block_D_info();
        }
        else
        {
        Block_D_info();
        }
        break;
    case'7':
         Search_Apartment();
        break;
      case'6':
          fp=fopen("block D map.txt","r");
          if(fp==NULL)
    {
        printf("\nFile not found\n");
    }

    while((c=getc(fp))!=EOF)
    {
        fputchar(c);
    }
    fclose(fp);
    printf("\n\nWanna go back, press enter\n");
    fflush(stdin);
        scanf("%c",&x);
        if (x=='1')
        {
        Block_D_info();
        }
        else
        {
       Block_D_info();
        }
        break;
        default:
            {
               printf("\nWrong choice\n\n");
               Block_D_info();
              break;
            }

      }
}


void Search_Hostel()
{
 fflush(stdin);
 char ch;
 printf("\n\nSelect Gender:");
 scanf("%c",&ch);
 switch (ch)
{
 case 'm':
 case 'M':
     {
       Male_hostel();

    break;
     }
 case 'f':
 case 'F':
    {

      Female_hostel();

    break;
     }
 default:
    printf("\n\nGender mismatch,Try again\n\n");
    Search_Hostel();
    break;
 }


}
void Male_hostel()
{
    fflush(stdin);
 FILE *fp;
    char ch,c,x;
 printf("\n\n=======================================\n");
 printf("1.Boys hostel in Block A road 5\n");
 printf("2.Boys hostel in Block B road 4\n");
 printf("3.Go to Main menu\n");
 printf("=======================================\n");
 printf("Your choice:");
 scanf("%c",&ch);
 switch (ch)
{
 case '1':
     fp=fopen("boys hostel block A road 5.txt","r");
         if(fp==NULL)
    {
        printf("\nFile not found\n");
    }
    while((c=getc(fp))!=EOF)
    {
        fputchar(c);
    }
    fclose(fp);
    printf("\n\nWanna go back, press enter\n");
    fflush(stdin);
        scanf("%c",&x);
        if (x=='1')
        {
        Male_hostel();
        }
        else
        {
        Male_hostel();
        }
     break;
 case '2':
     fp=fopen("boys hostel block B road 4.txt","r");
         if(fp==NULL)
    {
        printf("\nFile not found\n");
    }
    while((c=getc(fp))!=EOF)
    {
        fputchar(c);
    }
    fclose(fp);
    printf("\n\nWanna go back, press enter\n");
    fflush(stdin);
        scanf("%c",&x);
        if (x=='1')
        {
        Male_hostel();
        }
        else
        {
        Male_hostel();
        }
    break;
 case '3':

     USER();

    break;
 default:
    printf("\n\nWrong choice\n\n");
    Male_hostel();
    break;
 }

}
void Female_hostel()
{

fflush(stdin);
 FILE *fp;
    char ch,c,x;
 printf("\n\n=======================================\n");
 printf("1.Girls hostel in Block B road 1(VIP)\n");
 printf("2.Girls hostel in Block C road 5\n");
 printf("3.Go to Main menu\n");
 printf("=======================================\n");
 printf("Your choice:");
 scanf("%c",&ch);
 switch (ch)
{
 case '1':
     fp=fopen("VIP girls hostel block B road 1.txt","r");
         if(fp==NULL)
    {
        printf("\nFile not found\n");
    }
    while((c=getc(fp))!=EOF)
    {
        fputchar(c);
    }
    fclose(fp);
    printf("\n\nWanna go back, press enter\n");
    fflush(stdin);
        scanf("%c",&x);
        if (x=='1')
        {
        Female_hostel();
        }
        else
        {
        Female_hostel();
        }
     break;
 case '2':
     fp=fopen("girls hostel block C road 5.txt","r");
         if(fp==NULL)
    {
        printf("\nFile not found\n");
    }
    while((c=getc(fp))!=EOF)
    {
        fputchar(c);
    }
    fclose(fp);
    printf("\n\nWanna go back, press enter\n");
    fflush(stdin);
        scanf("%c",&x);
        if (x=='1')
        {
        Female_hostel();
        }
        else
        {
        Female_hostel();
        }
    break;
 case '3':

     USER();

    break;
 default:
    printf("\n\nWrong choice\n\n");
    Female_hostel();
    break;
 }


}
void Map()
{
    fflush(stdin);
 FILE *fp;
    char ch,c,x;
 printf("\n\n=================================\n");
 printf("1.Map of Entrance(Bashundhara gate)\n");
 printf("2.Map of Mehedi Mart\n");
 printf("3.Map of Apollo Hospital\n");
 printf("4.Go to Main menu\n");
 printf("=================================\n");
 printf("Your choice:");
 scanf("%c",&ch);
 switch (ch)
{
 case '1':
     fp=fopen("Entrance map.txt","r");
         if(fp==NULL)
    {
        printf("\nFile not found\n");
    }
    while((c=getc(fp))!=EOF)
    {
        fputchar(c);
    }
    fclose(fp);
    printf("\n\nWanna go back, press enter\n");
    fflush(stdin);
        scanf("%c",&x);
        if (x=='1')
        {
        Map();
        }
        else
        {
        Map();
        }
     break;
 case '2':
     fp=fopen("Mehedi mart map.txt","r");
         if(fp==NULL)
    {
        printf("\nFile not found\n");
    }
    while((c=getc(fp))!=EOF)
    {
        fputchar(c);
    }
    fclose(fp);
    printf("\n\nWanna go back, press enter\n");
    fflush(stdin);
        scanf("%c",&x);
        if (x=='1')
        {
        Map();
        }
        else
        {
        Map();
        }
    break;
 case '3':
fp=fopen("Apollo hospital map.txt","r");
         if(fp==NULL)
    {
        printf("\nFile not found\n");
    }
    while((c=getc(fp))!=EOF)
    {
        fputchar(c);
    }
    fclose(fp);
    printf("\n\nWanna go back, press enter\n");
    fflush(stdin);
        scanf("%c",&x);
        if (x=='1')
        {
        Map();
        }
        else
        {
        Map();
        }

    break;

 case '4':

     USER();

    break;
 default:
    printf("\n\nWrong choice\n\n");
    Map();
    break;
 }



}
void University_details()
{ char ch,c;
    printf("\n\n1.About NSU\n");
    printf("\n2.About IUB\n");
    printf("\n3.Main menu\n");
    printf("\n4.Exit\n");
     printf("Your choice:");
      scanf("%c",&ch);
      fflush(stdin);
    switch (ch)
    {
    case '1':
        {
        printf("\n\n\nNorth South University or NSU is the first private university of Bangladesh.The government of Bangladesh approved the establishment of North South University in 1992 under the Private University Act (PUA) 1992 (now replaced by PUA 2010). The university was formally inaugurated on February 10, 1993 by the Prime Minister of Bangladesh.NSU has the authority, under its Charter, to impart instruction and confer undergraduate and graduate degrees in all branches of arts, business and sciences, including engineering, agriculture, law and medicine. It also has the authority to grant diplomas, certificates and other academic distinctions. Currently, NSU offers bachelor's and master's degrees in 29 subjects (15 bachelor's degrees and 14 master's degrees). Additional programs including PhD in different subjects are under preparation.\n");

        printf("\n\nWanna go back, press enter\n");
        scanf("%c",&c);
        if (c=='1')
        {
        University_details();
        }
        else
        {
        University_details();
        }
        break;
        }
    case '2':
        {
        printf("\n\nIndependent University Bangladesh or IUB is a university in Bangladesh. Independent University, Bangladesh (IUB) established in 1993 is the leading private university in Bangladesh with an explicit focus on Research and Global partnerships. We are a full service, oriented university with a current enrollment of 5,500 students, 8900 Alumni and 250 faculty members (of which 25 percent have PhD’s mostly from North America). IUB Campus The IUB campus sprawling over 3 acres, has an amphitheatre, state-of-the-art laboratories, a well-equipped library with online access to journals and books, above 50 classrooms, lecture galleries, a world-class auditorium, gymnasium, food court, playground, medical centre, counseling centre, students dormitory and an alumni office.\n");
        printf("\n\nWanna go back, press enter\n");
        scanf("%c",&c);
        if (c=='1')
        {
        University_details();
        }
        else
        {
        University_details();
        }
        break;
        }
    case '3':
        USER();
        break;
    case '4':
        break;
    default:
            {
               printf("\n\nWrong choice\n\n");
               University_details();
            }
    }
}

void Extra_feature()
{
   int arr[MAX_SIZE];
   int i, sum;
   char ch;
    printf("\n\n1.Home Budget Calculator\n");
    printf("2.Back\n");
    printf("Your choice:");
    fflush(stdin);
    scanf("%c",&ch);

   switch(ch)
   {
       case '1':
           {
               printf("===================================================================================\n");
               printf("                          Home Budget Calculator\n\n\n");

    for(i=0; i<7; i++)
    {   if(i==0)
        {
         printf("Home rent:");
        }
        if(i==1)
        {
         printf("Electricity bill:");
        }
        if(i==2)
        {
         printf("Water bill:");
        }
        if(i==3)
        {
         printf("Gas bill:");
        }
        if(i==4)
        {
         printf("Security charge:");
        }
        if(i==5)
        {
         printf("Internet bill:");
        }
        if(i==6)
        {
         printf("Maid cost:");
        }
        scanf("%d", &arr[i]);
        printf("\n");
    }


    sum = Home_Budget_calculator_sum(arr, 0, 7);
    printf("\n\n\n===>The total cost is: %d\n\n", sum);
    GoBack_Exit();
        break;
           }
       case '2':
          USER();
       break;

    default:
            {
               printf("\n\nWrong choice\n\n");
               Extra_feature();
            }
   }





}
int Home_Budget_calculator_sum(int arr[], int start, int len) ///recursive method
{
    if(start >= len)
        return 0;

    return (arr[start] + Home_Budget_calculator_sum(arr, start+1, len));
}
void About_Basundhara(char x)
{
    if(x=='1')
    {
        printf("\n\nBashundhara Residential Area is a Private residential area of Badda Thana in Dhaka District in the Division of Dhaka, Bangladesh. It is owned and operated by Bashundhara Group. The Project was started in the 1980s.In 2011 portions of the housing project was declared illegal as they were considerable flood flow zones of Dhaka. In 2014 a cabinet committee changed the Dhaka detailed plan to make the project legal.The project was built on area made by filling low-lying marshland and flood flow zones. The project has sold over 10,000 residential plots as of 2005.\n");
        printf(" Commercial=>\n");
        printf("             Grameenphone- the headquarters of the company are located in the area.\n");
        printf(" 		     Apollo Hospital Dhaka.\n");
        printf(" 		     Bashundhara Group headquarters are located here.\n");
        printf(" 		     Bangladesh Pratidin- the highest circulated newspaper in Bangladesh.\n");
        printf(" Education =>\n");
        printf(" 		     Independent University, Bangladesh (IUB)\n");
        printf(" 		     North South University.\n");
        printf(" 		     International School Dhaka.\n");
        printf(" 		     Ebenezer International School a Christian Korean School.\n\n");
        GoBack_Exit();
    }
    if(x=='2')
    {
        printf("\n\n");
        printf("Near by Bashundhara Residential Area:\n\n");
        printf("Third-order administrative division =>	Gulshan, Kafrul\n");
        printf("Airport                             =>	Dhaka, Kurmitola, Dia \n");
        printf("Building(s)                         =>	NITS Services (P) Ltd. \n");
        printf("Populated place                     =>	Dumni, Samair, Satarkul, Purba Harardia, Krishibagan,Chhota Magbazar, Mastul, Kaskara, Dhelna, Tejkunipara, Ulun,\n");
        printf("                                        Barua, Chhota Beraid, Purakar, Khoskhana, Bhatara, Lalasarai,Dakshin Khan, Paschim Harardia, Solpur, Mahakhali, Karail,\n");
        printf("                                        Nigur Aplaid, Fatemanagar, Bara Kathaldia, Joar Sahara, Bara Beraid Ayubnagar, Ibrahimpur, Badda, Dhamalkot, Baothar,\n");
        printf("                                        Bhaturia, Banani Model Town, Bhola, Baunia, Suti Bhola\n");
        printf("Section of populated place          =>	Baridhara \n");
        printf("Road                                =>	Mohakhali Flyover \n");
        printf("Road junction                       =>	Mohakhali Wireless Circle, Mohakhali Amtoli Circle, Gulshan 1 Circle, Ghulshan 2 Circle \n");
        GoBack_Exit();
    }
}


void About_Programmer()
{
struct NSU Programmer[3] = {{"Kazi Anik Islam","North South University", 1631699642,"CSE" ,"ECE"}, {"Siam Ibne Zamil","North South University", 1631700642, "CSE" ,"ECE"}, {"Alvina Rahman","North South University", 1310763643,"EEE" ,"ECE"}};
int x;
    printf("\n\n                      About Programmer\n\n");

   info(&Programmer);

    GoBack_Exit();
}
void info (struct NSU *pro)
{
    int i;
    for(i=0;i<3;i++)
{   printf("Programmer %d:",(i+1));
    printf("\nName of the Programmer   : %s",pro->name);
    printf("\nName of the University   : %s",pro->University_name);
    printf("\nStudent ID               : %d",pro->ID);
    printf("\nName of the Major subject: %s",pro->course);
    printf("\nName of the Department   : %s",pro->dept);
    printf ("\n \n");
    pro++;
}
}

