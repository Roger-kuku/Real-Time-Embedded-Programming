#include <iostream>
#include <string>

using namespace std;

class BankAccount {
public:
    string name;
    int balance;

    // Constructor
    BankAccount(string accName, int accBalance) {
        name = accName;
        balance = accBalance;
    }

    // Method to display account details
    void displayAccount() {
        cout << "Account Holder: " << name << endl;
        cout << "Balance: $" << balance << endl;
    }

    void withdraw(int amount)
    {
        balance = balance - amount;
    }


};


class Employee
{
public:
    string name;

    void Print_Name()
    {
        cout << "Employee name : "<< name << endl;

    }

    void set_salary(double potential_salary)
    {
        if (potential_salary < 0) salary = 0;
        else salary = potential_salary;
    }

    double get_salary()
    {
        return salary;
    }

    void Print_Salary()
    {
        cout << name << " earns : " << salary << endl;
    }

private:
    double salary;

};

class Rectangular
{
private:
    double length;
    double width;

    double area()
    {
        return length*width;
    }
    

public:

    void set_dimensions(double l, double w)
    {
        length = l;
        width = w;
    }

    double perimeter();
    
    void Print_area()
    {
        cout << "Rectangle area : " << area() << endl;
    }
    void Print_perimeter()
    {
        cout << "Rectangle perimeter : " << perimeter() << endl;
    }
};

double Rectangular::perimeter()
{
    return 2 * (length + width);
}


int main() {
    // Create an object of BankAccount
    BankAccount myAccount("John Doe", 1000);

    // Display account details
    myAccount.displayAccount();

    BankAccount account2("Najib",2000);
    account2.withdraw(199);
    account2.displayAccount();    



    Employee employee1;
    employee1.name = "Kelvin";
    employee1.Print_Name();

    employee1.set_salary(10000);
    employee1.Print_Salary();

    Employee employee2;
    employee1.name = "Poro";
    employee1.Print_Name();

    employee1.set_salary(-100);
    employee1.Print_Salary();


    Rectangular rectangular1;
    rectangular1.set_dimensions(10,20);
    
    rectangular1.Print_perimeter();
    rectangular1.Print_area();



    return 0;
}
