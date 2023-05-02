// Given that an EMPLOYEE class contains following members: Employee number, Employee name, Basic, DA, IT, Net Salary and print data members using Object.
#include <iostream>
#include <string>
using namespace std;

class EMPLOYEE {
    private:
        int emp_no;
        string emp_name;
        float basic, da, it, net_salary;
    public:
        void read_employee_data() {
            cout << "Enter employee number: ";
            cin >> emp_no;
            cout << "Enter employee name: ";
            cin >> emp_name;
            cout << "Enter basic salary: ";
            cin >> basic;
            cout << "Enter DA: ";
            cin >> da;
            cout << "Enter IT: ";
            cin >> it;
        }
        void calculate_net_salary() {
            net_salary = basic + da - it;
        }
        void print_employee_data() {
            cout << "Employee number: " << emp_no << endl;
            cout << "Employee name: " << emp_name << endl;
            cout << "Basic salary: " << basic << endl;
            cout << "DA: " << da << endl;
            cout << "IT: " << it << endl;
            cout << "Net salary: " << net_salary << endl;
        }
};

int main() {
    EMPLOYEE emp;

    emp.read_employee_data();
    emp.calculate_net_salary();
    emp.print_employee_data();

    return 0;
}

