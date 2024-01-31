// DonorVerse main page
// This module handles the interface between the User and the application. 

//Importing required modules and Libraries
#include <iostream> //This is the iostream built in Library for C++ input output functions
#include <string>
// Importing namespaces in various modules into module
using namespace std;


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
      cout << "Something went wrong. Try again! \n \n";
      sel=4;
      continue;
      
    }
    }  
  }
