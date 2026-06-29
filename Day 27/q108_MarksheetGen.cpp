#include <iostream>
#include <string>
#include <limits>
using namespace std;

struct Student{
    string name;
    int rollno;
    string subject[5] = {"Maths","Physics","Chemistry","English","Computer"};
    int marks[5];
};

string grade(float percentage );
void inputmarks(Student& a);
float percent(const Student& a);
string result(const Student&a);
int sum(const Student&a);


string grade(float percentage ){
    if (percentage>=90 && percentage<=100)
    {
        return "A+";
    }
    else if (percentage>=80 && percentage<90)
    {
        return "A";
    }
    else if (percentage>=70 && percentage<80)
    {
        return "B";
    }
    else if (percentage>=60 && percentage<70)
    {
        return "C";
    }
    else if (percentage>=50 && percentage<60)
    {
        return "D";
    }
    return "F";
}

void inputmarks(Student& a){
    cout<<"Enter Name of Student : ";getline(cin,a.name);
    cout<<"Enter Roll No of Student : ";cin>>a.rollno;
    cout<<"Enter Marks of "<<a.name<<endl;
    for (int i = 0; i < 5; i++)
    {
        int mark;
        cout<<"Enter "<<a.subject[i]<<" Marks : ";cin>>mark;
        while(!(mark<=100 && mark >=0)){
            cout<<"Enter valid Marks (Out of 100) : ";cin>>mark;
        }
        a.marks[i] = mark;
    }
}

int sum(const Student&a){
    int sum =0;
    for (int i = 0; i < 5; i++)
    {
        sum += a.marks[i];
    }
    return sum;
}

float percent(const Student& a){
    int summ=sum(a);
    return (float)summ/5;
}

string result(const Student&a){
    for (int i = 0; i < 5; i++)
    {
        if(!(a.marks[i]>27)){
            return "FAIL";
        }
    }
    return "PASS";
}

int main(){
    Student stu;
    inputmarks(stu);
    float percentage = percent(stu);
    string g = grade(percentage);
    string res = result(stu);
    cout<<"\n\n=====MARKSHEET=====\n";
    cout<<"Name of Student : "<<stu.name<<endl;
    cout<<"Roll No of Student : "<<stu.rollno<<endl;
    cout<<"Marks : "<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<stu.subject[i]<<" Marks : "<<stu.marks[i]<<endl;
    }
    cout<<"\nTotal Marks : ["<<sum(stu)<<"/500]"<<"\nPercentage : "<<percentage<<"%\nGrade : "<<g<<"\nResult : "<<res;

    return 0;
}
