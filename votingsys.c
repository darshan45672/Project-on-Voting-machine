#include<stdio.h>
#include<windows.h>
int bjp=0, congress=0, aap=0, jds=0;
void electionResult()
{
    int wonByVote;
    if (bjp > congress && bjp > aap && bjp > jds)
    {
        system("cls");
        printf("\n*** BJP won the election ***\n\n");
        printf("Total vote of BJP : %d\n",bjp);
        wonByVote=bjp-congress;
        printf("BJP won by %d votes to Congress\n",wonByVote);
        wonByVote=bjp-aap;
        printf("BJP won by %d votes to AAP\n",wonByVote);
        wonByVote=bjp-jds;
        printf("BJP won by %d votes to JDS\n",wonByVote);
    }
    else if (congress > aap && congress > jds)
    {
        system("cls");
        printf("\n*** Congress won the election ***\n\n");
        printf("Total vote of Congress : %d\n",congress);
        wonByVote=congress-bjp;
        printf("Congress won by %d votes to BJP\n",wonByVote);
        wonByVote=congress-aap;
        printf("Congress won by %d votes to AAP\n",wonByVote);
        wonByVote=congress-jds;
        printf("Congress won by %d votes to JDS\n",wonByVote);
    }
    else if (aap > jds)
    {
        system("cls");
        printf("\n*** AAP won the election ***\n\n");
        printf("Total vote of AAP : %d\n",aap);
        wonByVote=aap-congress;
        printf("AAP won by %d votes to Congress\n",wonByVote);
        wonByVote=aap-bjp;
        printf("AAP won by %d votes to BJP\n",wonByVote);
        wonByVote=aap-jds;
        printf("AAP won by %d votes to JDS\n",wonByVote);
    }
    else if(bjp == congress && bjp == aap && bjp == jds)
    {
        system("cls");
        printf("\nNo one won the election\n\n");
        printf("            BJP---Congress---AAP---JDS\n");
        printf("Total Vote   %d       %d        %d     %d\n",bjp,congress,aap,jds);
    }
    else
    {
        system("cls");
        printf("\n*** JDS won the election ***\n\n");
        printf("Total vote of JDS : %d\n",jds);
        wonByVote=jds-congress;
        printf("JDS won by %d votes to Congress\n",wonByVote);
        wonByVote=jds-aap;
        printf("JDS won by %d votes to AAP\n",wonByVote);
        wonByVote=jds-bjp;
        printf("JDS won by %d votes to BJP\n",wonByVote);
    }
}
void calculateVote(int vote)
{
    switch (vote)
    {
    case 1:
        bjp+=1;
        break;
    case 2:
        congress+=1;
        break;
    case 3:
        aap+=1;
        break;
    case 4:
        jds+=1;
        break;
    default:{
         printf("\nenter a valid number!!\n");
     }
    }
}
void main()
{
    int choose;
    system("cls");
    do
      {     
        system("cls"); 
        printf("\n*********  Welcome to the simple voting system project  *********\n\n");
        printf("                         MP election                        \n\n");
        printf("*************************************************************\n");
        printf("|           1.BJP             |          2.Congress         |\n");
        printf("*************************************************************\n");
        printf("|           3.APP             |          4.JDS              |\n");
        printf("*************************************************************\n\n");
        printf("Press < 1 > to vote BJP\n");
        printf("Press < 2 > to vote Congress\n");
        printf("Press < 3 > to vote APP\n");
        printf("Press < 4 > to vote JDS\n");
        printf("Press < 5 > to show election result\n");
        printf("Please choose : ");
        scanf("%d", &choose);
        if (choose==5)
        {
            electionResult();
        }else
        {
            calculateVote(choose);            
        } 
        printf("\n");
    } while (choose != 5);
}