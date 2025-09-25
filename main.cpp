// COMMANDS USED IN EXAMPLE
//     1  ./run-tests.sh 
//     2  astyle -F main.cpp
//     3  man astyle
//     4  clear
//     5  history -a
//     6  history -w
//     7  cat ~/.bash_history 
//     8  history
//     9  astyle -n -F main.cpp
//    10  clear
//    11  history


// ------------- FILE HEADER -------------
// Author ✅:
// Assignment ✅:1
// Date ✅:9/25
// Citations:


// ------------- ZYBOOKS SCORES -------------
// Chapter ✅:1
// Participation ✅:
// Challenge ✅:
// Labs ✅:


// ------------- DISCORD POSTS -------------
// https://discord.com/invite/URYKKf8YHm
// Count ✅: 1
// Links (Optional):


// ------------- DESIGN DOCUMENT -------------
// A. INPUT ✅:
// B. OUTPUT ✅:
// C. CALCULATIONS ✅:
// D. LOGIC and ALGORITHMS ✅:
//    (Optional) flow chart link or file name:


// ------------- TESTING -------------
// PASS ALL GIVEN SAMPLE RUN TESTS ✅:
// (Optional) Additional tests count:


// ------------- CODE -------------
#include <iostream>

using namespace std;

// Function prototypes (if any)

// Main function
// https://en.cppreference.com/w/cpp/language/main_function.html
int main(int argc, char* argv[]) {
    int employee_id = 0;
    int hours_worked = 0;
    int usd_per_hour = 0;
    int federal_withholding_percent = 0;

    int gross_pay_usd = 0;
    double federal_tax_witholding_usd = 0.0;
    double net_pay_usd = 0.0;

    cout << "Welcome to my Weekly Payroll program!!" << endl;

    cout << "Enter your employee ID number (numbers only): ";
    cin >> employee_id;

    cout <<  "Enter number of hours worked (whole numbers): ";
    cin >> hours_worked;

    cout <<  "Enter the hourly rate: ";
    cin >> usd_per_hour;

    cout <<  "Enter the federal withholding rate: ";
    cin >> federal_withholding_percent;

    // DO CALCULATIONS
    gross_pay_usd = hours_worked * usd_per_hour;
    double decimal_witholding_percentage = federal_withholding_percent / 100.0;
    federal_tax_witholding_usd = gross_pay_usd * decimal_witholding_percentage;
    net_pay_usd = gross_pay_usd - federal_tax_witholding_usd;

    cout << "Your Payroll Summary:" << endl;
    cout << "Total Gross Pay: $" << gross_pay_usd << endl;
    cout <<  "Federal Tax Withholding: $" << federal_tax_witholding_usd << endl;
    cout << "Net Pay: $" << net_pay_usd << endl;

    cout <<  "Thank you for using my Weekly Payroll program!!" << endl;
    return 0;
}

// Function implementations (if any)


// ------------- DESIGN -------------
/*
Program:
Weekly Payroll program

Design:
A. INPUT
int employee_id = 0;
int hours_worked = 0;
int usd_per_hour = 0;
int federal_withholding_percent = 0;

B. OUTPUT
int gross_pay_usd = 0;
double federal_tax_witholding_usd = 0.0;
double net_pay_usd = 0.0;

C. CALCULATIONS
gross_pay_usd = hours_worked * usd_per_hour;
double decimal_witholding_percentage = federal_withholding_percent / 100.0;
federal_tax_witholding_usd = gross_pay_usd * decimal_witholding_percentage;
net_pay_usd = gross_pay_usd - federal_tax_witholding_usd;

D. LOGIC and ALGORITHMS
Design the logic of your program using pseudocode or flowcharts.
Use conditionals, loops, functions or array constructs.
List the steps in transforming inputs into outputs.
https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt

MESSAGE "Welcome to my Weekly Payroll program!!"

PROMPT "Enter your employee ID number (numbers only): "
INPUT employee_id

PROMPT "Enter number of hours worked (whole numbers): "
INPUT hours_worked

PROMPT "Enter the hourly rate: "
INPUT usd_per_hour

PROMPT "Enter the federal withholding rate: "
INPUT federal_withholding_percent

DO CALCULATIONS

MESSAGE "Your Payroll Summary:"

LABEL "Total Gross Pay: $"
DATA  gross_pay_usd

LABEL "Federal Tax Withholding: $ "
DATA  federal_tax_witholding_usd

LABEL "Net Pay: $"
DATA  net_pay_usd

MESSAGE  "Thank you for using my Weekly Payroll program!!"


SAMPLE RUNS
Welcome to my Weekly Payroll program!!
Enter your employee ID number (numbers only): 34567
Enter number of hours worked (whole numbers): 40
Enter the hourly rate: 17
Enter the federal withholding rate: 15

Your Payroll Summary:
Total Gross Pay: $680
Federal Tax Withholding: $102
Net Pay: $578

Thank you for using my Weekly Payroll program!!


Welcome to my Weekly Payroll program!!
Enter your employee ID number (numbers only): 12345
Enter number of hours worked (whole numbers): 30
Enter the hourly rate: 22
Enter the federal withholding rate: 10

Your Payroll Summary:
Total Gross Pay: $660
Federal Tax Withholding: $66
Net Pay: $594

Thank you for using my Weekly Payroll program!!

*/
