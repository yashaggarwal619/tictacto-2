#include<iostream.h>
#include<conio.h>
char a[3][3];
int checkd1(int);
int checkd2(int);
int checkr1(int);
int checkr2(int);
int checkr3(int);
int checkc1(int);
int checkc2(int);
int checkc3(int);
void display()
{
for(int i=0;i<3;i++)
 {      cout<<"\n";
	for(int j=0;j<3;j++)
	{
	cout<<a[i][j]<<"\t";
	}

 }
}
int placeoandx(char choice,int count)
{ switch(choice)
 {
   case '1':if(a[0][0]=='x'||a[0][0]=='o')
   {
	cout<<"already a char is placed";
	return 1;
   }
   else
   if(count%2==0)
	    {
	     a[0][0]='o';
	    }else
	    a[0][0]='x';break;
  case '2':if(a[0][1]=='x'||a[0][1]=='o')
   {
	cout<<"already a char is placed";
	return 1;
   }
   else
  if(count%2==0)
	    {
	     a[0][1]='o';
	    }else
	    a[0][1]='x'  ;    break;
 case '3':if(a[0][2]=='x'||a[0][2]=='o')
   {
	cout<<"already a char is placed";
	return 1;
   }
   else
 if(count%2==0)
	    {
	     a[0][2]='o';
	    }else
	    a[0][2]='x' ;   break;
case '4':if(a[1][0]=='x'||a[1][0]=='o')
   {
	cout<<"already a char is placed";
	return 1;
   }
   else
if(count%2==0)
	    {
	     a[1][0]='o';
	    }else
	    a[1][0]='x';   break;
case '5':if(a[1][1]=='x'||a[1][1]=='o')
   {
	cout<<"already a char is placed";
	return 1;
   }
   else
if(count%2==0)
	    {
	     a[1][1]='o';
	    }else
	    a[1][1]='x';   break;
case '6':if(a[1][2]=='x'||a[1][2]=='o')
   {
	cout<<"already a char is placed";
	return 1;
   }
   else
if(count%2==0)
	    {
	     a[1][2]='o';
	    }else
	    a[1][2]='x';  break;
 case '7':if(a[2][0]=='x'||a[2][0]=='o')
   {
	cout<<"already a char is placed";
	return 1;
   }
   else
 if(count%2==0)
	    {
	     a[2][0]='o';
	    }else
	    a[2][0]='x';
 case '8':
 if(a[2][1]=='x'||a[2][1]=='o')
   {
	cout<<"already a char is placed";
	return 1;
   }
   else
 if(count%2==0)
	    {
	     a[2][1]='o';
	    }else
	    a[2][1]='x' ;   break;
 case '9':if(a[2][2]=='x'||a[2][2]=='o')
   {
	cout<<"already a char is placed";
	return 1;
   }
   else
 if(count%2==0)
	    {
	     a[2][2]='o';
	    }else
	    a[2][2]='x'  ; break;
default: {cout<<"wrong choice"; return 1;}

 }
  display(); return 0;
}
void initialize()
{
char t='1';
for(int i=0;i<3;i++)
 {
	for(int j=0;j<3;j++)
	{
	a[i][j]=t++;
	}


 }
clrscr(); display();

}



int checkd1(int count)
{    int i,j;char ch=1;

 for(i=0;i<3;i++)
{	for(j=0;j<3;j++)
   {

      if((i==j)&&a[i][j]!=a[0][0])
      {
       ch=0;break;
      }



   }

}
 if(ch==1)
 {

 return 1;
 }
 else
 if(count==8)
 {
 cout<<"its a draw";return 3;

 }else {return checkd2(count);} return 2;
 }
 int checkd2(int count)
{    int i,j;
	  char ch=1;
 for(i=0;i<3;i++)
{	for(j=0;j<3;j++)
   {

      if((i+j==2)&&a[i][j]!=a[0][2])
      {
       ch=0;break;
      }


   }

}
 if(ch==1)
 {

 return 1;
 }

 else {return checkr1(count);}
 return 2;
 }
 int checkr1(int count)
{    int i,j;
	  char ch=1;
 for(i=0;i<3;i++)
{	for(j=0;j<3;j++)
   {

      if(a[0][j]!=a[0][0])
      {
       ch=0;break;
      }



   }

}
 if(ch==1)
 {

 return 1;
 }
else {return checkr2(count);}
 return 2;
 }

 int checkr2(int count)
{    int i,j;
	  char ch=1;
 for(i=0;i<3;i++)
   {

      if(a[1][j]!=a[1][0])
      {
       ch=0;break;
      }



   }


 if(ch==1)
 {

 return 1;
 }
 else {return checkr3(count);}
 return 2;
 }

int checkr3(int count)
{    int i,j;
	  char ch=1;
 for(i=0;i<3;i++)
{

      if(a[2][j]!=a[2][0])
      {
       ch=0;break;
      }



   }


 if(ch==1)
 {

 return 1;
 }
 else {return checkc1(count);}
 return 2;
}
 int checkc1(int count)
{    int i,j;
	  char ch=1;
 for(i=0;i<3;i++)
{

      if(a[i][0]!=a[0][0])
      {
       ch=0;break;
      }





}
 if(ch==1)
 {

 return 1;
 }
 else {return checkc2(count);}
 return 2;
 }
 int checkc2(int count)
{    int i,j;
	char ch=1;
 for(i=0;i<3;i++)

   {

      if(a[i][1]!=a[0][1])
      {
       ch=0;break;
      }



   }


 if(ch==1)
 {

 return 1;
 }
 else {return checkc3(count);}
 return 2;
 }
 int checkc3(int count)
{    int i,j;
	char ch=1;
 for(i=0;i<3;i++)

   {

      if(a[i][2]!=a[0][2])
      {
       ch=0;
       break;
      }



   }


 if(ch==1)
 {

 return 1;
 }
 else {return 0;}
 }








void main()
{    char pos;
	int x;8;int check=1;    clrscr();
while(check==1)
{	clrscr();
cout<<"\t"<<"\t"<<"TICTACTO"<<"\n";
	initialize();

	for(int i=0;i<9;i++)
{               cout<<"\n";
	if(i%2==0)
{             int z1=0;
	cout<<"first player choose position to enter o  "<<"\n";
	cin>>pos;
      x=placeoandx(pos,i);

      z1= checkd1(i);
      if(z1==1)
      {
      cout<<"the char o wins the match"<<"\n";
      break;
      }

      if(x==1)
	{i=i-1;}


}
	else
{             int z1=0;
	cout<<"second player choose position to enter x  "<<"\n";
	cin>>pos;
       x=placeoandx(pos,i);
	z1= checkd1(i);
      if(z1==1)
      {cout<<"the char x wins the match"<<"\n";
      break;
      } else
      if(z1==3)
      {
      cout<<"its a draw";
      break;
      }



	if(x==1)
	{i=i-1;}
}
}
cout<<"\n";
cout<<"do you wnt to conrtinue(1=yes /0=no)"<<"\n";
cin>>check;
}

getch();
}