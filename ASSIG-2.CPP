#include <stdio.h>

#include <stdlib.h>

#include<conio.h>

int main()


{   clrscr();

    char chk;
    float val;

    int a[4]={0,0,0,0},i,c=0,n;

     printf("sample space = {HH,HT,TH,TT}\n");


    do{
	srand (time(0));
	i= rand()%4;
	c++;

	if(i==0)
	    {    printf("HH");
		 a[0]++;
	    }

    else if(i==1)
	    {printf("HT");
	    a[1]++;
	    }
    else if(i==2)
	    {a[2]++;
	    printf("TH");
	    }
    else if(i==3)
	    {printf("TT");
	    a[3]++;
	}
	printf("\nwant to toss the coin again (y/n):- ");
	scanf("%s",&chk);

    }while(chk=='y');
    printf("\ntatal number of times you have tosssed the coin %d\n", c);

    for(n=0;n<4;n++)
    {
	val=float(a[n])/float(c);
	printf("probability of %d is %f and the total occurrence is %d\n",n,val,a[n]);
    }

    printf("\n(where 0=HH, 1=HT, 2=TH, 3=TT)");
    getch();
}

