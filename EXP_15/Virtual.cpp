#include<iostream>
using namespace std;
class Employee
{
    protected:
        float salary;
    public:
        virtual void setSalary(float salary) = 0;
        virtual void raiseSalary(float percentage) = 0;
        virtual float getSalary() = 0;
};

class Engineer : public Employee
{
    public:
    Engineer()
    {
        salary = 0;
    }
    void setSalary(float salary)
    {
        this->salary = salary;
    }
    void raiseSalary(float percentage)
    {
        salary = salary + (salary * percentage / 100);
    }
    float getSalary()
    {
        return salary;
    }

};

class TeamLeader : public Employee
{
    public: 
    TeamLeader()
    {
        salary = 0;
    }
    void setSalary(float salary)
    {
        this->salary = salary;
    }
    void raiseSalary(float percentage)
    {
        salary = salary + (salary * percentage / 100);
    }
    float getSalary()
    {
        return salary;
    }
};

class Manager : public Employee
{
    public:
    Manager()
    {
        salary = 0;
    }
    void setSalary(float salary)
    {
        this->salary = salary;
    }
    void raiseSalary(float percentage)
    {
        salary = salary + (salary * percentage / 100);
    }
    float getSalary()
    {
        return salary;
    }
};

int main()
{
    Employee *e[3];
    e[0] = new Engineer;
    e[1] = new TeamLeader;
    e[2] = new Manager;
    float salary, percentage;
    cout<<"Enter salary for Engineer : ";
    cin>>salary;
    e[0] ->setSalary(salary);
    cout<<"Enter the percentage of raise :";
    cin>>percentage;
    e[0]->raiseSalary(percentage);
    cout<<"\nTotal salary of Enginner is : "<< e[0]->getSalary()<<endl;
}