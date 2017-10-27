#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<windows.h>
#include<iomanip>
#include<fstream>
using namespace std;
ofstream fout;
ifstream fin;
int main();
char y; 
char z;     
//class Create;              // TO register the user
class login;             // to login the user
class symptoms;          // for the symtoms
class Data;            // for the enter data
class DegreeD;        // to check the that patient has diabetes or not
class logout;        // logout the user
/*class Create
{
	public:
		string uName;
		string Pword;
		void create(string& ,string&);
};
void Create::create(string& username,string& pwd)
{
	char z;
	fout.open("harshh.txt",ios::app);
	cout<<"\nenter username:";
	cin>>username;
	cout<<"enter password:";
	cin>>pwd;
	cout<<"create account successfully!\n";
	fout<<username<<" "<<pwd;
	fout.close();
	cout<<"Enter z to LOGIN account";
}*/
class Login
{
	public:
		void login();
};
void Login::login()
{
	char a[]="harsh";
    char p[]="harsh123";
    char aa[30],pp[8];
    cout<<"\nenter username:";
    cin>>aa;
    if((strcmp(aa,a))==0)
    {
    	cout<<"id verified\n";
	}
    cout<<"enter password:\n";
    for(int i=0;p[i]!='\0';i++)
    {
       pp[i]=getch();
       cout<<"*";
       if(pp[i]==13)
       break;
   }
   if((strcmp(pp,p)==0))
   {
	cout<<"\nVerified \n";
	main();
   } 
   else
   exit(1);
   
}
// for the symptoms
class symptoms
{
	public:
 		void info();
};
void symptoms::info()
{
	int a;
	char ch;
	A :
	cout<<" choose option for Diabetes Symptoms.\n";
	cout<<"1 for Commmon Symptoms for DIABETES\n";
	cout<<"2 for Symptoms Gestational Diabetes\n";
	cout<<"3 for Symptoms for Diabetes type 1\n";
	cout<<"4 for Symptoms for Diabeties type 2\n";
	cout<<"5 for Symptoms for Juvenile Diabetes\n";
	cout<<"------------------------------------\n------------------------------------\n";
	cin>>a;
	switch(a)
	{
		case 1:
			{
			  cout<<"\n1-Urinating often.\n";
	                cout<<"2-Feeling very thirsty.\n";
	                     cout<<"3-Feeling very hungry - even though you are eating.\n";
	                        cout<<"4-Extreme fatigue.\n";
	                        cout<<"5-Blurry vision.\n";
	                     cout<<"6-Cuts/bruises that are slow to heal.\n";
	                cout<<"7-Weight loss - even though you are eating more (it can be type 1)\n";
	          cout<<"8-Tingling, pain, or numbness in the hands/feet (it can be type 2)";	
			}
			break;
		case 2:
				{
					cout<<"\nWomen with gestational diabetes often have no symptoms, which is why it's important for at-risk women to betested at the proper time during pregnancy.";
				}
				break;
		case 3:
				{
					                       cout<<"\n1-vomiting.\n ";
					                    cout<<"2-stomach pain. \n";
					               cout<<"3-rapid breathing\n";
					            cout<<"4-increased pulse rate\n";
					        cout<<"5-sleepiness. \n";
				}
				break;
		case 4:
			
				{
					cout<<"\n1-increased production of urine (the body is trying to get rid of the excess glucose in the urine) \n";
						cout<<"2-unusual thirst \n";
							cout<<"3-tiredness (because the glucose is going to waste and not being converted into energy) \n";
								cout<<"4-blurred vision.\n";
									cout<<"5-infections such as thrush or irritation of the genitals \n";
										cout<<"6-increased appetite \n";
					
				}
				break;
		case 5:
				{
					cout<<"1-Frequent urination (in children, a recurrence of bed-wetting after toilet training has been completed). \n";
						cout<<"2-Unusual thirst, especially for sweet, cold drinks. \n";
							cout<<"3-Extreme hunger. \n";
								cout<<"4-Sudden, sometimes dramatic, weight loss. \n";
									cout<<"5-Weakness. \n";
										cout<<"6-Extreme fatigue. \n";
											cout<<"7-Blurred vision or other changes in eyesight. \n";
												cout<<"8-Nausea and vomiting (acute symptoms).\n";
					
				}
				break;
		default:
				{
					exit(1);
				}
}
        cout<<"\nENTER y to continue...\n";
		cin>>y;
        if(y=='y')
        {
        goto A ;
		}
} 

