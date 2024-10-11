//#ifndef HEADER_H_INCLUDED
//#define HEADER_H_INCLUDED
#include <iostream>
#include <algorithm>
using namespace std;

int Services();
int searching();
int retrieve();

// the first id is 20241 , the scond id is 20242 ,.....................
struct node
{
    int id;
    string name;
    int age;
    string contact;
    node* next;
    node* before;
};
class System
{
    node* head;
    node* first;
    int Sid;
    int len;
    //function named count count the number of patients
    int count;
public:
    // Constractor
    System()
    {
        head = NULL;
        first = NULL;
        len = 0;
        count = 0;
        Sid = 20241;
    }
    // TO add new patient
    void addNewPatient(string name, int age, string contact)
    {
        node* newnode = new node();
        newnode->id = Sid;
        newnode->name = name;
        newnode->age = age;
        newnode->contact = contact;
        if (len == 0)
        {
            head = newnode;
            first = newnode;
            newnode->before = NULL;
            newnode->next = NULL;
        }
        else
        {
            node* t = head;
            t->before = newnode;
            t = newnode;
            newnode->next = head;
            head = newnode;
        }
        len++;
        Sid++;
        count++;
    }

    //TO searching for existing patient
    void searchPatient(int id)
    {
        node* t = head;
        int x = 0;
        while (t != NULL)
        {
            if (t->id == id)
            {
                cout << "The patient is exist\n";
                x = 1;
                break;
            }
            t = t->next;
        }
        if (x == 0)
        {
            cout << "The patient is not exist\n";
        }
    }

    //TO retrieve patient information
    void retrievePatient(int id)
    {
        node* t = head;
        int x = 0;
        while (t != NULL)
        {
            if (t->id == id)
            {
                cout << "########################\n";
                cout << "the patient id : " << t->id << endl;
                cout << "the patient name : " << t->name << endl;
                cout << "the patient age : " << t->age << endl;
                cout << "the patient contact : " << t->contact << endl;
                cout << "#########################\n";
                x = 1;
                break;
            }
            t = t->next;
        }
        if (x == 0)
        {
            cout << "The patient is not exist\n";
        }
    }
    //  update patient information
    void updatepatient(int idd, string namee, int agee, string contactt)
    {
        node* t = head;
        int v = 0;
        while (t != NULL)
        {
            if (t->id == idd)
            {
                v = 1;
                t->age = agee;
                t->name = namee;
                t->contact = contactt;
                cout << " update is done \n";
                break;
            }
            t = t->next;
        }
        if (v == 0)
            cout << "The patient id is not exist \n";
    }

    // TO display patient information
    void play()
    {
        node* t = head;

        int x = len;
        cout << "#########Patient information##########\n";
        while (x--)
        {
            cout << "######## " << x << " ##########\n";
            cout << "the patient id : " << t->id << endl;
            cout << "the patient name : " << t->name << endl;
            cout << "the patient age : " << t->age << endl;
            cout << "the patient contact : " << t->contact << endl;
            t = t->next;
            cout << "######################\n";
        }
        cout << "######################################" << endl;
    }


    //  TO delete patient information
    void DeleteItem(int id)
    {
        int v = 0;
        node* t = head;

        while(t != NULL)
        {
            if(t->id == id)
            {

                if(t == head)
                {
                    head = t->next;
                    if(head != NULL)
                    {
                        head->before = NULL;
                    }
                }
                else
                {
                    t->before->next = t->next;
                }

                if(t == first)
                {
                    first = t->before;
                    if(first != NULL)
                    {
                        first->next = NULL;
                    }
                }
                else
                {
                    t->next->before = t->before;
                }

                delete t;
                 cout << " delete is done \n";
                len--;
                count--;
                v = 1;
                break;
            }
            t = t->next;
        }

        if(v == 0)
        {
            cout << "The patient id is not exist\n";
        }
    }

    // To display the number of patients,
    void getCount()
    {
        cout <<"the number of patients is : " <<count<<endl;
    }

};

