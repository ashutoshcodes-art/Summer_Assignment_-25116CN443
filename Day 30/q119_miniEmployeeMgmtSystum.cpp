/*
===== MINI EMPLOYEE MANAGEMENT SYSTEM =====

1. Add Employee
2. View Employees
3. Search Employee
4. Update Salary
5. Delete Employee
6. Exit
*/

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <iomanip>
#include <limits>
using namespace std;

struct Employee
{
    string name;
    int id;
    string department;
    int salary;
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

bool uniqueid(const vector<Employee> &e, int id)
{
    for (auto &x : e)
        if (x.id == id)
            return false;
    return true;
}

int findindex(const vector<Employee> &e, int id)
{
    for (size_t i = 0; i < e.size(); i++)
        if (e[i].id == id)
            return (int)i;
    return -1;
}

void save(const vector<Employee> &e)
{
    ofstream fout("employees.txt");
    for (auto &x : e)
    {
        fout << x.name << '\n'
             << x.id << '\n'
             << x.department << '\n'
             << x.salary << '\n';
    }
}

void load(vector<Employee> &e)
{
    ifstream fin("employees.txt");
    if (!fin)
        return;
    Employee t;
    while (getline(fin, t.name))
    {
        fin >> t.id;
        fin.ignore();
        getline(fin, t.department);
        fin >> t.salary;
        fin.ignore(numeric_limits<streamsize>::max(), '\n');
        e.push_back(t);
    }
}

void add(vector<Employee> &e)
{
    Employee t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Employee Name : ";
    getline(cin, t.name);
    cout << "Employee ID : ";
    t.id = takeint();
    while (!uniqueid(e, t.id) || t.id <= 0)
    {
        cout << "Enter Unique ID : ";
        t.id = takeint();
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Department : ";
    getline(cin, t.department);
    cout << "Salary : ";
    t.salary = takeint();
    e.push_back(t);
    save(e);
    cout << "EMPLOYEE ADDED SUCCESSFULLY!\n";
}

void view(const vector<Employee> &e)
{
    if (e.empty())
    {
        cout << "NO EMPLOYEES AVAILABLE\n";
        return;
    }
    cout << left << setw(6) << "SNo" << setw(25) << "Name" << setw(10) << "ID" << setw(20) << "Department" << setw(10) << "Salary" << '\n';
    cout << setfill('-') << setw(71) << "" << setfill(' ') << '\n';
    for (size_t i = 0; i < e.size(); i++)
        cout << left << setw(6) << i + 1 << setw(25) << e[i].name << setw(10) << e[i].id << setw(20) << e[i].department << setw(10) << e[i].salary << '\n';
}

void search(const vector<Employee> &e)
{
    cout << "Enter Employee ID : ";
    int id = takeint();
    int i = findindex(e, id);
    if (i == -1)
    {
        cout << "EMPLOYEE NOT FOUND\n";
        return;
    }
    cout << "Name : " << e[i].name << "\nDepartment : " << e[i].department << "\nSalary : " << e[i].salary << "\n";
}

void updatesalary(vector<Employee> &e)
{
    cout << "Enter Employee ID : ";
    int id = takeint();
    int i = findindex(e, id);
    if (i == -1)
    {
        cout << "EMPLOYEE NOT FOUND\n";
        return;
    }
    cout << "Enter New Salary : ";
    e[i].salary = takeint();
    save(e);
    cout << "SALARY UPDATED SUCCESSFULLY\n";
}

void removeemp(vector<Employee> &e)
{
    cout << "Enter Employee ID : ";
    int id = takeint();
    int i = findindex(e, id);
    if (i == -1)
    {
        cout << "EMPLOYEE NOT FOUND\n";
        return;
    }
    e.erase(e.begin() + i);
    save(e);
    cout << "EMPLOYEE DELETED SUCCESSFULLY\n";
}

int menu()
{
    int ch;
    cout << "\n===== MINI EMPLOYEE MANAGEMENT SYSTEM =====\n";
    cout << "1. Add Employee\n2. View Employees\n3. Search Employee\n4. Update Salary\n5. Delete Employee\n6. Exit\n";
    while (true)
    {
        cout << "Choose Option : ";
        ch = takeint();
        if (ch >= 1 && ch <= 6)
            return ch;
        cout << "Choose Valid Option\n";
    }
}

int main()
{
    vector<Employee> emp;
    load(emp);
    while (true)
    {
        int ch = menu();
        if (ch == 1)
            add(emp);
        else if (ch == 2)
            view(emp);
        else if (ch == 3)
            search(emp);
        else if (ch == 4)
            updatesalary(emp);
        else if (ch == 5)
            removeemp(emp);
        else
            break;
    }
    cout << "EXITED SUCCESSFULLY!\n";
    return 0;
}
