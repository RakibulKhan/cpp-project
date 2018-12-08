
#include<bits/stdc++.h>
#include<string>
#include<fstream>
using namespace std;
class Mess    {
public:
    string name;
    Mess() {};
    Mess(string a)  {
        name = a;  }
    friend view_Print();     };
class Date     {
public:
    string date;
    Date() {};
    Date(string s)     {
        date=s;  };
    friend view_Print();      };
class Person   {
public:
    string name;
    Date date;
    Person() {};
    Person(string n,Date *date)  {
        name=n;
        this->date=*date;
        };
    friend view_Print();    };
class Owner : public Person
{
public:
    Mess mess;
    string date;
    Owner() {};
    Owner(string name, string date)  {
        this->name = name;
        this->date = date;
         }
    friend view_Print();    };
class Member : public Person    {
public:
    Mess mess;
    string date;
    double deposit;
    Member() {};
    Member(string name, string date,double deposit)  {
        this->name = name;
        this->date = date;
        this->deposit = deposit;  }
    friend view_Print();    };
double Meal_Rate(double totalmeal,double Cost)   {
    double meal_rate=Cost/totalmeal;
    return meal_rate;  };
double Balance(int tmeal,double mealrate,double deposit)  {
    double myMeal;
    myMeal=mealrate*tmeal;
    double blnc;
    blnc=deposit-myMeal;
    return blnc; }
view_Print(Mess m,Owner o,Member *x[],int y[],int z[],int p[],int q[],double s,double k[], double w,int e,int f,int g,int h,Date *d1[])  {
    cout << "\nMess Name         : " << m.name << endl;
    cout << "Mess Owner's Name : " << o.name << endl;
    cout << "Date of Birth     : " << o.date << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << endl << endl;
    for(int i=0; i<2; i++) {
        cout << "Member "<< " " << i+1 << " : " << endl;
        cout << "NAME          : " << x[i]->name << endl;
        cout << "DATE OF BIRTH : " << x[i]->date<< endl;
        cout << "---------------------------------------" << endl;
        cout << "Deposit            : " << x[i]->deposit<< endl;
        cout << "Total Morning Meal : " << y[i] <<endl;
        cout << "Total Noon Meal    : " << z[i] <<endl;
        cout << "Total Night Meal   : " << p[i] <<endl;
        cout << "Total Meal         : " << q[i] << endl;
        double a = Balance(q[i],s,x[i]->deposit);
        cout << "Balance            : " << a << endl;
        cout << endl << endl;  }
    cout << "________MEAL INFORMATION________" << endl << endl << endl;
    double TotalDeposit = x[0]->deposit + x[1]->deposit;
    cout << "Total Deposit         : " << TotalDeposit << endl;
    cout <<  endl << endl << "Daily Shopping Costs--> " << endl ;
    for(int i = 0; i<4; i++) {
        cout << "Day " << i+1 << "-"<<d1[i]->date << "      : " << k[i] << endl; }
    cout << endl << endl << "Total Cost            : " << w << endl;
    cout << "Meal Rate             : " << s << endl;
    cout << "Total Morning Meal    : " << e << endl;
    cout << "Total Noon Meal       : " << f << endl;
    cout << "Total Night Meal      : " << g << endl;
    cout << "Total Meal            : " << h << endl;
    double c = Balance(h,s,TotalDeposit);
    cout << "Total Balance         : " << c << endl; }
