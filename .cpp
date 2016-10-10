#include<iostream>
#include<fstream>
#include<cstdlib>
#include<windows.h>
#include<string>
using namespace std;
string name;
int *arr;
string note;
string roll;
class willPass
{
public:
    int pulka=0;
    int thop=0;
    float crazy=0;
    float bc;
    int subs;
    willPass();
    void canPass();
    void endSodhi();
};
willPass::willPass()
{
    cout<<endl;
    cout<<endl;
    cout<<"Enter the number of subjects :   ";
    cin>>subs;
    cout<<endl;
    cout<<endl;
    arr=new int[subs];
    for(int i=0;i<subs;i++)
    {
        cout<<"Enter Marks of Subject "<<(i+1)<<"  : ";
        cin>>arr[i];
        if(arr[i]<21)
        {
        crazy=crazy+arr[i];
        thop=thop+20;
        }
    }
    bc=crazy/thop;
}
void willPass::canPass()
{
    for(int i=0;i<subs;i++)
    {
        if(arr[i]<21)
        {
            if(arr[i]<9)
            {
                cout<<endl;
                cout<<endl;
                cout<<"You Failed...! In  "<<(i+1)<<"'th subject"<<endl;
                pulka++;
            }
            else
            {
                cout<<endl;
                cout<<endl;
                cout<<"Chill buddy...You Passed in..."<<(i+1)<<" 'th subject"<<endl;
            }
        }
        else
        {
            cout<<endl;
            cout<<endl;
            cout<<"Invalid score...for ... !!!   "<<(i+1)<<" 'th Subject"<<endl;
        }
    }
}
void willPass::endSodhi()
{
    cout<<endl;
    cout<<endl;
    cout<<"                                  -----YOUR DESTINY----- "<<endl;
    cout<<"                                  _______________________"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"You FAILED in "<<pulka<<" subjects" <<endl;
    for(int i=0;i<subs;i++)
    {
        if(arr[i]<9)
        {
            if((bc)*100>=42 && arr[i]<21)
            {
                cout<<endl;
                cout<<endl;
                cout<<"You can Fail in next internal in Subject  -->  "<<(i+1)<<endl;
                cout<<endl;
                cout<<"BUT...must score greater than  "<<(28+20-arr[i])<<" in EXTERNAL to PASS "<<endl;
            }
            else
            {
                cout<<endl;
                cout<<endl;
                cout<<"You DEFINITELY need  "<<(9-arr[i]+9)<<" marks to PASS in  INTERNALS in  "<<(i+1)<<" 'th Subject"<<endl;
                cout<<endl;
                cout<<endl;
            }
        }
    }
}
class openWeb
{
public:
    void openSite();
};
void openWeb::openSite()
{
    cout<<"Opening Website... "<<endl;
    ShellExecute(NULL,"open","http://vce.ac.in",NULL,NULL,SW_SHOWNORMAL);
}
class noteMaker
{
public:
    void noteFile();
};
void noteMaker::noteFile()
{
    ofstream nfile;
    nfile.open("note.txt",ios::app);
    nfile<<"NOTE:-  "<<note<<"   ||"<<"--END "<<endl;
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
    cin.ignore();
    getline(cin,name);
    cout<<endl;
    cout<<endl;
    cout<<"Enter your Roll number : ";
    cin.ignore();
    getline(cin,roll);
    cout<<endl;
    cout<<"            MENU:"<<endl;
    cout<<"                   1. Calculate GPA (Grade Point Average)"<<endl;
    cout<<"                   2. Calculate CGPA (Cumulative Grade Point Average)"<<endl;
    cout<<"                   3. Method that is applied here for calculating GPA & CGPA"<<endl;
    cout<<"                   ______________________________________________"<<endl;
}
void gpa::calculateGPA()
{
    int q;
    cout<<"                  -------------- GPA Calculating... --------------"<<endl;
    cout<<endl;
    cout<<endl;
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
    ogpafile<<"NAME : "<<name<<"  ||  "<<"Roll No: "<<roll<<"  ||  "<<"GPA : "<<(sum/totCr)<<" || "<<endl;
}
void gpa::cgpaFile()
{
    ofstream ocgpafile("cgpa.txt",ios::app);
    ocgpafile<<"NAME : "<<name<<"  ||  "<<"  Roll No : "<<roll<<"  ||  "<<"  CGPA : "<<(semtot/l)<<"  ||  "<<endl;
}

