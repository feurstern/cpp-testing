#include<iostream>
#include<cstdio>

using namespace std;

class Employee{

    public:
    //properties of the employee
    
     string Name;
     string Company;
     string Education;
     int Age;

     void Introduction(){
         cout<<"Name: "<<Name;
         cout<<"\nCompany: "<<Company;
         cout<<"\nEducation: "<<Education;
         cout<<"\nAge:"<<Age;
     }

     void Salary(){

     }

     Employee(string name, string company, string education, int age){
         Name = name;
         Company = company;
         Education = education;
         Age = age;
     }
};

int main(){
    Employee employee1 = Employee("Muhammad Rio Kurniawan", "Mihoyo Ltd", "Computer Science Bachelor",24);
    employee1.Introduction();

    Employee employee2 =  Employee("Sakura Miyawaki", "SEGA Company", "Computer Science Bachelor", 21);
    employee2.Introduction();

    /*
    employee1.Name="Riooo";
    employee1.Company="PT. Nippon Cahaya Asia";
    employee1.Education = "Bachelor Computer Science";
    employee1.Age =24;

    employee1.Introduction() 
    */
  

}