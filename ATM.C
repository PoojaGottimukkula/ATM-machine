#include<stdio.h>
#include<conio.h>
FILE*fp;
long int pin1,pin2,pin3,opt,amount,amt,damount,mobnum,acc_no,a1,balance=30000,b,c,m;
char a,r;
void main()
{
void reg();
void nreg();
fp=fopen("proj.txt","w");
printf("WELCOME!\nplease insert your card");
scanf("%c",&a);
printf("enter 'y'if you are registered else 'n'\n");
fflush(stdin);
scanf("%c",&r);
if(r=='y')reg();
else nreg();
}
void reg()
{
printf("please enter your pin\n");
scanf("%ld",&pin1);
do
{
printf("choose your transaction type\n1:withdraw\n2:balance inquiry\n3:transfer\n4:deposit\5:for pin change\n6:quick cash\n7:exit\n");
scanf("%ld",&opt);
switch(opt)
{
case 1:printf("enter amount to be withdrwn\n");
       scanf("%ld",&amt);
       if(balance<amt)
	 printf("balance insufficient\n");
       else
	 balance=balance-amt;
       break;
case 2:printf("your present balance is %ld\n",balance);
       fprintf(fp,"your present balance is %ld\n",balance);
	break;
case 3:printf("choose\n1:saving account\n2:current account\n3:deposite account\n4:loan account\n");
       scanf("%ld",&b);
       transe:printf("enter account number to which you want to send money");
       scanf("%ld",&acc_no);
       printf("re enter account number\n");
       scanf("%ld",&a1);
       if(acc_no==a1)
	 printf("enter amount to be transfered\n");
       else
	{ printf("account numbers do not match\n");
	 goto transe;
	}
       scanf("%ld",&amount);
       if(balance<amount)
       balance -=amount;
       printf("balance=%ld\n",balance);
       break;
case 4:printf("1:saving\t2:current");
       printf("enter deposite amount\ndeposite per transaction limit:200000\n");
       scanf("%ld",&c);
       scanf("%ld",&damount);
       amount+=damount;
	break;
case 5:printf("pin change\n");
       match:printf("enter new pin");
       scanf("%ld",&pin2);
       printf("conform your pin");
       scanf("%ld",&pin3);
       if(pin2==pin3)printf("pin changed successfully");
       else {printf("pins don't match enter again");
		goto match;}
case 6:printf("how much do you want to withdraw\n");
       printf("1:100\t2:200\t3:500\t4:1000\n");
       scanf("%ld",&m);
       switch(m)
       {
       case 1:balance-=100;
       case 2:balance-=200;
       case 3:balance-=500;
       case 4:balance-=1000;
       }
       if(balance<0)
	 printf("insufficient balance\n");
       else
	 printf("your present balance is %ld",balance);
}
}while(opt!=7);
}
void nreg()
{
printf("enter your account number");
scanf("%ld",&acc_no);
printf("enter your mobile number");
scanf("%ld",&mobnum);
printf("Dear customer...xxx bank appreciate you for the green initiative.\npin shall be shortly delivered to your registered mobile number on success of your transaction\n");
printf("....\n.........\ntransaction in progress\n.....\n......\nTRANSACTION SUCCESSFULL");
printf("\nplease take your card");
}