class BuMa
{
public:
    float mon;
    float day;
    float att=0;
    float gtot;
    float p;
    float q;
    float r;
    float tot;
    BuMa();
    void mainMenu();
    int getData();
    void calData();
    void compDays();
    void attData();
    void compData();
    int  dispResult();
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
    cin.ignore();
    getline(cin,name);
    cout<<endl;
    cout<<endl;
    cout<<"Enter your Roll number : ";
    cin.ignore();
    getline(cin,roll);
    cout<<endl;
    cout<<endl;
}
int BuMa::getData()
{

    cout<<"Enter MONTH (Current Month) --> ";
    cin>>mon;
    if(mon>10 || mon<7)
    {
        cout<<"Invalid argument for MONTH...PROGRAM TERMINATED "<<endl;
        exit(0);
    }
    cout<<endl;
    cout<<"Enter DATE (Current Date) --> ";
    cin>>day;
    if(day>31 || day <1)
    {
        cout<<"Invalid argument for DAY...PROGRAM TERMINATED"<<endl;
        exit(0);
    }
    cout<<endl;
}
void BuMa::calData()
{
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
}
void BuMa::compDays()
{
    gtot=tot-tot/7-(tot/30)*2;
}
void BuMa::brConf()
{
    if(mon==8 )
    {
        p=gtot*7-14;
    }
    else if(mon==10 && day<=9)
    {
        p=gtot*7-60;
    }
    else if(mon==10 && day>=13)
    {
        p=gtot*7-100;
    }
    else if( mon==9 && day>=24)
    {
        p=gtot*7-40;
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
    att=(((q*7)+r)/p)*100;
}
int BuMa::dispResult()
{
    cout<<"______________________________________________________"<<endl;
    cout<<endl;
    if((100-att)>100)
    {
        cout<<"Invalid arguments received ...PROGRAM TERMINATED "<<endl;
        exit(0);
    }
    else
    {
    cout<<"Hey "<<" "<<name<<" your attendance percentage is..."<<(100-att)<<endl;
    cout<<endl;
    }
}
void BuMa::bumaFile()
{
    ofstream bfile("buma.txt",ios::app);
    bfile<<"NAME :  "<<name<<" || "<<" Roll No :  "<<roll<<" ||  "<<"  Attendance :  "<<(100-att)<<" || "<<endl;

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
    char choice;
    cout<<"Application List: "<<endl;
    cout<<"__________________________________"<<endl;
    cout<<" 1 : GPA CALCULATOR"<<endl;
    cout<<" 2 : ATTENDANCE MANAGER"<<endl;
    cout<<" 3 : NOTE MAKER"<<endl;
    cout<<" 4 : OPEN WEBSITE(www.vce.ac.in) "<<endl;
    cout<<" 5 : WILL I PASS...?"<<endl;
    cout<<" 6 : EXIT "<<endl;
    cout<<endl;
    cout<<"Enter Choice : ";
    cin>>choice;
    switch(choice)
    {
    case '1':
    {
        gpa a;
        cout<<"Enter choice : ";
        char inp;
        cin>>inp;
        cout<<endl;
        cout<<endl;
        switch(inp)
        {
        case '1':
        {
            a.calculateGPA();
            a.gpaFile();
            break;
        }
        case '2':
        {
            a.calculateCGPA();
            a.cgpaFile();
            break;
        }
        case '3':
        {
            a.method();
            break;
        }
        case '4'...'z':
        {
                cout<<"Invalid choice...PROGRAM TERMINATED...!"<<endl;
                break;
        }
        }
        break;
    }
    case '2':
    {
        float mon;
        float day;
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
    case '3':
        {
            noteMaker b;
            cout<<"                      --------WELCOME TO NOTE-MAKER--------"<<endl;
            cout<<"Enter NOTE  :   ";
            cin.ignore();
            getline(cin,note);
            b.noteFile();
            break;
        }
    case '4':
        {
            openWeb w;
            w.openSite();
            break;
        }
    case '5':
        {
            cout<<"                      --------WELCOME TO MARKS ESTIMATOR--------"<<endl;
            willPass m;
            m.canPass();
            m.endSodhi();
            break;
        }
    case '6':
        {
            cout<<"TERMINATING THE PROGRAM...!"<<endl;
            exit(0);
            break;
        }
    case '7'...'z':
        {
            cout<<"Invalid CHOICE...!!!"<<endl;
            break;
        }
    }
        cout<<"_________________________________________________________"<<endl;
        cout<<endl;
        cout<<"@@@  #TASK ENDED#     @ DEVELOPED BY : VINEETH & SRIMAN @     #THANK YOU   @@@ "<<endl;
        cout<<"                           FOR MORE VISIT : github/vineethreddy2197"<<endl;
        cout<<"_________________________________________________________"<<endl;
        cout<<endl;
        cout<<endl;
        char state;
        cout<<"Want to exit...?"<<endl;
        cout<<endl;
        cout<<" Enter --- 'Y' for 'YES'  || 'N' for 'NO'  : ";
        cin>>state;
        if(state =='Y' || state =='y')
        {
            exit(0);
        }
        cout<<endl;
        cout<<endl;
    }
}


