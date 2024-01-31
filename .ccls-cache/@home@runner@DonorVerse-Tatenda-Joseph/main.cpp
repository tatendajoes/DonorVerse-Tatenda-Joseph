// DonorVerse main page
// This module handles the interface between the User and the application. 

//Importing required modules and Libraries
#include <iostream> //This is the iostream built in Library for C++ input output functions
#include "data_structures.cpp"

// Importing namespaces in various modules into module
using namespace std;
using namespace definitions;


void add_donor(){
  cout<< "Something about donors";
}
void search_donor(){
  cout<< "Something about searching donors";
}
void modify_donors(){
  cout<< "Something about modifying donors";
}
int main() { //TJ – this introduces the first function the compiler will place in the compiled instructions

  int sel=4;
  while (sel>0 && sel<5){
    cout<< "MINORITY EMPOWERMENT  \n THROUGH TECHNOLOGY \n \n";
    cout << "Main Menu \n \n";
    cout << "1. Add Donor or Donation \n \n";
    cout << "2. Search Donors \n \n";
    cout << "3. Modify Donors \n \n";
    cout << "4. Exit \n \n";
    cout << "Select: ";
    cin >> sel;
    switch(sel){
      case 1:
        sel=0;
      add_donor();
      case 2:
        sel=0;
      search_donor();
      case 3:
        sel=0;
      modify_donors();
      case 4:
      sel=0;
      cout<< "\n Exiting......... \n";
      cout << "Goodbye";
      default:
      cout << "Something went wrong. Try again!";
      sel=4;
    }
    }  
  }
