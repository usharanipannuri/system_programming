#include <iostream>
#include<iomanip>
using namespace std;

//Creating login class
class login
{
    public:
    
    string userName;
    string Password;
    int loginAttempt = 0;
    
    //Entering login details
    void logindetails()
    {
        while (loginAttempt < 2)
        {
            cout << "Please enter your user name: ";
            cin >> userName;
            cout << "Please enter your password: ";
            cin >> Password;
            
            if (userName == "user-1" && Password == "daemon")
            {
                cout << "\n\t\t\t\t    Welcome user-1!\n";
                break;
            }
            else if (userName == "user-2" && Password == "aegon")
            {
                cout << "\n\t\t\t\t    Welcome user-2!\n";
                break;
            }
            else
            {
                cout << "\n\t\t\tInvalid login attempt. Please try again.\n" << '\n';
                loginAttempt++;
            }
        }
        
        //checking login attempts
        if (loginAttempt == 2)
        {
            cout << "\t\tToo many login attempts! The program will now terminate.";
            exit(0);
        }
        
        cout << "\n\t\t\t\tThank you for logging in.";
        
    }
};

// Node Class
class Node
{
public:
    int patient_id;
    int age;
    int registration_fee;
    double mobile_number;
    string name;
    string address;
    string cause_of_disease;
    string date;
    char gender;
    Node* next;
};
 
// Stores the head of the Linked List
Node* head = new Node();
 
// Function to insert the record
void Insert_Record(int patient_id,string date,string name,int age,string address,char gender,double mobile_number,int registration_fee,string cause_of_disease)
{
    // Create new Node to Insert Record
    Node* t = new Node();
    t->patient_id = patient_id;
    t->date = date;
    t->name = name;
    t->age = age;
    t->address = address;
    t->gender = gender;
    t->mobile_number = mobile_number;
    t->registration_fee = registration_fee;
    t->cause_of_disease = cause_of_disease;
    t->next = NULL;
 
    // Insert at Begin
    if (head == NULL || (head->patient_id >= t->patient_id)) 
    {
        t->next = head;
        head = t;
    }
 
    // Insert at middle or End
    else 
    {
        Node* c = head;
        while (c->next != NULL && c->next->patient_id < t->patient_id)
        {
            c = c->next;
        }
        t->next = c->next;
        c->next = t;
    }
    cout << "\n\t\t\t\tRecord Inserted Successfully\n";
}

// Function to search record for any patient Record with patient id
void Search_Record(int patient_id)
{

    // if head is NULL
    if (!head) 
    {
        cout << "\n\t\t\t\tNo such Record Available\n";
        return;
    }
    
    // Otherwise
    else 
    {
        Node* p = head;
        while (p) 
        {
            if (p->patient_id == patient_id) 
            {
                cout << "\npatient_id    \t:" << p->patient_id << endl;
                cout << "date  \t\t:"<< p->date << endl;
                cout << "Name  \t\t:"<< p->name << endl;
                cout << "age    \t\t:"<< p->age << endl;
                cout << "registration_fee:"<< p->registration_fee << endl;
                cout << "address \t:"<< p->address << endl;
                cout << "mobile_number  \t:"<< p->mobile_number << endl;
                cout << "cause_of_disease:"<< p->cause_of_disease << endl;
                cout << "gender \t\t:"<< p->gender << endl;

                return;
            }
            p = p->next;
        }
 
        if (p == NULL)
        {
            cout << "\n\t\t\t\tNo such Record Available\n";
        }
    }
}

// Function to search record for any patient Record with mobile number
void Search_Record(double mobile_number)
{

    // if head is NULL
    if (!head) 
    {
        cout << "\n\t\t\t\tNo such Record Available\n";
        return;
    }
    
    // Otherwise
    else 
    {
        Node* p = head;
        while (p) 
        {
            if (p->mobile_number == mobile_number) 
            {
                cout << "\npatient_id    \t:" << p->patient_id << endl;
                cout << "date  \t\t:"<< p->date << endl;
                cout << "Name  \t\t:"<< p->name << endl;
                cout << "age    \t\t:"<< p->age << endl;
                cout << "registration_fee:"<< p->registration_fee << endl;
                cout << "address \t:"<< p->address << endl;
                cout << "mobile_number  \t:"<< p->mobile_number << endl;
                cout << "cause_of_disease:"<< p->cause_of_disease << endl;
                cout << "gender \t\t:"<< p->gender << endl;
                return;
            }
            
            p = p->next;
        }
 
        if (p == NULL)
        {
            cout << "\n\t\t\t\tNo such Record Available\n";
        }
    }
}

