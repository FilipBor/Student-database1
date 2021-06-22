#include "Classes.h"
void records::show()
{
    std::cout<<"Name: "<<*this->name<<"surname: "<<*this->surname<<"ID: "<<this->ID<<"date of birth: "<<*this->date_of_birth<<std::endl;
}
void records::add_stu()
{
    std::string temp;
    std::cin >>temp;
    this->name = &temp;
    this->surname = &temp;
    this->date_of_birth = &temp;
    int i;
    std::cin >> i;
    this->ID = i;
}
student::student(int ID, const std::string &name, const std::string &surname, const std::string &date_of_birth) {
    this->ID = ID;
    this->name = new std::string(name);
    this->surname = new std::string(surname);
    this->date_of_birth = new std::string(date_of_birth);
    std::cout <<"A student: "<<this->ID <<" has been created"<<std::endl;
}
student::student(const student &s) {
    this->ID = s.ID;
    s.name ? this->name = new std::string(*s.name) : this->name = nullptr;
    s.surname ? this->surname = new std::string(*s.surname) : this->surname = nullptr;
    s.date_of_birth ? this->date_of_birth = new std::string(*s.date_of_birth) : this->date_of_birth = nullptr;
    s.subjects ? this->subjects = new std::vector<subject*>(*s.subjects) : this->subjects = nullptr;
}
void student::show()
{
    std::cout<<"Name: "<<*this->name<<" surname: "<<*this->surname<<" ID: "<<this->ID<<" date of birth: "<<*this->date_of_birth<<" ";
    for(auto student : *this->subjects)
    {
        student->show();
    }
}
student::~student() {
    delete this->name;
    delete this->surname;
    delete this->date_of_birth;
    delete this->subjects;
}
student::student() = default;
subject::subject(double grade_av, const std::string &name)
{
    this->grade_av = grade_av;
    this->name = new std::string(name);
}
subject::subject(const subject &subject1) {
    this->grade_av = subject1.grade_av;
    subject1.name ? this->name = new std::string(*subject1.name) : this->name = nullptr;
}
subject::~subject() {
    delete this->name;
}
void subject::show() {
    std::cout<<*this->name<<" grade average: "<<this->grade_av<<"\n";
}
void student::add_subject(subject &s) {
    subjects->push_back(&s);
}
void student::operator+(subject &s) {this->add_subject(s);}
void student::add_stu()
{
    std::string name, surname, date_of_birth;
    int ID;
    std::cin >> name;
    std::cin >> surname;
    std::cin >> date_of_birth;
    std::cin >> ID;
}