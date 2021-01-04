/*#include <iostream>
#include <conio.h>*/
#include<bits/stdc++.h>
using namespace std;

class hospital
{
    string p_name,problem,address,date;
    int age;
    long int number;
public:
    void patient_appoint();
    void doctor_list();
    void payment();
    void hospital_details();
};

class doctor : public hospital
{
public:
    void one();
    void two();
    void three();
    void four();
    void five();
    void six();
    void seven();
    void eight();
};

void doctor::one()
{
    patient_appoint();
}

void doctor::two()
{
    patient_appoint();
}

void doctor::three()
{
    patient_appoint();
}

void doctor::four()
{
    patient_appoint();
}

void doctor::five()
{
    patient_appoint();
}

void doctor::six()
{
    patient_appoint();
}

void doctor::seven()
{
    patient_appoint();
}

void doctor::eight()
{
    patient_appoint();
}


void hospital :: patient_appoint()
{
    cout<<"\t\t\t\t\t\tPatient Name: ";
    cin.ignore();
    getline(cin, p_name);
    cout<<"\t\t\t\t\t\tPatient Age: ";
    cin>>age;
    cout<<"\t\t\t\t\t\tPatient Problem: ";
    cin.ignore();
    getline(cin, problem);
    cout<<"\t\t\t\t\t\tAddress: ";
    cin.ignore();
    getline(cin, address);
    cout<<"\t\t\t\t\t\tEnter Your Mobile Number: ";
    cin>>number;
    cout<<"\t\t\t\t\t\tAppoint Date: ";
    cin.ignore();
    getline(cin, date);
    cout<<"\n\t\t\t\t\t\tAppointment has been booked successfully! Get well soon!!!"<<endl<<endl;
}

void hospital::doctor_list()
{
    cout<<"\t\t\t\t\t1. Dr. Jose Abraham - Physician"<<endl<<endl;
    cout<<"\t\t\t\t\t2. Dr. Babu Thomas - Cardiologist"<<endl<<endl;
    cout<<"\t\t\t\t\t3. Dr. Krishnadas - Paediatrician"<<endl<<endl;
    cout<<"\t\t\t\t\t4. Dr. Sheela Mohan - Gynaecologist"<<endl<<endl;
    cout<<"\t\t\t\t\t5. Dr. Nayana S - Orthopaedic surgeon"<<endl<<endl;
    cout<<"\t\t\t\t\t6. Dr. Paul  - ENT Specialist"<<endl<<endl;
    cout<<"\t\t\t\t\t7. Dr. Siddarth - Physician"<<endl<<endl;
    cout<<"\t\t\t\t\t8. Dr. Hasseena - Cardiologist"<<endl<<endl;
}

void hospital::payment()
{
    int amount, number;
    cout<<"\t\t\t\t\t\tEnter the amount to paid: ";
    cin>>amount;
    cout<<endl;
    cout<<"\t\t\t\t\t\tEnter Your Mobile Number: ";
    cin>>number;
    cout<<"\n\t\t\t\t\t\tPayment successful, Thank you!  Get well soon"<<endl<<endl;
}

void hospital::hospital_details()
{
    cout<<"\t\t\tContact Us: 00201142365"<<endl;
}

int main()
{
    int ch, doc, x;
    hospital obj;
    doctor obj1;

    do{
       // system("cls");
        cout<<"\n\n\t\t\t\t\t\tHospital Management System"<<endl;
        cout<<"\t\t\t\t\t\t_____________________________"<<endl<<endl;
        cout<<"\t\t\t\t\t\t1. Emergency Booking"<<endl<<endl;
        cout<<"\t\t\t\t\t\t2. Payment"<<endl<<endl;
        cout<<"\t\t\t\t\t\t3. Doctors List & Appointment booking"<<endl<<endl;
        cout<<"\t\t\t\t\t\t4. Hospital Details"<<endl<<endl;
        cout<<"\t\t\t\t\t\t5. Exit"<<endl<<endl;
        cout<<"\n";
        cin>>ch;
    switch(ch)
    {
        case 1: cout<<"\n\t\t\t\t\t\t1. Book an appointment"<<endl;
        cout<<"\t\t\t\t\t\t_____________________________"<<endl<<endl;
        obj.patient_appoint();
        break;
        case 2: cout<<"\n\t\t\t\t\t\t2. Payment"<<endl;
        cout<<"\t\t\t\t\t\t_____________________________"<<endl<<endl;
        obj.payment();
        break;
        case 3: cout<<"\n\t\t\t\t\t\t3. Doctors List"<<endl;
        cout<<"\t\t\t\t\t\t_____________________________"<<endl<<endl;
        obj.doctor_list();
        cout<<"\n\t\t\t\t\t\tSelect a doctor to book an appointment: ";
        cin>>doc;
        switch(doc)
        {
            case 1: cout<<"\n\t\t\t\t\t\t1. Dr. Jose Abraham - Physician"<<endl;
            cout<<"\t\t\t\t\t\t_____________________________"<<endl<<endl;
            obj1.one();
            break;
            case 2: cout<<"\n\t\t\t\t\t\t2. Dr. Babu Thomas - Cardiologist"<<endl;
            cout<<"\t\t\t\t\t\t_____________________________"<<endl<<endl;
            obj1.two();
            break;
            case 3: cout<<"\n\t\t\t\t\t\t3. Dr. Krishnadas - Paediatrician"<<endl;
            cout<<"\t\t\t\t\t\t_____________________________"<<endl<<endl;
            obj1.three();
            break;
            case 4: cout<<"\n\t\t\t\t\t\t4. Sheela Mohan - Gynaecologist"<<endl;
            cout<<"\t\t\t\t\t\t_____________________________"<<endl<<endl;
            obj1.four();
            break;
            case 5: cout<<"\n\t\t\t\t\t\t5. Dr. Nayana S - Orthopaedic surgeon"<<endl;
            cout<<"\t\t\t\t\t\t_____________________________"<<endl<<endl;
            obj1.five();
            break;
            case 6: cout<<"\n\t\t\t\t\t\t6. Dr. Paul  - ENT Specialist"<<endl;
            cout<<"\t\t\t\t\t\t_____________________________"<<endl<<endl;
            obj1.six();
            break;
            case 7: cout<<"\n\t\t\t\t\t\t7. Dr. Siddarth - Physician"<<endl;
            cout<<"\t\t\t\t\t\t_____________________________"<<endl<<endl;
            obj1.seven();
            break;
            case 8: cout<<"\n\t\t\t\t\t\t8. Dr. Hasseena - Cardiologist"<<endl;
            cout<<"\t\t\t\t\t\t_____________________________"<<endl<<endl;
            obj1.eight();
            break;
            default:
                cout<<"Please select a valid option"<<endl<<endl;
        }
        break;
        case 4: cout<<"\n\t\t\t\t\t\t4. Hospital Details"<<endl;
        cout<<"\t\t\t\t\t\t_____________________________"<<endl<<endl;
        obj.hospital_details();
        break;
        default:
            cout<<"\t\t\t\t\t\tPlease enter a valid option"<<endl<<endl;
    }

}while(ch!=5);

}
