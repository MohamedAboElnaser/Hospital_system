
  


## __Description__
- This projects is implementation of these [Requirements](https://drive.google.com/file/d/1movT2ciFGrM5PxFPW174_6ol6E60Z85p/view?usp=sharing)
  
  it contains four main options 
  - Add new patient.
  - Print All patients.
  - Get Next patient.
  - Exit.

    
 
so I implement two main classes  :

 - [Database](/headers/hospital_dataBase.h) Class (contains the database of the system).
 - [System](headers/system.h) Class (Contains all needed logic ).
  
## __Installation and Run__ 
 to run this app on your pc you should 
1. Download the repo to your pc.
2. open the CLI and got  tho the directory of the repo 
3. move to source directory, type this command
    ```c++ 
    g++ *.cpp -o ..\bin\Hospital 
    ```
4. navigate to bin directory type this : "`cd ..\bin`"
5. double click on the hospital.exe file or type : `.\Hospital.exe`
   
## Notes
- if the program ask the user to enter a name and the user enter int or  any thing else [The prog will crash :(  ]  I do not handel that.
