#include <iostream>
#include <conio.h>

using namespace std;

class employ //the declaration of the class
{
public:
    int employeenumb; //the declaration of variables
    char empname[20], empsur[25], empdesignation[20];
    void getInfo() //the creation of a functon
    {
        cout << "Enter the emplyee: " << endl;
        cin >> employeenumb;
        cout << "Enter the employee name: " << endl;
        cin >> empname;
        cout << "Enter the employee surname: " << endl;
        cin >> empsur;
        cout << "Enter the employee designation: " << endl;
        cin >> empdesignation;
    }
};

class salary:public employ
{
    float Basicpay,HrAllowance,DAllowance,Profitabilityfund,Netpay;
public:
    void getSalary()
    {
        cout << "Enter the basic pays: " << endl;
        cin >> BasicPay;
        cout << "Enter the House Rent Allowance: " << endl;
        cin >> HrAllowance;
        cout << "Enter the Dearness Allowance: " << endl;
        cin >> DAllowance;
        cout << "Enter the Profitability Fund: " << endl;
        cin >> Profitabilityfund;
        cout << "           " << endl;
    }
    void calculateNet() //creating a function
    {
        Netpay = Basicpay + HrAllowance + DAllowance - Profitabilityfund; //calculation of net pay
    }
    void display()
    {
        cout << "           " << endl;
        cout << "*****************************************" <<endl;
        cout << "           " <<endl;
        cout << "Employee Number: " << "\t          " << employeenumb << endl;
        cout << "Employee Name: " << "\t              " << empname << endl;
        cout << "Employee Surname: " << "\t             " << empsur << endl;
        cout << "Employee Designation: " << "\t         " << empdesignation << endl;
        cout << "Basic Pay: " << "\t             " << "R" << Basicpay << endl;
        cout << "House Rent Allowance: " << "\t             " << "R" << HrAllowance << endl;
        cout << "Dearness Allowance: " << "\t             " << "R" << DAllowance << endl;
        cout << "Profitability Fund: " << "\t             " << "R" << Profitabilityfund << endl;
        cout << "Net Pay: " << "\t             " << "R" << Netpay << endl;
        cout << "       " <<endl;

    }
};

int main()
{
    int i,numofemployee;
    char ch;
    salary s[10];

    cout << "Enter the total number of employees: " << endl;
    cin >> numofemployee;
    cout << "    " << endl;

    for (i=0; i<numofemployee; i++)
    {
        s[i].display();
        cout << "The total number of employees are: " << numofemployee << endl;
    }
    getch();
}














