// nested structs and struct arrays
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct dob {
    string day;
    string month;
    unsigned year;
};

struct account {
  string fullname;
  dob DoB;
} acclist[2];                               //array of structs 

void printacc (account acc);                //function declaration 

int main ()
{
  acclist[0].fullname = "Ali Khan";         //first account
  acclist[0].DoB = {"01", "Apr", 2006};

  cout << "Enter full name: ";              //second account
  getline (cin,acclist[1].fullname);
  cout << "Enter date of birth as day >> month (first three letters) >> year: ";
  cin >> acclist[1].DoB.day >> acclist[1].DoB.month >> acclist[1].DoB.year; 

  cout << "My account details are:\n ";
  printacc (acclist[0]);
  cout << "Your account details are:\n ";
  printacc (acclist[1]);
  return 0;
}

void printacc (account acc)                 // function definition
{
  cout << "Full Name: " << acc.fullname << '\n';
  cout << " Date of birth: " << acc.DoB.day << ' ' << acc.DoB.month << ' ' << acc.DoB.year << '\n';
}
