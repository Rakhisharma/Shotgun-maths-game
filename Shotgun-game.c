#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
void show_record();
void reset_score();
void help();
void edit_score(float , char []);
int main()
     {
     int countr,r,r1,count,i,n;
     float score;
     char choice;
     char playername[20];
     mainhome:
     system("cls");
     printf("\t\t\t QUIZ GAME\n");
     printf("\n\t\t________________________________________");

     printf("\n\t\t\t   WELCOME ");
     printf("\n\t\t\t      to ");
     printf("\n\t\t\t   THE GAME ");
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t   BECOME A MILLIONAIRE!!!!!!!!!!!    ") ;
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t > Press S to start the game");
     printf("\n\t\t > Press V to view the highest score  ");
     printf("\n\t\t > Press R to reset score");
     printf("\n\t\t > press H for help            ");
     printf("\n\t\t > press Q to quit             ");
     printf("\n\t\t________________________________________\n\n");
     choice=toupper(getch());
     if (choice=='V')
	{
	show_record();
	goto mainhome;
	}
     else if (choice=='H')
	{
	help();getch();
	goto mainhome;
	}
	else if (choice=='R')
	{
	reset_score();
	getch();
	goto mainhome;
	}
	else if (choice=='Q')
	exit(1);
    else if(choice=='S')
    {
     system("cls");

    printf("\n\n\n\n\n\n\n\n\n\n\t\t\t Enter your name:");
     gets(playername);

    system("cls");
    printf("\n ------------------  Welcome %s to Quiz Game --------------------------",playername);
    printf("\n\n Here are some tips before start playing:");
    printf("\n -------------------------------------------------------------------------");
    printf("\n >> There are 2 rounds in this Quiz Game, BASIC ROUND & ADVANCE ROUND");
    printf("\n >> In basic round you will be asked a total of 5 questions to test your");
    printf("\n    basic knowledge. You are eligible to play the game if you give atleast 2");
    printf("\n    right answers, otherwise you can't proceed further to the Advance Round.");
    printf("\n >> Your game starts with ADVANCE ROUND. In this round you will be asked a");
    printf("\n    total of 10 questions");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option.");
    printf("\n >> No negative marking for wrong answers!");
    printf("\n\n\t************ALL THE BEST ***********");
    printf("\n\n\n Press Y  to start the game!\n");
    printf("\n Press any other key to return to the main menu!");
    if (toupper(getch())=='Y')
		{
		    goto home;
        }
	else
		{
        goto mainhome;
       system("cls");
       }

     home:
     system("cls");
     count=0;
     for(i=1;i<=3;i++)
     {
    system("cls");
     r1=i;
     
     switch(r1)
		{
		case 1:
		printf("\n\n 3 + ? = 8. What is the missing number in these addition sums?");
		printf("\n\nA.4\t\tB.10\n\nC.5\t\tD.2");
		if (toupper(getch())=='C')
			{
			    printf("\n\nCorrect!!!");count++;
			    getch();
			    break;
			}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is C.5");
		           getch();
		       break;
		       }

        case 2:
		printf("\n\n\n ? + 0.5 = 8. What is the missing number in these addition sums?");
		printf("\n\nA. 7.10.\t\tB.7.60\n\nC.7.50\t\tD.0.5");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.7.50");
		       getch();
		       break;}

        case 3:
		printf("\n\n\n 15 - ? = 00. What is the missing number?");
		printf("\n\nA.14\t\tB.15\n\nC.14.05\t\tD.00");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.15");
		       getch();
		       break;}

        case 4:
		printf("\n\n\n18 + 5 - ? = 8. What is the missing number?");
		printf("\n\nA.15\t\tB.23\n\nC.22\t\tD.21.25");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");count++;
			getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.23");
		       getch();
		       break;}

        case 5:
        printf("\n\n\n -18 + 5 - 00 = ?. What is the missing number?");
        printf("\n\nA.00. K2\t\tB.-13\n\nC.13\t\tD.-10");
        if (toupper(getch())=='B')
               {printf("\n\nCorrect!!!");count++;
               getch();
                break;}
        else
		       {printf("\n\nWrong!!! The correct answer is B.-13");
		       getch();
		       break;}}
		       }
	if(count>=2)
	{goto test;}
	else
	{
	system("cls");
	printf("\n\nSORRY!! YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, TRY AGAIN");
	getch();
	goto mainhome;
	}
     test:
     system("cls");
     printf("\n\n\t *CONGRATULATION %s YOU CAN PROCEED*",playername);
     printf("\n\n\n\n\t!Press any key to Start the Game!");
     if(toupper(getch())=='p')
		{goto game;}
