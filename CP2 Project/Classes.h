#include <string>
#include <iostream>
#include <vector>

class records
{
public:
    std::string *name;
    std::string *surname;
    int ID;
    std::string *date_of_birth;
    virtual void show();
    virtual void add_stu();
};

class subject : public records, public std::error_code {
public:
    double grade_av;
    subject(double grade_av, const std::string &name);
    subject(const subject &subject1);
    ~subject();
    void show() override;
};

class student : public records
{
public:
    std::vector<subject*> *subjects{new std::vector<subject*>};
    student(int ID, const std::string &name, const std::string &surname, const std::string &date_of_birth);
    student(const student &s);
    ~student();
    student();
    void add_subject(subject &s);
    void operator+(subject &s);
    void show() override;
    void add_stu() override;
};

