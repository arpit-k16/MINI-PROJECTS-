#include <iostream>
#include <iomanip> // for setw
using namespace std;
int main() { 
  string name;
  int cl,rn;                                               
  string sub1,sub2,sub3,sub4,sub5;                           //declaring variables
  int msub1,msub2,msub3,msub4,msub5;

  
  cout<<"Enter your roll number : ";
  cin>>rn;
  cout<<"Enter your name : ";                                //taking input from user
  cin>>name;
  cout<<"Enter your class : ";
  cin>>cl;
  cout<<"        " << endl;  
  cout<<"        " << endl;  
  cout<<"        " << endl;
  cout<<"        " << endl;  

  
  cout<<"Welcome!!"<<endl;
  cout<<"Roll number : "<<rn<<endl;
  cout<<"Name : "<<name<<endl;                                          //Welcoming the user
  cout<<"Class : "<<cl<<endl;
  cout<<"Please enter your marks of 5 subjects below to generate your report card : "<<endl;
  cout<<"        " << endl;  
  cout<<"        " << endl;  

  
  cout<<"Enter subject : ";
  cin>>sub1;
  cout<<"Enter marks in subject :";
  cin>>msub1;

  cout<<"Enter subject : ";
  cin>>sub2;
  cout<<"Enter marks in subject :";                                       //asking user to enter marks of 5 subjects
  cin>>msub2;

  cout<<"Enter subject : ";
  cin>>sub3;
  cout<<"Enter marks in subject :";
  cin>>msub3;

  cout<<"Enter subject : ";
  cin>>sub4;
  cout<<"Enter marks in subject :";
  cin>>msub4;

  cout<<"Enter subject : ";
  cin>>sub5;
  cout<<"Enter marks in subject :";
  cin>>msub5;
  cout<<"        " << endl;  
  cout<<"        " << endl;  
  cout<<"        " << endl;  
  cout<<"        " << endl;  
  
  cout<<"Your report card is as follows : "<<endl;
  cout<<"Roll no. : "<<rn<<endl;
  cout<<"Name : "<<name<<endl;
  cout<<"Class : "<<cl<<endl;

  cout << setw(10) << left << "Subject" << setw(5) << "Marks" << endl;                       
  cout << setw(10) << left << sub1 << setw(5) << msub1 << endl;                           //Generation of report card
  cout << setw(10) << left << sub2 << setw(5) << msub2 << endl;
  cout << setw(10) << left << sub3 << setw(5) << msub3 << endl;
  cout << setw(10) << left << sub4 << setw(5) << msub4 << endl;
  cout << setw(10) << left << sub5 << setw(5) << msub5 << endl;


  

float perc;
perc=(msub1+msub2+msub3+msub4+msub5)/5;
cout<<"Overall percentage : "<<perc<<" %"<<endl;
if (perc>=40 and perc<=100){
  cout<<"PASS"<<endl;
}                                                                                    //calculating the percentage and printing the result
else if(perc<40 and perc>=0){
  cout<<"FAIL"<<endl;
}
else{
  cout<<"Invalid percentage";
  
}
}
