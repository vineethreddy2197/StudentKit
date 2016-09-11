#include<iostream>
using namespace std;
class gpa
{
public:
    gpa();
    void calculateGPA();
    void calculateCGPA();
    void method();
};
gpa::gpa()
{
    int input;
    cout<<"                    -------------------------------------------"<<endl;
    cout<<"                                GPA & CGPA Calculator              "<<endl;
    cout<<"                    --------------------------------------------"<<endl;
    cout<<"            MENU:"<<endl;
    cout<<"                   1. Calculate GPA (Grade Point Average)"<<endl;
    cout<<"                   2. Calculate CGPA (Cumulative Grade Point Average)"<<endl;
    cout<<"                   3. Method that is applied here for calculating GPA & CGPA"<<endl;
    cout<<"                   4. Exit Application"<<endl;
    cout<<"                   ______________________________________________"<<endl;
}
void gpa::calculateGPA()
{
    int q;
    cout<<"                    -------------- GPA Calculating... --------------"<<endl;
    cout<<" How many subject's points do you want to calculate? : ";
    cin>>q;
    float credit [q];
    float point [q];
    cout<<endl;
    for(int i=0;i<q;i++)
    {
        cout<<"Enter the credit for the subject "<<i+1<<": ";
        cin>>credit[i];
        cout<<endl;
        cout<<"Enter the point of the subject "<<i+1<<": ";
        cin>>point[i];
        cout<<"                    -----------------------------------\n\n"<<endl;
    }
    float sum=0;
    float tot;
    for(int j=0;j<q;j++)
    {
        tot=credit[j]*point[j];
        sum=sum+tot;
    }
    float totCr=0;
    for(int k=0;k<q;k++)
    {
        totCr=totCr+credit[k];
    }
    cout<<"\n\n\nTotal Points: "<<sum<<" . Total Credits: "<<totCr<<" .Total GPA: "<<sum/totCr<<" ."<<endl;
}
void gpa::calculateCGPA()
{
    int l;
    cout<<"   -------------- CGPA Calculation -----------------\n\n"<<endl;
    cout<<"How many semester results do you want input? :";
    cin>>l;
    cout<<"\n\n"<<endl;
    float semrs[l];
    int i;
    for(i=0;i<l;i++)
    {
        cout<<" Enter Semester "<<i+1<<" Result(GPA): ";
        cin>>semrs[i];
        cout<<"\n"<<endl;
    }
    float semtot=0;
    for(int j=0;j<l;j++)
    {
        semtot=semtot+semrs[j];
    }
    cout<<"******** Your CGPA is "<<semtot/l<<" **********"<<endl;
}
void gpa::method()
{
    cout<<"----------- Method of Calculating GPA & CGPA ------------\n\n"<<endl;
    cout<<" GPA= Sum of (Credit*Point) / total of credits \n"<<endl;
    cout<<" CGPA=  Sum of GPA / number of semesters "<<endl;
    cout<<"       ------------------------------------------      "<<endl;

}
class BuMa
{
private:
    string name;
    float mon;
    float day;
    float att=0;
    float gtot;
    float p;
    float q;
    float r;
    float tot;
public:
    BuMa();
    void mainMenu();
    void getData();
    void calData();
    void compDays();
    void attData();
    void compData();
    void dispResult();
    void brConf();
};
BuMa::BuMa()
{
    cout<<"                          -----------------------------"<<endl;
    cout<<"                 ---->    WELCOME TO ATTENDANCE MANAGER     <----  "<<endl;
    cout<<"                          ----------------------------- "<<endl;
    cout<<"                          ----------------------------- "<<endl;
    cout<<"                       || Calculate Your Attendance Here ||"<<endl;
    cout<<"                          ______________________________"<<endl;
    cout<<"                              "<<endl;
}
void BuMa::mainMenu()
{
    cout<<"Enter your name --> ";
    cin>>name;
    cout<<endl;
}
void BuMa::getData()
{
    cout<<"Enter MONTH (Current Month) --> ";
    cin>>mon;
    cout<<endl;
    cout<<"Enter DATE (Current Date) --> ";
    cin>>day;
    cout<<endl;
}
void BuMa::calData()
{
    if(day>=11)
    {
        tot=(mon-7)*30+(day-11);
    }
    else
    {
        tot=(mon-7)*30+(11-day);
    }
}
void BuMa::compDays()
{
    gtot=tot-tot/7-(tot/30)*2;
}
void BuMa::brConf()
{
    if(mon==8 || mon==9 || (mon==10 && day<20) )
    {
        p=gtot*7-14;
    }
    else
    {
        p=gtot*7-30;
    }
}
void BuMa::attData()
{
    cout<<"Enter the number of days you were absent --> ";
    cin>>q;
    cout<<endl;
    cout<<"Enter the number of individual classes absent(Bunked Classes) --> ";
    cin>>r;
    cout<<endl;
}
void BuMa::compData()
{
    att=((q*7)+r)/p*100;
}
void BuMa::dispResult()
{
    cout<<"______________________________________________________"<<endl;
    cout<<endl;
    cout<<"Hey "<<" "<<name<<" your attendance percentage is..."<<(100-att)<<endl;
    cout<<endl;
}

int main()
{
    cout<<"            ****************WELCOME TO STUDENT KIT****************"<<endl;
    cout<<"            _______________________________________________________"<<endl;
    cout<<"            ________________________________________________________"<<endl;
    cout<<endl;
    cout<<"^^MAIN MENU^^";
    cout<<"  ========="<<endl;
    cout<<endl;
    while(1!=0)
    {
    int choice;
    cout<<" 1 : GPA CALCULATOR"<<endl;
    cout<<" 2 : ATTENDANCE MANAGER"<<endl;
    cout<<endl;
    cout<<"Enter Choice : ";
    cin>>choice;
    if(choice==1)
    {
        gpa a;
        cout<<"Enter choice : ";
        int inp;
        cin>>inp;
        if(inp==1)
        {
            a.calculateGPA();
        }
        else if(inp==2)
        {
            a.calculateCGPA();
        }
        else
        {
            a.method();
        }

    }
    else
    {
        BuMa o;
        o.mainMenu();
        o.getData();
        o.calData();
        o.compDays();
        o.brConf();
        o.attData();
        o.compData();
        o.dispResult();
    }
    cout<<"_________________________________________________________"<<endl;
    cout<<endl;
    cout<<"@@@     #TASK ENDED#     @     #TASK ENDED#     @     #TASK ENDED#     @@@"<<endl;
    cout<<"_________________________________________________________"<<endl;
    }
}
