#include<iostream>
using namespace std;

void p2_1(void)
{
	cout<<"scofire from China  zhanjiang of GuangDong Province"<<endl;
}
  
void p2_2(void)
{
	int ilong =0;
	int iyard=0;
	cout<<"请输入long距离"<<endl;
	cin>>ilong;
	iyard=ilong*220;
	cout<<iyard<<endl;
}


void mice(void)
{
	cout << "Three blind mice" << endl;
}
void run(void)
{
cout<<"See how they run"<<endl;
}
void p2_3(void)
{
	mice();
	mice();
	run();
	run();
}

void p2_4(void)
{
	int age=0;
	int months=0;
	cout<<"Enter your age"<<" ";
	cin>>age;
	months=age*12;
	cout<<months<<endl;
}

void p2_5(void)
{
int celsius=0;
int Fahrenheit=0;
cout<<"Please enter a Celsius value :"<<" ";
cin>>celsius;
Fahrenheit= 1.8 * celsius + 32.0;
cout<<celsius<<"degrees Celsius is "<<Fahrenheit <<" degrees Fahrenheit";


}

void p2_6(void)
{
double lightyear=0;
double astro=0;
cout<<"Enter the number of light years : ";
cin>>lightyear;
astro=lightyear*63240;
cout<<lightyear<<"light years = "<<astro<<"astronomical units."<<endl;
}



void p2_7(void)
{
	int hours=0;
	int minutes=0;
	cout<<"请输入小时数和分钟数"<<endl;
	cin>>hours;
	cin>>minutes;
	cout<<"Time: "<<hours<<":"<<minutes<<endl;
}
int main()
{

	p2_7();
	system("pause");
	return 0;
}