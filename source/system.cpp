#include "../headers/include_all_headers.h"

System::System(){
    this->run=true;
    this->hospital_DataBase.creat_Database(20);
}

void System::addNewPatient(){
    Patient p=readPatient();
    p.specialization_number--; //[0-19] as there is 20 specification in the hospital
    if(hospital_DataBase.db[p.specialization_number].size()<5){ //there is a place for a patient in this specialization
        if(p.is_urgent)
            hospital_DataBase.db[p.specialization_number].push_front(p); //it is emergency case
        else
            hospital_DataBase.db[p.specialization_number].push_back(p);
    }
}

Patient System::readPatient(){
    Patient temp;
    cout<<"Pleas Enter Specialization[1-20] ,Name and Status[0,1]: \n";
    cout<<"Specialization: ";   cin>>temp.specialization_number;
    cout<<"Name: ";             getline(cin,temp.name);
    cout<<"Status: ";           cin>>temp.is_urgent;

    return temp;
}

void System::printAllPatiens(){
    for(int i=0;i<20;i++){
        if(hospital_DataBase.db[i].size()){ //means there are patient in that specification
            cout<<"There are "<<hospital_DataBase.db[i].size()<<" patients in specification ["<<i+1<<"]\n";
            for(int j=0;j<hospital_DataBase.db[i].size();j++){
                cout<<hospital_DataBase.db[i][j].name<<" ";
                    if(hospital_DataBase.db[i][j].is_urgent)cout<<"Urgent\n";
                    else cout<<"Regular\n";
            }
            cout<<'\n';  //new line between each specialsization
        }
    }
         
}

void System::getNextPatient(){
    int i;
    cout<<"Enter specialization number[1-20] : ";cin>>i;
    i--;
    if(hospital_DataBase.db[i].size()){
        cout<<hospital_DataBase.db[i].front().name<<", please go to the doctor.\n";
        hospital_DataBase.db[i].pop_front();
    }
    else
        cout<<"Sorry, there is no waiting patients in that specialization.\n";
    
}

void System::showOptionsInSystem(){
    cout<<"Enter your choice: \n";
    cout<<"\t[1] Add new Patient.\n";
    cout<<"\t[2] Print All Patients.\n";
    cout<<"\t[3] Get Next Patient.\n";
    cout<<"\t[4] Exit\n";
    cout<<"Your choice: ";
}

int System::readChoice(){
    int choice=-1;
    while(choice==-1){
        showOptionsInSystem();
        cin>>choice;
        if(!(choice>=1 && choice<=4)){
            choice=-1;
            cout<<"Wrong Choice,Try again:)\n";
        }
    }
    return choice;
}

void System::drawLine(){
    cout<<"\n\t\t=================================================\n";
}

void System::doLogic(){
    switch(readChoice()){
        case 1:
        {
            addNewPatient(); 
            cout<<"Patient add successfully\n";
            break;
        }
        case 2:
        {
            printAllPatiens(); break;
        }
        case 3:
        {
            getNextPatient();  break;
        }
        case 4:
        {
            run=false;
            break;
        }
    }  
        drawLine();
}

void System::runSystem(){
    while(run)
        doLogic();
    
     cout<<"Enter any key to quit: ";
    string s;
    cin>>s;   
}