// enter data of patient
class Data
{
	protected:
	char fName[20];
	char lName[20];
	int  age;
	int Height;
	int Weight;
	public:
		void PersonalD();
};
void Data::PersonalD()
{        A :
	      fout.open("harshh.txt");
	       cout<<"\nenter First name:";
	       cin>>fName;
	       //fout<<"First name:"<<fName<<endl;
	       cout<<"enter Last name:";
	       cin>>lName;
	       //fout<<"Last name:"<<lName<<endl;
	       cout<<"enter age:";
	       cin>>age;
	       //fout<<"age:"<<age<<endl;
           cout<<"enter Height:\n";
           cin>>Height;
           //fout<<"Height:"<<Height<<endl;
           cout<<"enter Weight:";
           cin>>Weight;
           //fout<<"Weight:"<<Weight<<endl;
           fout<<fName<<" "<<lName<<" "<<age<<" "<<Height<<" "<<Weight<<endl;
           cout<<"Details successfully submitted\n";
		   cout<<"For enter the Data of another patient PRESS y\n";
		   fout.close();
           cin>>y;
           if(y=='y')
           {
           	goto A ;
		   }
		   //else 
		   //break;
}
class appoinment
{
	public:
		int Day;
	    int Month;
	    int Year;
	    int count=0;
		void appoint();
};
void appoinment::appoint()
{
	S:
		fout.open("harshh.txt",ios::out|ios::app);
	 	count++;
	        cout<<"enter Date:Day,Month,Year\n";
	        cin>>Day>>Month>>Year;
	        cout<<Day<<"/"<<Month<<"/"<<Year;
	    if(Month==1||Month==3||Month==5||Month==7||Month==8||Month==10||Month==12)
	    {
	    if(count>3)
     	{
		    ++Day;
		    if(Day>31)
		    {
			      Day=Day%31;
			      ++Month;
			      if(Month>12)
			      {
				      Month=Month%12;
				      ++Year;
			         }
		    }
	       cout<<"\nyour appointment date :";
	       cout<<Day<<"/"<<Month<<"/"<<Year<<"\n";
	       fout<<"\nyour appointment date :";
	       fout<<Day<<"/"<<Month<<"/"<<Year<<"\n";
	    }
	   else
	   {
	       cout<<"\nyour appointment date :";
	       cout<<Day<<"/"<<Month<<"/"<<Year<<"\n";
	       fout<<"\nyour appointment date :";
	       fout<<Day<<"/"<<Month<<"/"<<Year<<"\n";
	   }
	   }
	   else if(Month==4||Month==3||Month==6||Month==9||Month==11)
	   {
	   	if(count>3)
     	{
		    ++Day;
		    if(Day>30)
		    {
			      Day=Day%31;
			      ++Month;
			      if(Month>12)
			      {
				      Month=Month%12;
				      ++Year;
			         }
		    }
	       cout<<"\nyour appointment date :";
	       cout<<Day<<"/"<<Month<<"/"<<Year<<"\n";
	       fout<<"\nyour appointment date :";
	       fout<<Day<<"/"<<Month<<"/"<<Year<<"\n";
	    }
	   else
	   {
	       cout<<"\nyour appointment date :";
	       cout<<Day<<"/"<<Month<<"/"<<Year<<"\n";
	       fout<<"\nyour appointment date :";
	       fout<<Day<<"/"<<Month<<"/"<<Year<<"\n";
	   }
	  }
	  else if(Month==2)
	  {
	  	if(Year%4==0)
	  	{
	  	if(count>3)
     	{
		    ++Day;
		    if(Day>30)
		    {
			      Day=Day%31;
			      ++Month;
			      if(Month>12)
			      {
				      Month=Month%12;
				      ++Year;
			         }
		    }
	       cout<<"\nyour appointment date :";
	       cout<<Day<<"/"<<Month<<"/"<<Year<<"\n";
	       fout<<"\nyour appointment date :";
	       fout<<Day<<"/"<<Month<<"/"<<Year<<"\n";
	    }
	   else
	   {
	       cout<<"\nyour appointment date :";
	       cout<<Day<<"/"<<Month<<"/"<<Year<<"\n";
	       fout<<"\nyour appointment date :";
	       fout<<Day<<"/"<<Month<<"/"<<Year<<"\n";
	   }	
		  }
		else
		{
			if(count>3)
     	{
		    ++Day;
		    if(Day>30)
		    {
			      Day=Day%31;
			      ++Month;
			      if(Month>12)
			      {
				      Month=Month%12;
				      ++Year;
			         }
		    }
	       cout<<"\nyour appointment date :";
	       cout<<Day<<"/"<<Month<<"/"<<Year<<"\n";
	       fout<<"\nyour appointment date :";
	       fout<<Day<<"/"<<Month<<"/"<<Year<<"\n";
	    }
	   else
	   {
	       cout<<"\nyour appointment date :";
	       cout<<Day<<"/"<<Month<<"/"<<Year<<"\n";
	       fout<<"\nyour appointment date :";
	       fout<<Day<<"/"<<Month<<"/"<<Year<<"\n";
	   }
	   }
	  }
	  fout.close();
   cout<<"enter x to take another appoinment";
   char x;
   cin>>x;
   if(x=='x')
   {
   	goto S;
   }
}	
// check sugar level
class DegreeD
{
	private:
	float sugarLevel;
	public:
	void SugarLevel();
};
void DegreeD ::SugarLevel()
{
	A:
	fout.open("harshh.txt",ios::app|ios::out);
	cout<<"\nchoose option for testing time:\n";
 	cout<<"1 for before Meal.\n";
 	cout<<"2 for 2 hours after Meal.\n";
	int a;
	cin>>a;
	switch(a)
 	{
 		case 1: 
 		{
 		        cout<<"enter Blood Sugar Level:";
 		        cin>>sugarLevel;
 		        fout<<"sugarLevel:"<<sugarLevel;
 		        if(sugarLevel>6)
 		           {
 		   	           cout<<"pataient has Diabeties";
			       }  
 		        else if(sugarLevel>=4 &&sugarLevel<=6)
 		           {
 		   	         cout<<"Pataient is in narmal condition.";
			       }
			    else
			      {
			        cout<<"Check another check-up for another Disease";
		          }	 
 	   }
 	   break;
 	   case 2:
 	   	{
 	   	        cout<<"enter Blood Sugar Level:";
 		        cin>>sugarLevel;
 		        fout<<"sugarLevel:"<<sugarLevel;
 		        if(sugarLevel>7&& sugarLevel<9)
 		            {
 		   	           if(sugarLevel<8.5)
 		   	           {
 		   	 	            cout<<"Pataient has type 2 Diabeties";
 		   	 	            fout<<"Pataient has type 2 Diabeties";

				       }
			          else
					  { 
                            cout<<"Pataient has type 1 Diabeties";
                            fout<<"Pataient has type 1 Diabeties";
                        }
		            }
 		       else if(sugarLevel>=4 &&sugarLevel<=7)
 		           {
 		   	            cout<<"Pataient is in narmal condition.";
 		   	            fout<<"Pataient is in narmal condition.";
			       }
			else
			{
			cout<<"Check another check-up for another Disease";
			fout<<"Check another check-up for another Disease";
		    }
				break;
	   }
	  default:
	  	exit(1);
    }
    fout.close();
    cout<<"\nFor enter the Data of another patient PRESS y\n";
        cin>>y;
        if(y=='y')
           {
           	goto A ;
		   }
	            
}
//  patient report
class Report:public Data
{
	public:
		void report();	
 }; 
