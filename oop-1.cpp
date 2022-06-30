#include<iostream>
#include<cstdio>

using namespace std;

//create abstract class for Employee class

class AbstractEmployee{

    void GetPromotion(){

    }

    void BonusSalary(){

    }
};
class Employee: AbstractEmployee{
     //properties of the employee

     string Name;
     string Company;
     string Education;
     int Age;
     int WorklyHours;

    public:
     // declare setter and getter for Name
     void setName(string name){  //setter
         Name = name;
     }

     string getName(){  //getter
         return Name;
     }

     // declare setter and getter for Company objects

     void setCompany(string company){
         Company = company;
     }

     string getCompany(){
         return Company;
     }

     //declare setter and getter for Education object

     void setEducation(string education){
         Education = education;
     }

     string getEducation(){
         return Education;
     }

     // declare setter and getter for age object

     void setAge(int age){
         Age = age;
     }

     int getAge(){
         return Age;
     }

     void SetWorklyHours(int worklyHours){
         WorklyHours = worklyHours;
     }

     int getWorklyHours(){
         return WorklyHours;
     }


    
     void Introduction(){
         cout<<"\nName: "<<Name;
         cout<<"\nCompany: "<<Company;
         cout<<"\nEducation: "<<Education;
         cout<<"\nAge:"<<Age;
     }

     void GetPromotion(){
         if(Age>=30){
             cout<<Name<<" Congralutation, you got promoted!"<<endl;
         }
         else{
             cout<<Name<<" Sorry no promotion for you!"<<endl;

         }

     }

     void BonusSalary(){
         if(WorklyHours<=12){
             WorklyHours*=2;
             cout<<"Workly hours: "<<WorklyHours<<endl;
         }

         else if(WorklyHours<=25){
             WorklyHours*=3;
             cout<<"Workly hours: "<<WorklyHours<<endl;
         }

         else{
             WorklyHours*=4;
             cout<<"Workly hours: "<<WorklyHours<<endl;
         }


     }
    
    // this is a constructor 
     Employee(string name, string company, string education, int age, int worklyHours){
         Name = name;
         Company = company;
         Education = education;
         Age = age;
         WorklyHours = worklyHours;
     }

     
     //implemented polymorphism
     void Work(){
         cout<<getName()<< " doing some typing in computer"<<endl;
     }
};

// Inheritance or making derived class

class Developer : public Employee{

    string FavProgrammingLanguage;


    //declare setter and getter
    void setFavProgrammingLanguage(string favProgrammingLanguage){
        FavProgrammingLanguage = favProgrammingLanguage;
    }

    string getFavProgrammingLanguage(){
        return FavProgrammingLanguage;
    }
    public:

    Developer(string name, string company, string education, int age, int worklyHours, string favProgrammingLanguage):Employee(name, company,education, age,worklyHours)
    {
        FavProgrammingLanguage = favProgrammingLanguage;

        

    }
    void ProjectHasDone(){
            cout<<"I am using "<<FavProgrammingLanguage<<endl;
            cout<<"My name is"<<getName();
        }
    
     void Work(){
         cout<<getName()<< " is writing "<<FavProgrammingLanguage<<" for his project"<<endl;
     }
 
};

class Teacher: public Employee{
    
    public:
    string Subject;

    void PrepareLesson(){
        cout<<getName()<<" is preparing to teach"<<Subject<<" lesson!"<<endl;
    }

    Teacher(string name, string company, string education, int age, int worklyHour, string subject)
    :Employee(name,company,education,age, worklyHour){

        Subject =subject;

    }
};

int main(){
    Employee employee1 = Employee("Muhammad Rio Kurniawan", "Mihoyo Ltd", "Computer Science Bachelor",24,50);
    employee1.Introduction();

    Employee employee2 =  Employee("Sakura Miyawaki", "SEGA Company", "Computer Science Bachelor", 31,40);
    employee2.Introduction();

    employee1.setName("Hatsune Miku");
    cout<<employee1.getName()<<"\nYour age is "<<employee1.getAge()<<" years old!"<<endl;

    employee1.GetPromotion();
    employee2.GetPromotion();
    employee1.BonusSalary();


    Developer developer1 = Developer("Rio","Mihoyo Tech Otakus", "COmputer Science", 23, 40, "C++, JavaScript");
    developer1.ProjectHasDone();
    developer1.GetPromotion();
   
    /*//properties of the employee without constructor

    employee1.Name="Riooo";
    employee1.Company="PT. Nippon Cahaya Asia";
    employee1.Education = "Bachelor Computer Science";
    employee1.Age =24;

    employee1.Introduction() 
    */
  

}