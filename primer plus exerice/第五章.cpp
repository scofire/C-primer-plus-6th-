#include<iostream>
#include<string>
using namespace std;
#include<array>

void p5_1()
{
	int one=0;
	int two=0;
	int num=0;
	cout<<"Enter first number: ";
	cin>>one;
	cout<<"Enter second nunmber: ";
	cin>>two;
	for (int i = one; i <= two; i++)
	{
		num+=i;
	}
	cout<<num<<endl;
}

void p5_2()
{
	const int ArSize=100;
	//array<long double,ArSize+1>numbs;
	long double numbs[101];
	numbs[0] = numbs[1]=1.0;
	for (int i = 2; i <= ArSize; i++)
	{
		numbs[i]=numbs[i-1]*i;
	}
	for (int i = 0; i <= ArSize; i++)
	{
		cout<<i<<"!= "<<numbs[i]<<endl;
	}
}

void p5_3()
{
	int num=0;
	int sum=0;
	while (1)
	{
		cout<<"Enter a number ";
		cin>>num;
		if (num == 0)
		{
			break;
		}
		sum+=num;
		cout<<"until now ,the total you input is: "<<sum<<endl;
	}
	cout<<"get it"<<endl;

}

void p5_4()
{
	double Daphne_account=100;
	double Cleo_account=100;
	int years=0;
	while (Daphne_account >= Cleo_account)
	{
		years++;
		Daphne_account+=10;
		Cleo_account=Cleo_account*1.05;
	}
	cout<<"After "<<years<<" years "<<"Cleo is richer than Daphne "<<endl;
}

void p5_5()
{
	string month[12] = { "January", "February", "March", "April", "May", "June", "July", "August", "Septempber", "October", "November", "December" };
	int sell[12];
	int sum=0;
	cout<<"Enter the sell of each month"<<endl;
	for (int i = 0; i < 12; i++)
	{
		cout<<month[i]<<": ";
		cin>>sell[i];
		sum+=sell[i];
	}

	cout<<"The total sale is "<<sum<<endl;
	for (int i = 0; i < 12; i++)
	{
		cout<<month[i]<<" : "<<sell[i]<<endl;
	}

}

void p5_6()
{
	string month[12] = { "January", "February", "March", "April", "May", "June", "July", "August", "Septempber", "October", "November", "December" };
	int  sell[3][12] = {0};
	int sum[3] = {0};
	for (int i = 0; i < 3; i++)
	{
		cout<<"Enter "<<i+1<<" year sales of book of <C++ for Tools> each month: "<<endl;
		for (int j = 0; j < 12; j++)
		{
			cout<<month[j]<<" : ";
			cin>>sell[i][j];
			sum[i]+=sell[i][j];
		}
	}
	for (int i = 0; i < 3; i++)
	{
		cout<<i+1<<" year total sales is "<<sum[i]<<endl;
	}
	cout<<"Three years total sales are : "<<sum[0]+sum[1]+sum[2]<<endl;

}

void p5_7()
{
	typedef struct Car {
		string company;
		int make_year;
	}cars;

	unsigned int num=0;
	cout<<"How many cars do you wish to catallog? ";
	cin>>num;
	cars * car_primer=new cars[num];
	for (int i = 0; i < num; i++)
	{
		cout<<" Car # "<<i+1<<": "<<endl;
		cout<<"please enter the make ";
		cin>>car_primer[i].company;

		cout <<"please enter the year make: ";
		cin>>car_primer[i].make_year;
	}
	cout<<" Here is your collection: "<<endl;
	for (int i = 0; i < num; i++)
	{
		cout << car_primer[i].company<<"   "<<car_primer[i].make_year<<endl;
	}
}

void p5_8()
{
	int num_word=0;
	char letter[128];
	cout<<"Enter words (type done to stop)"<<endl;
	while (cin >> letter)
	{
		if (strcmp(letter, "done"))
		{
			break;
		}
		num_word++;
	}
	cout<<"You enter a total of "<<num_word<<" words."<<endl;

}
void p5_9()
{
	int num_word=0;
	string letter;
	cout<<"Enter words (type done to stop) ";
	while (cin >> letter)
	{
		if (letter == "done")
		{
			break;
		}
		num_word++;
	}
	cout<<" your enter a total of "<<num_word<<" words."<<endl;
}

void p5_10()
{
	int num=0;
	cout<<" Enter the number of rows: "<<endl;
	cin>>num;
	for (int i = 0; i < num; i++)
	{
		for (int j = i; j < num; j++)
		{
			cout<<".";
		}
		for (int j = 0; j < i; j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}


int main()
{
	p5_10();

	system("pause");
	return 0;
}