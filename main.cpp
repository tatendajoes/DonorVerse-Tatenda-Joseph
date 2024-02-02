// DonorVerse main page
// This module handles the interface between the User and the application. 

//Importing required modules and Libraries
#include <iostream> //This is the iostream built in Library for C++ input output functions
// Importing namespaces in various libraries into module
using namespace std;

// header declaration of some functions in this module
int get_integer(string prompt_txt); // This is a general function to get integer values alone from the cin function. 
void add_donor();
void search_donor();
void modify_donors();


int main() { //TJ – this introduces the first function the compiler will place in the compiled instructions

  int sel=4;
  while (sel>0 && sel<5){
    string prompt;
    prompt= "-------------------------------\n     MINORITY EMPOWERMENT\n      THROUGH TECHNOLOGY\n \n-------------------------------\n        Main Menu\n_______________________________\n \n  1. Add Donor or Donation \n  2. Search Donors \n  3. Modify Donors \n  4. Exit\n\n  Select: ";
    cout<< prompt;
    sel= get_integer(prompt);
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
  }

//function to get value
 int get_integer(string prompt_txt){
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


void add_donor(){
 //some code 
}
void search_donor(){
// some code  
}
void modify_donors(){
//some code  
}
