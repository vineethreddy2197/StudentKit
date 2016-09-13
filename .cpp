#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
string name;
long roll;
class noteMaker
{
public:
    string note;
    void enterNote();
    void noteFile();
};
void noteMaker::enterNote()
{
    cout<<"Enter your note Below : "<<endl;
    cout<<endl;
    cin>>note;
}
void noteMaker::noteFile()
{
    ofstream nfile("note.txt");
    nfile<<"NOTE:-  "<<note<<" -END"<<endl;
}

class gpa
{
    int l=0;
    float sum=0;
    float semtot=0;
    float totCr=0;
public:
    gpa();
    void calculateGPA();
    void calculateCGPA();
    void gpaFile();
    void method();
    void cgpaFile();
};
gpa::gpa()
{
    int input;
    cout<<"                    -------------------------------------------"<<endl;
    cout<<"                                GPA & CGPA Calculator              "<<endl;
    cout<<"                    -------------------------------------------"<<endl;
    cout<<endl;
    cout<<"Enter your name : ";
    cin>>name;
    cout<<endl;
    cout<<endl;
    cout<<"Enter your Roll number : ";
    cin>>roll;
    cout<<endl;
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
    float tot;
    for(int j=0;j<q;j++)
    {
        tot=credit[j]*point[j];
        sum=sum+tot;
    }

    for(int k=0;k<q;k++)
    {
        totCr=totCr+credit[k];
    }
    cout<<"\n\n\nTotal Points: "<<sum<<" . Total Credits: "<<totCr<<" .Total GPA: "<<sum/totCr<<" ."<<endl;
}
void gpa::calculateCGPA()
{
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
void gpa::gpaFile()
{
    ofstream ogpafile("gpa.txt");
    ogpafile<<"NAME : "<<name<<"Roll No: "<<roll<<"GPA : "<<(sum/totCr)<<endl;
}
void gpa::cgpaFile()
{
    ofstream ocgpafile("cgpa.txt");
    ocgpafile<<"NAME : "<<name<<"Roll No : "<<roll<<"CGPA : "<<(semtot/l)<<endl;
}

class BuMa
{
private:
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
    void bumaFile();
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
    cout<<"Enter your name : ";
    cin>>name;
    cout<<endl;
    cout<<endl;
    cout<<"Enter your Roll number : ";
    cin>>roll;
    cout<<endl;
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
void BuMa::bumaFile()
{
    ofstream bfile("buma.txt");
    bfile<<"NAME :"<<name<<" Roll No : "<<roll<<" Attendance : "<<(100-att)<<endl;

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
    cout<<"Application List: "<<endl;
    cout<<"__________________________________"<<endl;
    cout<<" 1 : GPA CALCULATOR"<<endl;
    cout<<" 2 : ATTENDANCE MANAGER"<<endl;
    cout<<" 3 : NOTE MAKER"<<endl;
    cout<<" 4 : EXIT "<<endl;
    cout<<endl;
    cout<<"Enter Choice : ";
    cin>>choice;
    switch(choice)
    {
    case 1:
    {
        gpa a;
        cout<<"Enter choice : ";
        int inp;
        cin>>inp;
        if(inp==1)
        {
            a.calculateGPA();
            a.gpaFile();
        }
        else if(inp==2)
        {
            a.calculateCGPA();
            a.cgpaFile();
        }
        break;
    }
    case 2:
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
        o.bumaFile();
        break;
    }
    case 3:
        {
            noteMaker b;
            cout<<"                      --------WELCOME TO NOTE-MAKER--------"<<endl;
            b.enterNote();
            b.noteFile();
            cout<<"_________________________________________________________"<<endl;
            cout<<endl;
            break;
        }
    case 4:
        {
            return 0;
            break;
        }
    }
        cout<<"_________________________________________________________"<<endl;
        cout<<endl;
        cout<<"@@@  #TASK ENDED#     @ DEVELOPED BY : VINEETH & SRIMAN @     #THANK YOU   @@@ "<<endl;
        cout<<"                           FOR MORE VISIT : github/vineethreddy2197"<<endl;
        cout<<"_________________________________________________________"<<endl;
        cout<<endl;
        system("cls");
}
}

