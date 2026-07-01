/*
===== MINI LIBRARY SYSTEM =====

1. Add Book
2. View Books
3. Search Book
4. Issue Book
5. Return Book
6. Delete Book
7. Exit
*/

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <limits>
#include <iomanip>
using namespace std;

struct Book
{
    string name;
    int id;
    int total;
    int available;
};

int takeint();
int choice();
bool uniqueid(const vector<Book> &b, int id);
int findindex(const vector<Book> &b, int id);
void savebooks(const vector<Book> &b);
void loadbooks(vector<Book> &b);
void addbook(vector<Book> &b);
void viewbooks(const vector<Book> &b);
void searchbook(const vector<Book> &b);
void issuebook(vector<Book> &b);
void returnbook(vector<Book> &b);
void deletebook(vector<Book> &b);

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

int choice()
{
    cout << "\n===== MINI LIBRARY SYSTEM =====\n";
    cout << "1. Add Book\n2. View Books\n3. Search Book\n4. Issue Book\n5. Return Book\n6. Delete Book\n7. Exit\n";
    int ch;
    while (true)
    {
        cout << "Choose Option : ";
        ch = takeint();
        if (ch >= 1 && ch <= 7)
            return ch;
        cout << "Choose Valid Option\n";
    }
}

bool uniqueid(const vector<Book> &b, int id)
{
    for (auto &x : b)
        if (x.id == id)
            return false;
    return true;
}

int findindex(const vector<Book> &b, int id)
{
    for (size_t i = 0; i < b.size(); i++)
        if (b[i].id == id)
            return i;
    return -1;
}

void savebooks(const vector<Book> &b)
{
    ofstream fout("books.txt");
    for (auto &x : b)
    {
        fout << x.name << '\n'
             << x.id << '\n'
             << x.total << '\n'
             << x.available << '\n';
    }
}

void loadbooks(vector<Book> &b)
{
    ifstream fin("books.txt");
    if (!fin)
        return;
    Book t;
    while (getline(fin, t.name))
    {
        fin >> t.id >> t.total >> t.available;
        fin.ignore(numeric_limits<streamsize>::max(), '\n');
        b.push_back(t);
    }
}

void addbook(vector<Book> &b)
{
    Book t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Book Name : ";
    getline(cin, t.name);
    cout << "Book ID : ";
    t.id = takeint();
    while (!uniqueid(b, t.id) || t.id <= 0)
    {
        cout << "Enter Unique ID : ";
        t.id = takeint();
    }
    cout << "Total Copies : ";
    t.total = takeint();
    while (t.total <= 0)
    {
        cout << "Enter Valid Copies : ";
        t.total = takeint();
    }
    t.available = t.total;
    b.push_back(t);
    savebooks(b);
    cout << "BOOK ADDED SUCCESSFULLY!\n";
}

void viewbooks(const vector<Book> &b)
{
    if (b.empty())
    {
        cout << "NO BOOKS AVAILABLE\n";
        return;
    }
    cout << left << setw(6) << "SNo" << setw(30) << "Book" << setw(10) << "ID" << setw(10) << "Avail" << setw(10) << "Total" << '\n';
    cout << setfill('-') << setw(66) << "" << setfill(' ') << '\n';
    for (size_t i = 0; i < b.size(); i++)
        cout << left << setw(6) << i + 1 << setw(30) << b[i].name << setw(10) << b[i].id << setw(10) << b[i].available << setw(10) << b[i].total << '\n';
}

void searchbook(const vector<Book> &b)
{
    cout << "Enter Book ID : ";
    int id = takeint();
    int i = findindex(b, id);
    if (i == -1)
    {
        cout << "BOOK NOT FOUND\n";
        return;
    }
    cout << "Book : " << b[i].name << "\nAvailable : " << b[i].available << "/" << b[i].total << '\n';
}

void issuebook(vector<Book> &b)
{
    cout << "Enter Book ID : ";
    int id = takeint();
    int i = findindex(b, id);
    if (i == -1)
    {
        cout << "BOOK NOT FOUND\n";
        return;
    }
    if (b[i].available == 0)
    {
        cout << "NO COPIES AVAILABLE\n";
        return;
    }
    b[i].available--;
    savebooks(b);
    cout << "BOOK ISSUED SUCCESSFULLY\n";
}

void returnbook(vector<Book> &b)
{
    cout << "Enter Book ID : ";
    int id = takeint();
    int i = findindex(b, id);
    if (i == -1)
    {
        cout << "BOOK NOT FOUND\n";
        return;
    }
    if (b[i].available == b[i].total)
    {
        cout << "ALL COPIES ALREADY IN LIBRARY\n";
        return;
    }
    b[i].available++;
    savebooks(b);
    cout << "BOOK RETURNED SUCCESSFULLY\n";
}

void deletebook(vector<Book> &b)
{
    cout << "Enter Book ID : ";
    int id = takeint();
    int i = findindex(b, id);
    if (i == -1)
    {
        cout << "BOOK NOT FOUND\n";
        return;
    }
    b.erase(b.begin() + i);
    savebooks(b);
    cout << "BOOK DELETED SUCCESSFULLY\n";
}

int main()
{
    vector<Book> library;
    loadbooks(library);
    while (true)
    {
        int op = choice();
        if (op == 1)
            addbook(library);
        else if (op == 2)
            viewbooks(library);
        else if (op == 3)
            searchbook(library);
        else if (op == 4)
            issuebook(library);
        else if (op == 5)
            returnbook(library);
        else if (op == 6)
            deletebook(library);
        else
            break;
    }
    cout << "Thank You!\n";
    return 0;
}
