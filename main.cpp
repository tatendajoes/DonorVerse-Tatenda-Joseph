// DonorVerse main page
// This module handles the interface between the User and the application. 
#include <iostream>
using namespace std;

// In this main function a loop is implemented which continues to run until a vaild Menu input is inserted
int main() {
  int sel=0;
  while (sel<1 || sel>4){
    cout<< "MINORITY EMPOWERMENT  \n THROUGH TECHNOLOGY \n \n";
    cout << "Main Menu \n \n";
    cout << "1. Add Donor or Donation \n \n";
    cout << "2. Search Donors \n \n";
    cout << "3. Modify Donors \n \n";
    cout << "4. Exit \n \n";
    cout << "Select: ";
    cin>> sel;
  }
}