game:
     countr=0;
     for(i=1;i<=10;i++)
     {system("cls");
     r=i;

     switch(r)
		{
		case 1:
		printf("\n\n1*4 + 4*1 What will be the sum?");
		printf("\n\nA.10\t\tB.4\n\nC.8\t\tD.4");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;getch();}
		else
		       {printf("\n\nWrong!!! The correct answer is C.8");getch();
		       goto score;
		       break;}

		case 2:
		printf("\n\n\n(1+4) * (4+1) +120 What will be the sum?");
		printf("\n\nA.145\t\tB.142\n\nC.165\t\tD.185");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.145");getch();
		      goto score;
		       break;
		       }

        case 3:
		printf("\n\n\n 4/1 + 0/4 What will be the sum? ");
		printf("\n\nA.0\t\tB.7/4\n\nC.4\t\tD.9");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C. 4");getch();
		       goto score;
		       break;}

        case 4:
		printf("\n\n\n4/7 + 2/5 What will be the sum?");
		printf("\n\nA.34/35\t\tB.14/35\n\nC.20/35\t\tD.36/35");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {
                printf("\n\nWrong!!! The correct answer is A.34/35");getch();
		       goto score;
		       break;
		       }

        case 5:
		printf("\n\n\n 14/7 + 0/5 - 0/5 What will be the the answer?");
		printf("\n\nA.0\t\tB.2\n\nC.1\t\tD.5");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is B.2");
		       getch();
		       goto score;
		       break;
		       }

		case 6:
		printf("\n\n\n13* 13 * 1 What will be the answer");
		printf("\n\nA.159\t\tB.169\n\nC.109\t\tD.26");
		if (toupper(getch())=='B' )
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.169");goto score;
		       getch();
		       break;}

        case 7:
		printf("\n\n\n 4*7 + 100/5 What will be the sum");
		printf("\n\nA.38\t\tB.65\n\nC.58\t\tD.48");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.48");getch();
		       goto score;
		       break;}

        case 8:
		printf("\n\n\n 47 + (2/5)*5 -47 What will be the answer");
		printf("\n\nA.7\t\tB.2\n\nC.5\t\tD.47");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.2");getch();
		       goto score;
		       break;}

        case 9:
		printf("\n\n\n 15 + 15 - 30  What will be the sum");
		printf("\n\nA.0\t\tB.1\n\nC.15\t\tD.something else");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.0");getch();
		       goto score;
		       break;}

        case 10:
		printf("\n\n\n 50* 12 / 5 + 10000 What will be the sum?");
		printf("\n\nA.16000\t\tB.10050\n\nC.10200\t\tD.1700");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.16000");getch();break;goto score;}

        case 11:
		printf("\n\n\nEmma bought 83 packages of biscuits. Each package had 45 biscuits. About how many biscuits did Emma buy? Choose the better estimate.");
		printf("\n\nA.40000\t\tB.5000\n\nC.4000\t\tD.4500");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
              {printf("\n\nWrong!!! The correct answer is C.4000");getch();
              break;goto score;}

        case 12:
		printf("\n\n\nA seed company filled 46 bags with seed. They put 63 grams of seed in each bag. About how many grams of seed are there in all the bags combined? Choose the better estimate.?");
		printf("\n\nA.3000\t\tB.30000\n\nC.4000\t\tD.4500");
		if (toupper(getch())=='A')
			  {printf("\n\nCorrect!!!");countr++;getch();
			   break;}
		else
              {printf("\n\nWrong!!! The correct answer is A.3000");getch();
              break;goto score;}

		case 13:
		printf("\n\n\nThe canteen sold 8 fewer bowls of chicken soup than bowls of tomato soup. They sold 14 bowls of soup in all. How many bowls of tomato soup did the canteen sell?");
		printf("\n\nA.None of them are correct\t\tB.11 bowls of chicken soup 3 bowls of tomato soup .\n\nC.10 bowls of tomato soup and 3 bowls of chicken soup.\t\tD.11 bowls of tomato soup and 3 bowls of chicken soup.");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++;getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.11 bowls of tomato soup and 3 bowls of chicken soup.");getch();
		       break;goto score;}

        case 14:
		printf("\n\n\nThere were 14 fans at Sasha's basketball game. The home team had 8 more fans than the visiting team. How many fans did the visiting team have??");
		printf("\n\nA.home team had 11 fans and the visiting team had 3 fans\t\tB.home team had 10 fans and the visiting team had 3 fans\n\nC.home team had 3 fans and the visiting team had 11 fans\t\tD.None of them");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.home team had 11 fans and the visiting team had 3 fans");getch();
		       break;goto score;}

		case 15:
		printf("\n\n\nThe canteen sold 9 more turkey sandwiches than ham sandwiches. They sold 15 sandwiches in all. How many turkey sandwiches did the canteen sell??");
		printf("\n\nA.sold 10 turkey sandwiches and 5 ham sandwiches.\t\tB.sold 12 turkey sandwiches and 3 ham sandwiches.\n\nC.sold 12 ham sandwiches and 3 turkey sandwiches.\t\tD.sold 12 ham sandwiches and 3 turkey sandwiches");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.sold 12 turkey sandwiches and 3 ham sandwiches");getch();
		       goto score;
		       break;}}}
	score:
    system("cls");
	score=(float)countr*100000;
	if(score>0.00 && score<1000000)
	{
	   printf("\n\n\t\t**************** CONGRATULATION *****************");
	     printf("\n\t You won Rs%.2f",score);goto go;}

	 else if(score==1000000.00)
	{
	    printf("\n\n\n \t\t**************** CONGRATULATION ****************");
	    printf("\n\t\t\t\t YOU ARE A MILLIONAIRE!!!!!!!!!");
	    printf("\n\t\t You won Rs%.2f",score);
	    printf("\t\t Thank You!!");
	}
	 else
{
	 printf("\n\n\t******** SORRY YOU DIDN'T WIN ANY CASH ********");
	    printf("\n\t\t Thanks for your participation");
	    printf("\n\t\t TRY AGAIN");goto go;}

	go:
	puts("\n\n Press Y if you want to play next game");
	puts(" Press any key if you want to go main menu");
	if (toupper(getch())=='Y')
		goto home;
	else
		{
		edit_score(score,playername);
		goto mainhome;}}}

