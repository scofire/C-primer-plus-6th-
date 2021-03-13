#include<iostream>
#include<string>
using namespace std;



void p3_1()
{
	const int Foot_Inch=12;
	int inch_input=0;
	int inch_out=0;
	int feet=0;

	cout<<"please input your height your height in inch:____\b\b\b"<<endl;
	cin>>inch_input;
	feet=inch_input/Foot_Inch;
	inch_out=inch_input%Foot_Inch;

	cout<<"your height in inch is :"<<inch_input<<"; your height in feet and inch are:"<<feet<<" feet"<<inch_out<<" inch!"<<endl;

}

void p3_2()
{
	const int foot_inch=12;
	const double inch_meter=0.254;
	const double kilo_pound=2.2;
	double height_foot=0;
	double height_inch=0;
	double height_meter=0;
	double weight_pound=0;
	double weight_kilo=0;
	double BIM=0;
	cout<<"Enter your height in foot and inch: "<<endl;
	cin>>height_foot;
	cin>>height_inch;

	cout<<"enter your weight in pound: "<<endl;
	cin>>weight_pound;

	height_meter=(height_foot*foot_inch+height_inch)*inch_meter;
	weight_kilo=weight_pound/kilo_pound;

	BIM=weight_kilo/(height_meter*height_meter);

	cout<<"your BIM is: "<<endl;

}

void p3_3()
{
	double du,fen,miao,all;
	cout<<"please input du fen miao by order :"<<endl;
	cin>>du;
	cin>>fen;
	cin>>miao;
	all=du+fen/60+miao/3600;
	cout<<du<<" degrees, "<<fen<<" minitues, "<<miao<<" seconds, "<<all<<" degrees"<<endl;
}

void p3_4()
{
	long seconds;
	int days,minites,hours;
	cout<<"Enter the number of seconds"<<endl;
	cin>>seconds;
	minites=seconds/60;
	hours=minites/60;
	days=hours/24;
	cout<<seconds<<" seconds= "<<days<<" days, "<<hours<<"  hours, "<<minites<<"  minites, " << seconds % 60 <<" seconds"<<endl;

}

void p3_5()
{
	long word_population=0;
	long American_population=0;
	double precent;
	cout<<"Enter the word's population: ";
	cin>>word_population;
	cout<<"Enter the American's population: ";
	cin>>American_population;
	precent=double(American_population)/(word_population) ;
	cout<<"The population of the us is "<<precent*100<<"% of the word population"<<endl;
}

void p3_6()
{
	double miles,calon,calon2miles;
	cout<<"enter miles and calon"<<endl;
	cin>>miles;
	cin>>calon;
	calon2miles=miles/calon;
	cout<<"one calon gas run "<<calon2miles<<endl;
}
void p3_7()
{
	double fuel_eu=0;
	double fuel_us=0;
	cout << "Enter the fuel comsuption in Europ standard: ";
	cin>>fuel_eu;
	fuel_us=fuel_eu/19*12.41;
	cout<<"the fuel comsuption in us standard is "<<fuel_us<<"100KM"<<endl;
}

int main()
{
	p3_7();

system("pause");
return 0;
}