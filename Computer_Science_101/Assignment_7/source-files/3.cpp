#include <iostream>
#include <cstdlib>

using namespace std;

int get_emp(){
        cout << "Enter the number of employees in the company --> ";
        int emp_count = 0;
        cin >> emp_count;
        if (emp_count <= 0) {
                if (emp_count == 0) {
                        cout << "You have enter no employees" << endl;
                        return 0;
                }
                else {
                        cout << "The count of employees cannot be less than 0. " << endl;
                        return 0;
                }
        }
        return emp_count;
}

int missed_days(int emps_count){
        int total_d = 0;
        for (int e = 1; e <= emps_count; e++){
                cout << "Enter the number of missed days for employee:  " << e << endl;
                int d = 0;
                cin >> d;
                int tries = 3;
                while (d < 0){
                        tries --;
                        cout << "The entered day cannot be less than 0" << endl;
                        if (tries <= 0){
                                cout << "The program has terminated." << endl;
                                exit(EXIT_SUCCESS);
                        }
                        cin >> d;
                }
                total_d += d;
        }

        return total_d;
}

double get_d_aver(int emps, int d_total){
        double average = static_cast<double>(d_total/emps);
        return average;
}


int main(){

        int employee_count = get_emp();
        int mi_days = missed_days(employee_count);
        cout << "The average of missed days between all employees is: "
             << get_d_aver(employee_count, mi_days) << endl;
        return 0;
}
