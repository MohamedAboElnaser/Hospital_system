#ifndef SYSTEM
#define SYSTEM 
#include "../headers/hospital_dataBase.h"
class System{
private:
    Database hospital_DataBase;
    bool run;

    void addNewPatient(); //add patiet to database system(vector of deque)
    void printAllPatiens();// show all patients of the system
    void getNextPatient();// print the next patients in specific specialization
    void doLogic(); // operate the olgic of the sys
    Patient readPatient(); //get the patient data
    void showOptionsInSystem(); //show the menu to the user
    int readChoice(); //return the choice number
    void drawLine();  //draw single line after every action
    
public:
System ();
void runSystem();
};

#endif