// Function to display the Patient's Record
void Show_Record()
{
    Node* p = head;
   if (p == NULL)
   {
        cout << "\n\t\t\t\tNo Record Available\n";
    }
    else 
    {
        while (p != NULL) 
        {
            cout << "\nDisplaying the details of patient "<<p->patient_id<<endl;
            cout << "\n patient id : " << p->patient_id;
            cout << "\n date : " << p->date;
            cout << "\n name : " << p->name;
            cout << "\n age : " << p->age;
            cout << "\n address : " << p->address;
            cout << "\n gender : " << p->gender;
            cout << "\n mobile_number : " << p->mobile_number;
            cout << "\n registration_fee : " << p->registration_fee;
            cout << "\n cause_of_disease : " << p->cause_of_disease << endl;
            
            p = p->next;
        }
    }
}

//Check class for checking cause of disease
class Check
{
    public:
    int cause_of_disease;
    
    //Creating a constructor for check class
    Check()  
    {
        cout<<"\nEnter cause of disease to meet respective doctor  "<<endl;
        cout<<"\nIf your cause of disease is related to dermatologist(doctor 1)..Please press 1"<<endl;
        cout<<"If your cause of disease is related to Cardiologist(doctor 2)..Please press 2"<<endl;
        cout<<"If your cause of disease is related to Neurologist(doctor 3)..Please press 3"<<endl;
        
        cin>>cause_of_disease;
        
        //Checking cause of disease
        switch(cause_of_disease)
        {
            case 1:cout<<"\n\t\t\tYou can go to room 1 and Kindly wait there to pick-up..."<<endl;
            break;
            case 2:cout<<"\n\t\t\tYou can go to room 2 and Kindly wait there to pick-up..."<<endl;
            break;
            case 3:cout<<"\n\t\t\tYou can go to room 3 and Kindly wait there to pick-up..."<<endl;
            break;
            default:cout<<"\n\t\t\tSorry there is no doctor regarding to your cause of disease..."<<endl;
            cout<<"\nPlease enter your correct choice : "<<endl;
        
            Check();
            break;
        }   
    }
};

//Creating Doctor class to consult respective doctor
class Doctor
{
    public:
    string test_required;
    
    //Function to meet doctor 1
    void Doctor_1()
    {
        cout<<"\n\t\t\tGo to the pharmacy and collect your medicines  "<<endl;
    }
    
    //Function to meet doctor 2
    void Doctor_2()
    {
        cout<<"\nIf test required Enter YES : ";
        cin>>test_required;
        if(test_required=="YES" || test_required=="yes")
        {
            cout<<"\n\t\t\t\tGo to the laboratory"<<endl;
            cout<<"\t\t\tCome again after completing the test"<<endl;
            Doctor_2();
        }
        else
        {
            cout<<"\n\t\t\tGo to the pharmacy and collect your medicines"<<endl;
        }
    }
    
    //Function to meet doctor 3
    void Doctor_3()
    {
        cout<<"\nIf test required Enter YES : ";
        cin>>test_required;
        if(test_required=="YES" || test_required=="yes")
        {
            cout<<"\n\t\t\t\tGo to the laboratory"<<endl;
            cout<<"\t\t\tCome again after completing the test"<<endl;
            Doctor_3();
        }
        else
        {
            cout<<"\n\t\t\tGo to the pharmacy and collect your medicines"<<endl;
        }
    }
};

//Inheriting Doctor class into Pharmacy class
class Pharmacy:public Doctor
{
    public:
    float bill;
    
    //Function to collect medicines
    void medicine()
    {
        cout<<"\n\t\t\t\tGive your prescription"<<endl;
        cout<<"Your bill amount is : ";
        cin>>bill;
        cout<<"\n\t\t\t\tThank you for paying the bill"<<endl;
        cout<<"\t\t\tThese are your medicines and take it properly"<<endl;
        cout<<"\n\t\t\t\tThanks for coming!!"<<endl;
        cout<<"\n\t\t\t-------------------------You can leave--------------------------";
    }
};