void Report::report()
{
	A:
	 fin.open("harshh.txt",ios::in);
	 fin>>fName>>lName>>age>>Height>>Weight;
	 cout<<"FIRST Name:"<<fName<<endl;
	 cout<<"Last Name:"<<lName<<endl;
	 cout<<"age:"<<age<<endl;
	 cout<<"Height:"<<Height<<endl;
	 cout<<"weight"<<Weight;
	 fin.close(); 
	 cout<<"For enter the Data of another patient PRESS y\n";
     cin>>y;
     if(y=='y')
     {
        goto A ;
	 }         
};
/*class Logout
{
	public:
		~Logout()
		{
		cout<<"THANKS FOR USING THIS APP!!!";	
		}
};
*/
// main  start
int main()
{
	fout.open("harshh.txt");
	system("color 2B");
	Sleep(1000);         // for the delay 
	system("pause");
  //	system("cls");
	system("color 1C");
	cout<<__DATE__;
	cout<<"\n\n\n";
	cout<<" ******************************\n";
	cout<<"\t\t\t\t"<<char(20001)<<char(20001)<<char(20001)<<char(20001)<<char(20001)<<char(20001)<<char(20001)<<char(20001)<<char(20001)<<char(20001);
	cout<<"WELCOME TO HKVHAISHU DIABETES";
	cout<<char(20001)<<char(20001)<<char(20001)<<char(20001)<<char(20001)<<char(20001)<<char(20001)<<char(20001)<<char(20001)<<char(20001)<<endl;
	cout<<"\t\t\t\t\t\t\t\t\t\t*******************************\n";
	cout<<"\n\n";
	cout<<"****************************************************************************************************************\n";
    cout<<char(20001)<<char(20001)<<char(20001)<<char(20001)<<char(20001)<<char(20001)<<char(20001)<<char(20001)<<"\t\t\t\t\t\t\t\t"<<char(20001)<<char(20001)<<char(20001)<<char(20001)<<char(20001)<<char(20001)<<char(20001);
    //	cout<<char(20001)<<char(20001)<<char(20001)<<char(20001)<<char(20001)<<char(20001)<<char(20001)<<char(20001)<<char(20001)<<char(20001)<<"\t\t\t\t\t\t\t\t\t1--Register"<<endl<<endl;
	cout<<char(20001)<<char(20001)<<char(20001)<<char(20001)<<char(20001)<<char(20001)<<char(20001)<<char(20001)<<char(20001)<<char(20001)<<"\t\t\t\t\t\t\t\t\t1-- Login"<<endl<<endl;
	cout<<char(20001)<<char(20001)<<char(20001)<<char(20001)<<char(20001)<<char(20001)<<char(20001)<<char(20001)<<"\t\t\t\t2-- SYMPTOMS "<<endl<<endl;
	cout<<char(20001)<<char(20001)<<char(20001)<<char(20001)<<char(20001)<<char(20001)<<char(20001)<<char(20001)<<"\t\t\t\t3-- Appoinment"<<endl<<endl;
	cout<<char(20001)<<char(20001)<<char(20001)<<char(20001)<<char(20001)<<char(20001)<<char(20001)<<char(20001)<<"\t\t\t\t4-- DATA "<<endl<<endl;
	cout<<char(20001)<<char(20001)<<char(20001)<<char(20001)<<char(20001)<<char(20001)<<char(20001)<<char(20001)<<"\t\t\t\t5-- Degree Of Diabetes"<<endl<<endl;
	cout<<char(20001)<<char(20001)<<char(20001)<<char(20001)<<char(20001)<<char(20001)<<char(20001)<<char(20001)<<"\t\t\t\t6-- Report"<<endl<<endl;
	cout<<char(20001)<<char(20001)<<char(20001)<<char(20001)<<char(20001)<<char(20001)<<char(20001)<<char(20001)<<"\t\t\t\t7-- MEDICINE"<<endl<<endl;
	cout<<char(20001)<<char(20001)<<char(20001)<<char(20001)<<char(20001)<<char(20001)<<char(20001)<<char(20001)<<"\t\t\t\t8--BILL OF MEDICINES"<<endl<<endl;
	cout<<"****************************************************************************************************************\n";
    cout<<"PLEASE  FIRSTLY REGISTER\n";
    cout<<"CHOOOSE any option";
	string un,pwd;
	//Create c1;                //object for register the user       
	Login l1;                 //object for login
	symptoms s1;              // object for symptoms
	DegreeD d1;               // object for to check sugar level
	appoinment p1;            //object apppoinment
	Data D1;                  //object for enter the details of patient
	Report r1;               // object for doctor report
	//Logout L1;
	int a;
	cin>>a;
	switch(a)
	{    a:
		case 1:
			{
			    char z;
				//system("cls");
				Sleep(1000);
				system("color 4F");
				system("pause");
				cout<<__DATE__;
	            l1.login();
	            cin>>z;
			    if (z=='z')
			    { 
			      main();
			    }
			}
			break;
		case 2:
			{
				Sleep(500);
				system("pause");
				cout<<__DATE__;
				s1.info();
				system("color 3E");
				cout<<"enter z to go main menu...";
				cin>>z;
			    if (z=='z')
			    { 
			     main();
			   }
			break;
		}
		case 3:
			{
				//system("cls");
				Sleep(1000);
				system("color 4F");
				system("pause");
				cout<<__DATE__;
				p1.appoint();
				cout<<"enter z to continue...";
				  cin>>z;
			if (z=='z')
			{ 
			main();
			}
			}
			break;
		case 4:
			{
				//system("cls");
				Sleep(500);
				system("color 4F");
				system("pause");
				cout<<__DATE__;
				D1.PersonalD();
				cout<<"enter z to continue...";
				cin>>z;
			    if (z=='z')
			    { 
			     main();
			    }
			}
			break;
		case 5:
			{
				//system("cls");
				Sleep(500);
				system("color 4D");
				system("pause");
				system("cls");
				cout<<"\n\n";
				cout<<"\t\t\t\t"<<__DATE__;
				d1.SugarLevel();
				cout<<"enter z to continue...";
				cin>>z;
			    if (z=='z')
			    { 
			       main();
			    }	
			   }
			break;
		case 6:
			{
				Sleep(500);
				//system("cls");
				system("color 6B");
				system("pause");
				cout<<__DATE__;
				r1.report();
				cout<<"enter z to continue...";
				  cin>>z;
			if (z=='z')
			{ 
			   main();
			}
			}
			break;
		case 7:
			{
				Sleep(1000);
				//system("cls");
				system("color 6E");
				system("pause");
				cout<<__DATE__;
				cout<<"enter z to continue...";
				cin>>z;
			    if (z=='z')
			    { 
			       main();
			    }
			}
			break;
		case 8:
			{
				Sleep(500);
				//system("cls");
				system("color 6F");
				system("pause");
				cout<<__DATE__;
				cout<<"enter z to continue...";
				cin>>z;
			    if (z=='z')
			    { 
			      main();
			    }
			}
			break;
			case 9:
			{
				Sleep(500);
				//system("cls");
				system("color 6F");
				system("pause");
				cout<<__DATE__;
				cout<<"enter z to continue...";
				cin>>z;
			    if (z=='z')
			    { 
			      main();
			    }
			}
			break;
		
		default:
			{
				
			}
	}
	return 0;
}