void show_record()
    {system("cls");
	char name[20];
	float scr;
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&name,&scr);
	printf("\n\n\t\t*************************************************************");
	printf("\n\n\t\t %s has secured the Highest Score %0.2f",name,scr);
	printf("\n\n\t\t*************************************************************");
	fclose(f);
	getch();}

void reset_score()
    {system("cls");
    float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r+");
	fscanf(f,"%s%f",&nm,&sc);
	sc=0;
	fprintf(f,"%s,%.2f",nm,sc);
    fclose(f);}

void help()
	{system("cls");
    printf("\n\n                              HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n ......................... C program Quiz Game...........");
    printf("\n >> There are two rounds in the game, BASIC ROUND & ADVANCE ROUND");
    printf("\n >> In BASIC round you will be asked a total of 3 questions to test your basics");
    printf("\n    knowledge. You will be eligible to play the game if you can give atleast 2");
    printf("\n    right answers otherwise you can't play the Game...........");
    printf("\n >> Your game starts with the ADVANCE ROUND. In this round you will be asked");
    printf("\n    total 10 questions each right answer will be awarded Rs100,000.");
    printf("\n    By this way you can win upto ONE MILLION cash prize...............");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option");
    printf("\n >> You will be asked questions continuously if you keep giving the right answers.");
    printf("\n >> No negative marking for wrong answers");

	printf("\n\n\t*********************BEST OF LUCK*********************************");
	}
	
void edit_score(float score, char plnm[20])
	{system("cls");
	float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&nm,&sc);
	if (score>=sc)
	  { sc=score;
	    fclose(f);
	    f=fopen("score.txt","w");
	    fprintf(f,"%s\n%.2f",plnm,sc);
	    fclose(f);
		}
	}

		