int main ()
{
    //Creation of object for login class
    login l;
    l.logindetails();
    
    //Initialing head to NULL
    head = NULL;
    int patient_id,age,registration_fee;
    double mobile_number;
    string name,address,cause_of_disease,date;
    char gender;
    
    // Menu-driven program
    while (true) 
    {
        cout << "\n\n\t\t--------------------------------------------------------";
        cout<<"\n\t\t\t\tWELCOME TO PATIENT RECORD           ";
        cout << "\n\t\t--------------------------------------------------------";
        cout << "\n\n\t\tPress";
        cout << "\n\t\t\t1 To create a new Record";
        cout << "\n\t\t\t2 To view all patient Records";
        cout << "\n\t\t\t3 To search a patient Record";
        cout << "\n\t\t\t4 To go for checking";
        cout << "\n\t\t\t5 To Exit\n";
        cout << "\n  Enter your Choice:";
        
        int Choice;
        
        // Enter Choice
        cin >> Choice;
        if (Choice == 1)
        {
            cout << "\nEnter patient id of Patient : ";
            cin >> patient_id;
            cout << "Enter date : ";
            cin >> date;
            cin.ignore();
            cout << "Enter Name of the Patient : ";
            getline(cin,name);
            cout << "Enter age : ";
            cin >> age;
            cin.ignore();
            cout << "Enter address : ";
            getline(cin,address);
            cout << "Enter gender : ";
            cin >> gender;
            cout << fixed << setprecision(0) << "Enter mobile_number : ";
            cin >> mobile_number;
            cout << "Enter registration_fee : ";
            cin >> registration_fee;
            cin.ignore();
            cout << "Enter cause_of_disease : ";
            getline(cin,cause_of_disease);
            
            Insert_Record(patient_id,date,name,age,address,gender,mobile_number,registration_fee,cause_of_disease);
        }
        else if (Choice == 2)
        {
            Show_Record();
        }
        
        else if (Choice == 3)
        {
            int search;
            cout<<"Press 1 if you want to search the patient through Patient id"<<endl;
            cout<<"Press 2 if you want to search the patient through Mobile number"<<endl;
            cin>>search;
            switch(search)
            {
                case 1:cout << "Enter Patient id of Patient whose record you want to Search : ";
                cin >> patient_id;
                Search_Record(patient_id);
                break;
                
                case 2:cout << "Enter Mobile number of Patient whose record you want to Search : ";
                cin >> mobile_number;
                Search_Record(mobile_number);
                break;
                
                default:cout<<"\n\t\t\t\tNo such option is available ";
            }
        }
        
        else if (Choice == 4) 
        {
            
            string attempt_to_meet_doctor;
    
            //Checking registration fee paid or not
            if(registration_fee!=0)
            {
                cout<<"\n\t\t\tThank you for paying the registration amount ! "<<endl;
                Check();
            }
            else
            {
                cout<<"\n\t\t\tThank you for visiting our hospital @You can leave.."<<endl;
                cout<<"\t\t    !--------------------------OR------------------------------!"<<endl;
                cout<<"\nIf you want to  continue please press YES : ";
                cin>>attempt_to_meet_doctor;
        
                //Giving an attempt to patient to consult the doctor
                if(attempt_to_meet_doctor=="YES" || attempt_to_meet_doctor=="yes")
                {
                    cout<<"\n\t*----Please pay the registration fee and then You can go for checking cause of disease----*"<<endl;
                    cout<<"Enter the amount : ";
                    cin>>registration_fee;
                    cout<<"\n\t\t\t-------You have paid registration fee and you can proceed now-------"<<endl;
                    Check();
                }
                else
                {
                    cout<<"\n\t\t.......Thank you for visiting our hospital @You can leave........"<<endl;
                    exit(0);
                }
            }
            
            //Checking pick-up to consult respective doctor
            int pick_up;
            cout<<"\nPress 1 to meet doctor 1(Dermatologist)"<<endl;
            cout<<"Press 2 to meet doctor 2(Cardiologist)"<<endl;
            cout<<"Press 3 to meet doctor 3(Neurologist)"<<endl;
            cin>>pick_up;
            
            //Creating object for Doctor class
            Doctor d;
            //Creating object for Pharmacy class
            Pharmacy p;
            
            switch(pick_up)
            {
                case 1:cout<<"\t\t\t\tPlease consult doctor-1"<<endl;
                p.Doctor_1();
                break;
            
                case 2:cout<<"\t\t\t\tPlease consult doctor-2"<<endl;
                p.Doctor_2();
                break;
            
                case 3:cout<<"\t\t\t\tPlease consult doctor-3"<<endl;
                p.Doctor_3();
                break;
            
                default:cout<<"\n\t\t\tSorry there is no related doctor to your pick-up"<<endl;
                break;
            }
            if(pick_up!=1 && pick_up!=2 && pick_up!=3)
            {
                cout<<"\n\t\t----------------------------You can leave-----------------------"<<endl;
            }
            else
            {
                p.medicine();
            }
        }
        else if(Choice == 5)
        {
            exit(0);
        }
        
        else 
        {
            cout << "\n\t\t\t\tInvalid Choice Try Again\n";
        }
    }
    
    return 0;
}

