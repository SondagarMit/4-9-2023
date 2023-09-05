#include<iostream.h>
#include<conio.h>
#include<string.h>

class Company
{
  static char company_name[50];
  int id, age, experiense, year, salary;
  char name[50], city[50], state[50], address[100], department[50], area[50];

public:
  void emp_id()
  {
    cout << "Enter Your Id: ";
    cin >> id;
  }

  void person()
  {
    cout << "Name: ";
    cin >> name;

    cout << "Enter Your Age: ";
    cin >> age;

    cout << "What is Your Experience: ";
    cin >> experiense;

    cout << "How Many Years You Spent in Our Company: ";
    cin >> year;
  }

  void emp_salary()
  {
    cout << "Enter Your Salary: ";
    cin >> salary;
  }

  void location()
  {
    cout << "Enter Your Address: ";
    cin >> address;

    cout << "Enter Your City: ";
    cin >> city;

    cout << "Enter Your Area: ";
    cin >> area;

    cout << "Enter Your State: ";
    cin >> state;
  }

  void emp_department()
  {
    cout << "Enter Your Department: ";
    cin >> department;
  }

  void display()
  {
    emp_id();
    person();
    emp_salary();
    location();
    emp_department();
  }
};

char Company::company_name[50];

void main()
{
  Company obj;
  clrscr();
  obj.display();
  getch();
}
