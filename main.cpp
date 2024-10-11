#include <iostream>
#include <algorithm>
#include "Header.h"
//#include "header.h"
using namespace std;

     // the first id is 20241 , the second id is 20242 ,..............AUTO.......\\


int main()
{
    System s1;
    string name;
    int age;
    string contact;
    int id;
    // contain loop lets the user choose the function he need
    while (true)
    {
        int choise = Services();
        //TO add new patient
        if (choise == 1)
        {
            cout << "\nEnter the patient name : ";
            cin >> name;
            cout << "\nEnter the patient age : ";
            cin >> age;
            cout << "\nEnter the patient contact : ";
            cin >> contact;
            s1.addNewPatient(name, age, contact);
        }
        //TO searching for existing patient
        // the first id is 20241 , the second id is 20242 ,.....................
        else if (choise == 2)
        {
            s1.searchPatient(searching());
        }
        //TO retrieve patient information
        // the first id is 20241 , the second id is 20242 ,.....................
        else if (choise == 3)
        {
            s1.retrievePatient(retrieve());
        }
        //TO update patient information
        // the first id is 20241 , the second id is 20242 ,.....................
        else if (choise == 4)
        {
            int m = retrieve();
            cout << "\nEnter the new patient name : ";
            cin >> name;
            cout << "\nEnter the new patient age : ";
            cin >> age;
            cout << "\nEnter the new patient contact : ";
            cin >> contact;
            s1.updatepatient(m, name, age, contact);

        }
        else if (choise == 5)
        {
            s1.DeleteItem(retrieve());

        }
        else if (choise == 6)
        {
            s1.play();
        }
        // To display the number of patients,
        else if (choise == 7)
        {
            s1.getCount();
        }
        else if (choise == 0)
        {
            break;
        }

        else
        {
            cout << "Please enter correct number\n";
        }

    }



    return 0;
}









int Services()
{
    cout << "###############################################\n";
    cout << "click 1 : TO add new patient\n";
    cout << "click 2 : TO searching for existing patient\n";
    cout << "click 3 : TO retrieve patient information\n";
    cout << "click 4 : TO update patient information\n";
    cout << "click 5 : TO delete patient information\n";
    cout << "click 6 : TO display patient information\n";
    cout << "click 7 : TO display number of patients \n";
    cout << "click 0 : TO Exit\n";
    cout << "###############################################\n";
    int number;
    cin >> number;
    return number;
}
// 2 to searhing
int searching()
{
    int ser;
    cout << "Enter the patient id\n";
    cin >> ser;
    return ser;
}
// 3 to retrieve patient information;
int retrieve()
{
    int ret;
    cout << "Enter the patient id\n";
    cin >> ret;
    return ret;
}

