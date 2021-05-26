#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void reverse(char str[])
{
	int i,j,k;
	i=0;
	k=0;
	j=0;
	cout<<"\n\tReverse of String Word By Word : ";
	while(str[i]!='\0')
	{
		if(str[i]==' ')
		{
		    while(k>=j)
		    {
			cout<<str[k];
			k--;
		    }
		    j=i+1;
		    k=i;
		}
		else if(str[i+1]=='\0')
		{
			cout<<" ";
		    while(k>=j)
		    {
			cout<<str[k];
			k--;
		    }
		}
	i++;
	k++;
	}
}
void encode(char str[])
{
	int i=0;
	cout<<"\n\tEncoded String : ";
	while(str[i]!='\0')
	{
		str[i]=str[i]+4;
		cout<<str[i];
		i++;
	}
}
void decode(char str[])
{
	int i=0;
	cout<<"\n\tDecoded String : ";
	while(str[i]!='\0')
	{
		str[i]=str[i]-4;
		cout<<str[i];
		i++;
	}
}
void main()
{
	int ch;
	char str[80];
	clrscr();
	do
	{
		cout<<"\n\t1. Get String\n\t2. Reverse\n\t3. Encode String";
		cout<<"\n\t4. Decode String\n\t   Enter Choice : ";
		cin>>ch;
		switch(ch)
		{
			case 1: cout<<"\n\tEnter String : ";
				gets(str);
				break;
			case 2:	reverse(str);
				break;
			case 3: encode(str);
				break;
			case 4: decode(str);
				break;
			default:
				cout<<"\n\tEnter Valid Choice....?";
		}
	}while(ch>=1 && ch<=5);
getch();
}