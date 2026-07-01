/*
===== STUDENT RECORD SYSTEM =====

1. Add Student
2. View Students
3. Search Student
4. Update Student
5. Delete Student
6. Exit
*/

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <iomanip>
#include <limits>
using namespace std;

struct Student
{
    string name;
    int roll;
    float marks;
};

int takeint()
{
    int n;
    while (true)
    {
        cin >> n;
        if (cin.fail())
        {
            cout << "Enter Integer Only : ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else
            return n;
    }
}
float takefloat()
{
    float n;
    while (true)
    {
        cin >> n;
        if (cin.fail())
        {
            cout << "Enter Number Only : ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else
            return n;
    }
}
int findindex(const vector<Student> &a, int roll)
{
    for (size_t i = 0; i < a.size(); i++)
        if (a[i].roll == roll)
            return i;
    return -1;
}
bool uniqueRoll(const vector<Student> &a, int roll)
{
    return findindex(a, roll) == -1;
}
void save(const vector<Student> &a)
{
    ofstream fout("students.txt");
    for (auto &s : a)
    {
        fout << s.name << '\n'
             << s.roll << '\n'
             << s.marks << '\n';
    }
}
void load(vector<Student> &a)
{
    ifstream fin("students.txt");
    if (!fin)
        return;
    Student t;
    while (getline(fin, t.name))
    {
        fin >> t.roll >> t.marks;
        fin.ignore(numeric_limits<streamsize>::max(), '\n');
        a.push_back(t);
    }
}
void header()
{
    cout << left << setw(6) << "SNo" << setw(30) << "Name" << setw(10) << "Roll" << setw(10) << "Marks" << endl;
    cout << setfill('-') << setw(56) << "" << setfill(' ') << endl;
}
void row(const Student &s, int i)
{
    cout << left << setw(6) << i + 1 << setw(30) << s.name << setw(10) << s.roll << setw(10) << s.marks << endl;
}
int menu()
{
    cout << "\n1.Add Student\n2.View Students\n3.Search Student\n4.Update Student\n5.Delete Student\n6.Exit\nChoose : ";
    int c = takeint();
    while (c < 1 || c > 6)
    {
        cout << "Choose Valid : ";
        c = takeint();
    }
    return c;
}
void add(vector<Student> &a)
{
    Student s;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Enter Name : ";
    getline(cin, s.name);
    cout << "Enter Roll No : ";
    s.roll = takeint();
    while (!uniqueRoll(a, s.roll))
    {
        cout << "Unique Roll : ";
        s.roll = takeint();
    }
    cout << "Enter Marks : ";
    s.marks = takefloat();
    a.push_back(s);
    save(a);
}
void view(const vector<Student> &a)
{
    if (a.empty())
    {
        cout << "No Records\n";
        return;
    }
    header();
    for (size_t i = 0; i < a.size(); i++)
        row(a[i], i);
}
void search(const vector<Student> &a)
{
    int r;
    cout << "Enter Roll : ";
    r = takeint();
    int idx = findindex(a, r);
    if (idx == -1)
        cout << "Student Not Found\n";
    else
    {
        header();
        row(a[idx], idx);
    }
}
void update(vector<Student> &a)
{
    int r;
    cout << "Enter Roll : ";
    r = takeint();
    int idx = findindex(a, r);
    if (idx == -1)
    {
        cout << "Student Not Found\n";
        return;
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "New Name : ";
    getline(cin, a[idx].name);
    cout << "New Marks : ";
    a[idx].marks = takefloat();
    save(a);
}
void del(vector<Student> &a)
{
    int r;
    cout << "Enter Roll : ";
    r = takeint();
    int idx = findindex(a, r);
    if (idx == -1)
    {
        cout << "Student Not Found\n";
        return;
    }
    a.erase(a.begin() + idx);
    save(a);
}
int main()
{
    vector<Student> stu;
    load(stu);
    while (true)
    {
        switch (menu())
        {
        case 1:
            add(stu);
            break;
        case 2:
            view(stu);
            break;
        case 3:
            search(stu);
            break;
        case 4:
            update(stu);
            break;
        case 5:
            del(stu);
            break;
        case 6:
            cout << "Exited Successfully!\n";
            return 0;
        }
    }
}
