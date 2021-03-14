#include<iostream>
#include<string>
#include<array>
using namespace std;


void p4_1()
{
	char first_name[128];
	char last_name[128];
	char letter;
	int age;

	cout << "What is your first name? ";
	cin.getline(first_name, 128);

	cout << "What is your last name? ";
	cin.getline(last_name, 128);

	cout << "What letter grade do you deserve? ";
	cin >> letter;

	cout << "What is your age? ";
	cin >> age;

	cout << "Name: " << last_name << ", " << first_name << endl;
	cout << "Grade: " << char(letter + 1) << endl;
	cout << "Age: " << age << endl;
}
void p4_2()
{
	string first_Name, last_Name;
	char grade;
	int age;
	cout << "What is your first name ?  ";
	cin >> first_Name;
	cout << "What is your last name ?  ";
	cin >> last_Name;
	cout << "What letter grade do you deserve ?  ";
	cin >> grade;
	cout << "What is your age ?  ";
	cin >> age;
	cout << "Name: " << last_Name << " , " << first_Name << endl;
	cout << "Grade: " << char(grade + 1) << endl;
	cout << "Age: " << age << endl;
}

void p4_3()
{
	char first_Name[128];
	char last_Name[128];
	cout<<"Enter your first name :";
	cin.getline(first_Name,128);

	cout << "Enter your first name :";
	cin.getline(last_Name, 128);

	cout<<"Here is your information is a single string : "<<last_Name<<" , "<<first_Name<<endl;
}

void p4_4()
{
	string first_Name;
	string last_Name;
	cout<<"Enter your first name: ";
	cin>>first_Name;
	cout<<"Enter your last name: ";
	cin>>last_Name;
	cout << "Here is your information is a single string : " << last_Name << " , " << first_Name << endl;

}

void p4_5()
{
	typedef struct CandayBar
	{
		string name;
		double weight;
		int calori;
	}bu_CandyBar;

	bu_CandyBar candybar{"Mocha", 2.3, 350};
	cout<<"the information of CandyBar name"<<candybar.name<<"the information of CandyBa weight"<<candybar.weight<<"the information of CandyBa calori "<<candybar.calori<<endl;
}

void p4_6()
{
	typedef struct CandayBar
	{
		string name;
		double weight;
		int calori;
	}bu_candayBar;

	bu_candayBar candybar[3]
	{
		{"zhangsan",3.3,33},
		{"lisi",4.4,44},
		{"wangwu",5.5,55}
	};

	for (int i = 0; i < 3; i++)
	{
		cout<<"the information of candybar naem"<<candybar[i].name<<"the information of candybar weight "<<candybar[i].weight<<"the information of candybar calori "<<candybar[i].calori<<endl;
	}
}


void p4_7()
{
	typedef struct pisa_data 
	{
		string name;
		double daimeter;
		double weight;
	}bu_pisa_data;

	bu_pisa_data pisa;
	cout<<"Enter the name of your pisa company: ";
	cin>>pisa.name;
	cout<<"Enter the daimeter of pisa :";
	cin>>pisa.daimeter;
	cout<<"Enter the weight of pisa :";
	cin>>pisa.weight;
	cout<<"the name of the company is: "<<pisa.name<<" the daimeter of the pisa is: "<<pisa.daimeter<<" the weight of the pisa is : "<<pisa.weight<<endl;

}

void p4_8()
{
	typedef struct pisa_data
	{
		string name;
		double daimeter;
		double weight;
	}bu_pisa_data;
	bu_pisa_data * pisa_primer=new	bu_pisa_data;

	cout << "Enter the daimeter of pisa :";
	cin >> pisa_primer->daimeter;
	cout << "Enter the weight of pisa :";
	cin >> pisa_primer->weight;
	cout << "Enter the name of your pisa company: ";
	cin >> pisa_primer->name;

}


void p4_9()
{
	typedef struct candyBar
	{
		string name;
		double weight;
		double calori;
	}candybar;

	candybar* candy_primer = new candybar[3]{
		{"zahngsan",3.3,33},
		{"lisi",4.4,44},
		{"wamngwu",5.5,55}
	};
	for (int i = 0; i < 3; i++)
	{
		cout << " the information of candybar name: " << candy_primer[i].name<<" the information of candybar  weight: "<<candy_primer[i].weight<<" the information of candybar calori: "<<candy_primer[i].calori<<endl;

	}

}

void p4_10()
{
	array<double, 3> time;
	double avg_time = 0.0;

	printf("Enter three results time of runing 40 meters: ");
	cin >> time[0];
	cin >> time[1];
	cin >> time[2];

	avg_time = (time[0] + time[1] + time[2]) / 3;
	cout << "Result: " << time[0] << ", " << time[1] << ", " << time[2] << endl;
	cout << "Average result: " << avg_time;

}


int main()
{
	p4_10();

	system("pause");
	return 0;
}