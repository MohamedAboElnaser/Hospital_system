#include "../headers/hospital_dataBase.h"

void Database::creat_Database(int number_of_specifications) {
        for(int i=0;i<number_of_specifications;i++)
        db.push_back(deque<Patient>());
} 


 
   
 