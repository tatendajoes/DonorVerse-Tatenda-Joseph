// DonorVerse main page
// This module handles the interface between the User and the application. 

//Importing required modules and Libraries
#include <iostream> //This is the iostream built in Library for C++ input output functions
// Importing namespaces in various libraries into module
using namespace std;

// header declaration of some functions in this module
int errInt(string prompt_txt);
float errfloat(string prompt_txt);
string errStr(string prompt_txt);
void add_donor();
void search_donor();
void modify_donors();
int mainMenu();

int main(){
  mainMenu();
  
}

// main menu function
int mainMenu() { 
  int sel=4;
  while (sel>0 && sel<5){
    string prompt;
    prompt= "-------------------------------\n     MINORITY EMPOWERMENT\n      THROUGH TECHNOLOGY\n \n-------------------------------\n        Main Menu\n_______________________________\n \n  1. Add Donor or Donation \n  2. Search Donors \n  3. Modify Donors \n  4. Exit\n\n  Select: ";
    cout<< prompt;
    sel= errInt(prompt);
    switch(sel){
      case 1:
      add_donor();
      sel=0;
      continue;
      case 2:
      search_donor();
      sel=0;
      continue;
      case 3:
      modify_donors();
      sel=0;
      continue;
      case 4:
      cout<< "\n Exiting......... \n";
      cout << "Goodbye";
      sel=0;
      continue;
      default:
          cout << "Opps! Option is out of range. Try again! \n \n";
          sel=4;  
    }
    }
  return 1;
}
//function to get value
 int errInt(string prompt_txt){
  int opt=0;
  cin>> opt;
while(cin.fail()){
  cout << "Opps! Only integers accepted. Try again! \n \n";
  cin.clear();
  cin.ignore(256,'\n');
  cout<< prompt_txt;
  cin>> opt;
}
cin.clear();
cin.ignore(256,'\n');
return opt;
}
 int errfloat(string prompt_txt){
  float val=0;
  cin>> val; 
while(cin.fail()){
  cout << "Opps! Only float values accepted. Try again! \n \n";
  cin.clear();
  cin.ignore(256,'\n');
  cout<< prompt_txt;
  cin>> val;
}
cin.clear();
cin.ignore(256,'\n');
return val;
}
string errStr(string prompt_txt){
  string val=0;
  cin>> val; 
while(cin.fail()){
  cout << "Opps! You have to put something. Try again! \n \n";
  cin.clear();
  cin.ignore(256,'\n');
  cout<< prompt_txt;
  cin>> val;
}
cin.clear();
cin.ignore(256,'\n');
return val;
}   



void add_donor(){
 //some code 
  cout << "Unavailable. Function still in Development. \nBye!";
}
void search_donor(){
// some code  
  cout << "Unavailable. Function still in Development. \nBye!";
}
void modify_donors(){
//some code  
  cout << "Unavailable. Function still in Development. \nBye!";
}
