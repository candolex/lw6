#pragma once
#include <time.h>
#include <iostream>
#include <Windows.h>
#include <string.h>
#include <iomanip>
using namespace std;

class Animal
{
protected:
    float number;
    string name;
    string about;

public:

    virtual void Print() = 0;
    virtual float Get_Pop() = 0;
    virtual string Get_name() = 0;
    virtual string Get_des() = 0;
    virtual void Set_Pop(float a) = 0;
    virtual void Set_name(string s) = 0;
    virtual void Set_des(string t) = 0;
    virtual string Get_Class() = 0;
    virtual string Get_Order() = 0;
    virtual ~Animal() {}
    Animal();
    Animal(float a, string s, string t);
};

class Birds : public Animal
{
    string animal_class;
public:
    virtual ~Birds() {}
    Birds();
    Birds(float a, string s, string t);
    string Get_Class();
};

class Reptiles : public Animal
{
    string class_anim;
public:
    virtual ~Reptiles() {}
    Reptiles();
    Reptiles(float a, string s, string t);
    string Get_Class();
};

class Mammals : public Animal
{
    string class_anim;
public:
    virtual ~Mammals() {}
    Mammals();
    Mammals(float a, string s, string t);
    string Get_Class();
};

class Predator : public Mammals
{
    string Order;
public:
    virtual ~Predator() {}
    Predator();
    Predator(float a, string s, string t);
    string Get_Order();
};

class Marten : public Predator
{
public:

    virtual ~Marten() {}
    Marten();
    Marten(float a, string s, string t);
    void Print();
    float Get_Pop();
    string Get_name();
    string Get_des();
    void Set_Pop(float a);
    void Set_name(string s);
    void Set_des(string t);
};

class Cats : public Predator
{
public:

    virtual ~Cats() {}
    Cats();
    Cats(float a, string s, string t);
    void Print();
    float Get_Pop();
    string Get_name();
    string Get_des();
    void Set_Pop(float a);
    void Set_name(string s);
    void Set_des(string t);
};

class Squamata : public Reptiles
{
    string Order;
public:
    virtual ~Squamata() {}
    Squamata();
    Squamata(float a, string s, string t);
    string Get_Order();
};

class Natrix : public Squamata
{
public:

    virtual ~Natrix() {}
    Natrix();
    Natrix(float a, string s, string t);
    void Print();
    float Get_Pop();
    string Get_name();
    string Get_des();
    void Set_Pop(float a);
    void Set_name(string s);
    void Set_des(string t);
};

class Viper : public Squamata
{
public:

    virtual ~Viper() {}
    Viper();
    Viper(float a, string s, string t);
    void Print();
    float Get_Pop();
    string Get_name();
    string Get_des();
    void Set_Pop(float a);
    void Set_name(string s);
    void Set_des(string t);
};

class Falcon_shaped : public Birds
{
    string Order;
public:

    virtual ~Falcon_shaped() {}
    Falcon_shaped();
    Falcon_shaped(float a, string s, string t);
    string Get_Order();
};

class Falcon : public Falcon_shaped
{
public:

    virtual ~Falcon() {}
    Falcon();
    Falcon(float a, string s, string t);
    void Print();
    float Get_Pop();
    string Get_name();
    string Get_des();
    void Set_Pop(float a);
    void Set_name(string s);
    void Set_des(string t);
};

class Hawk : public Falcon_shaped
{
public:

    virtual ~Hawk() {}
    Hawk();
    Hawk(float a, string s, string t);
    void Print();
    float Get_Pop();
    string Get_name();
    string Get_des();
    void Set_Pop(float a);
    void Set_name(string s);
    void Set_des(string t);
};

class RedBook
{
    Animal** AnimARR = new Animal * [6];
public:
    RedBook();
    void sizeofR_B(int i);
    void setR_B(int i, float a, string s, string t);
    void Print(int i);
    void Print_class(string s);
    void Print_order(string s);
    void Print_max();
    void Print_min();
    ~RedBook();
};