#include <iostream>
using namespace std;

class Employee{
private:
    string Name;
    string Company;
    int Age;

public:
    void setName(string name){
        Name = name;
    }
    string getName(){
        return Name;
    }
    void setCompany(string company){
        Company = company;
    }
    string getCompany(){
        return Company;
    }
    void setAge(int age){
        Age = age;
    }
    int getAge(){
        return Age;
    }

    void Intro(){
        cout<<"Name = "<<Name<<endl;
        cout<<"Company = "<<Company<<endl;
        cout<<"Age = "<<Age<<endl<<endl;
    }
    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }

};
int main(){
    Employee employee1 = Employee("abid", "vullarhat",8);
    employee1.Intro();

    Employee employee2 = Employee("Khalid", "botmri",10);
    employee2.Intro();

    employee1.setName("shuvo");
    employee1.setAge(567);
    cout<<employee1.getName()<<" is "<<employee1.getAge()
    <<" years old "<<employee1.getCompany()<<endl;

      return 0;
}

