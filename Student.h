#pragma once
#include "Person.h"
#include <string>
class Student :
    public Person//Person »ó¼Ó
{
private:
    string ID;
public:
    Student(string name, int age, string ID);
    Student(const Student& other);
    ~Student();

public:
    void info() const;

};