int main()  {
    system("color f0");
    Mess mess("The Dark Castle");
    Owner owner("Plabon","09/1/1995");
    Member *member[2]=     {
        new Member("Roni","01/2/1998",2500),
        new Member("Robin","2/12/1999",2100), };
    Date *date[4]=   {
        new Date("25/10/2018"),
        new Date("26/10/2018"),
        new Date("27/10/2018"),
        new Date("28/10/2019"),   };
    int day[4][2][3] = {{{0,1,1},{1,1,0}},{{1,1,1},{0,1,1}},{{1,1,1},{0,1,0}},{{1,0,1},{1,1,0}}};
    int TotalMeal = 0, TotalMorningMeal = 0, TotalNoonMeal = 0, TotalNightMeal = 0;
    for(int p = 0; p<4; p++) {///ToTal Meal;
        for(int q = 0; q<2; q++)
        {
            for(int r = 0; r<3; r++) {
                TotalMeal += day[p][q][r];   }  }
    for(int p = 0; p<4; p++){ ///ToTal Morning Meal;
        for(int q = 0; q<2; q++)  {
            for(int r = 0; r<1; r++)  {
                TotalMorningMeal += day[p][q][r];   } } }
    for(int p = 0; p<4; p++){ ///ToTal Noon Meal
        for(int q = 0; q<2; q++)   {
            for(int r = 1; r<2; r++)  {
                TotalNoonMeal += day[p][q][r];  } }
    for(int p = 0; p<4; p++) ///ToTal Night Meal    {
        for(int q = 0; q<2; q++)  {
            for(int r = 2; r<3; r++)  {
                TotalNightMeal += day[p][q][r];   }    }
    int Morning1 = 0,Morning2 = 0, Noon1 = 0,Noon2 = 0,Night1 = 0, Night2 = 0;
    int  TotalMember1Meal = 0, TotalMember2Meal= 0;
    for(int p = 0; p<4; p++) {///ToTal MEMBER 1 Morning Meal
        for(int q = 0; q<1; q++)     {
            for(int r = 0; r<1; r++)       {
                Morning1 += day[p][q][r];       }        }
    for(int p = 0; p<4; p++) ///ToTal MEMBER 2 Morning Meal    {
        for(int q = 1; q<2; q++)       {
            for(int r = 0; r<1; r++)           {
                Morning2 += day[p][q][r];           }        }
    int Morning[2] = {Morning1,Morning2};
    for(int p = 0; p<4; p++) ///ToTal MEMBER 1 Noon Meal    {
        for(int q = 0; q<1; q++)        {
            for(int r = 1; r<2; r++)           {
                Noon1 += day[p][q][r];         }        }
    for(int p = 0; p<4; p++) ///ToTal MEMBER 2 Noon Meal    {
        for(int q = 1; q<2; q++)        {
            for(int r = 1; r<2; r++)         {
                Noon2 += day[p][q][r];          }       }
    int Noon[2] = {Noon1,Noon2};
    for(int p = 0; p<4; p++) ///ToTal MEMBER 1 Night Meal    {
        for(int q = 0; q<1; q++)        {
            for(int r = 2; r<3; r++)
            {
                Night1 += day[p][q][r];         }        }
    for(int p = 0; p<4; p++) ///ToTal MEMBER 2 Night Meal    {
        for(int q = 1; q<2; q++)        {
            for(int r = 2; r<3; r++)         {
                Night2 += day[p][q][r];          }        }
    int Night[2] = {Night1,Night2};
    for(int p = 0; p<4; p++) ///ToTal MEMBER 1 Meal    {
        for(int q = 0; q<1; q++)        {
            for(int r = 0; r<3; r++)            {
                TotalMember1Meal += day[p][q][r];            }        }
    for(int p = 0; p<4; p++) ///ToTal MEMBER 2 Meal    {
        for(int q = 1; q<2; q++)        {
            for(int r = 0; r<3; r++)          {
       TotalMember2Meal += day[p][q][r];         }        }
    int TotalMemberMeal[2] = {TotalMember1Meal,TotalMember2Meal};
    double Cost[4] = {210.50,105.75,225.50,90.75};      ///Total Shopping
    double TotalCost = 0.0;
    for(int i = 0; i<4; i++)
        TotalCost += Cost[i];
  double mealrate=Meal_Rate(TotalMeal,TotalCost); view_Print(mess,owner,member,Morning,Noon,Night,TotalMemberMeal,mealrate,Cost,TotalCost,TotalMorningMeal,TotalNoonMeal,TotalNightMeal,TotalMeal,date);
    FILE *fp;
    char *filename;
    filename="mealinfo.csv";
    fp=fopen(filename,"w+");
    fprintf(fp,"Member,Day No.,Date,Morning,Noon,Night,Total_Meal");
    fprintf(fp,"\n\ntipu");
    int sum=0;
    for(int i=0; i<4; i++)         {
        sum=0;
        fprintf(fp,",Day %d.,%d/12/18,",i+1,i+1);
        for(int k=0; k<1; k++)     {
            for(int j=0; j<3; j++)      {
                fprintf(fp,"%d,",day[i][0][j]);
                sum+=day[i][0][j];           }
            fprintf(fp,"%d\n",sum);        }    }
    fprintf(fp,",TOTAL,,%d,%d,%d,%d\n",Morning1,Noon1,Night1,TotalMember1Meal);
    fprintf(fp,"\n,Meal Rate,%lf,,Deposit,%lf,,Cost,%lf,,Balance,%lf\n\n\n",mealrate,2000.00,(mealrate*TotalMember1Meal),2000.00-(mealrate*TotalMember1Meal));
    fprintf(fp,"Member,Day No.,Date,Morning,Noon,Night,Total_Meal\n");
    fprintf(fp,"\nRobin");
    int sum2=0;
    for(int i=0; i<4; i++)            {
        sum2=0;
        fprintf(fp,",Day %d.,%d/12/17,",i+1,i+1);
        for(int k=1; k<2; k++)      {
            for(int j=0; j<3; j++)         {
                fprintf(fp,"%d,",day[i][1][j]);
                sum2+=day[i][1][j];        }
            fprintf(fp,"%d\n",sum2);      }    }
    fprintf(fp,",TOTAL,,%d,%d,%d,%d\n",Morning1,Noon1,Night1,TotalMember1Meal);
    fprintf(fp,"\n,Meal Rate,%lf,,Deposit,%lf,,Cost,%lf,,Balance,%lf\n",mealrate,1500.00,(mealrate*TotalMember2Meal),1500.00-(mealrate*TotalMember2Meal));
    return 0;  }
    }
    }
    }
