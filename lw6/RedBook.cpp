#include "RedBook.h"
Animal::Animal() {
    number = 0;
    string name;
    string description;
}
Animal::Animal(float a, string s, string t) {
    number = a;
    name = s;
    about = t;
}

Mammals::Mammals() : Animal() { class_anim = "Mammal"; }
Mammals::Mammals(float a, string s, string t) : Animal(a, s, t) {
    class_anim = "Mammal";
}

string Mammals::Get_Class()
{
    return class_anim;
}
Predator::Predator() : Mammals() { Order = "Predators"; }
Predator::Predator(float a, string s, string t) : Mammals(a, s, t) { Order = "Predators"; }

string Predator::Get_Order()
{
    return Order;
}

Marten::Marten() : Predator() {}
Marten::Marten(float a, string s, string t) : Predator(a, s, t) {}
void Marten::Print() {
    cout << endl;
    cout << "\t" << name << endl << "\tClass - " << this->Get_Class() << endl << "\tNumber - " << Get_Order() << "\n\tPopulation : " << number;
    cout << endl << '\t';
    for (int i = 0; i < 30; i++)
        cout << "-  "; cout << endl;
    cout << endl << "\t" << about; cout << endl;
    cout << endl << '\t';
    for (int i = 0; i < 46; i++)
        cout << "* ";
}
float Marten::Get_Pop()
{
    return number;
}
string Marten::Get_name()
{
    return name;
}
string Marten::Get_des()
{
    return about;
}
void Marten::Set_Pop(float a)
{
    number = a;
}
void Marten::Set_name(string s)
{
    name = s;
}
void Marten::Set_des(string t)
{
    about = t;
}
Cats::Cats() : Predator() {}
Cats::Cats(float a, string s, string t) : Predator(a, s, t) {}
void Cats::Print() {
    cout << endl;
    cout << "\t" << name << endl << "\tClass - " << this->Get_Class() << endl << "\tNumber - " << Get_Order() << "\n\tPopulation : " << number;
    cout << endl << '\t';
    for (int i = 0; i < 30; i++)
        cout << "-  "; cout << endl;
    cout << endl << "\t" << about; cout << endl;
    cout << endl << '\t';
    for (int i = 0; i < 46; i++)
        cout << "* ";
}
float Cats::Get_Pop()
{
    return number;
}
string Cats::Get_name()
{
    return name;
}
string Cats::Get_des()
{
    return about;
}
void Cats::Set_Pop(float a)
{
    number = a;
}
void Cats::Set_name(string s)
{
    name = s;
}
void Cats::Set_des(string t)
{
    about = t;
}
Reptiles::Reptiles() : Animal() { class_anim = "Reptiles"; }
Reptiles::Reptiles(float a, string s, string t) : Animal(a, s, t) {
    class_anim = "Reptiles";
}

string Reptiles::Get_Class()
{
    return class_anim;
}
Squamata::Squamata() : Reptiles() { Order = "Scaly"; }
Squamata::Squamata(float a, string s, string t) : Reptiles(a, s, t) { Order = "Scaly"; }

string Squamata::Get_Order()
{
    return Order;
}
Natrix::Natrix() : Squamata() {}
Natrix::Natrix(float a, string s, string t) : Squamata(a, s, t) {}
void Natrix::Print() {
    cout << endl;
    cout << "\t" << name << endl << "\tClass - " << this->Get_Class() << endl << "\tNumber - " << Get_Order() << "\n\tPopulation : " << number;
    cout << endl << '\t';
    for (int i = 0; i < 30; i++)
        cout << "-  "; cout << endl;
    cout << endl << "\t" << about; cout << endl;
    cout << endl << '\t';
    for (int i = 0; i < 46; i++)
        cout << "* ";
}
float Natrix::Get_Pop()
{
    return number;
}
string Natrix::Get_name()
{
    return name;
}
string Natrix::Get_des()
{
    return about;
}
void Natrix::Set_Pop(float a)
{
    number = a;
}
void Natrix::Set_name(string s)
{
    name = s;
}
void Natrix::Set_des(string t)
{
    about = t;
}
Viper::Viper() : Squamata() {}
Viper::Viper(float a, string s, string t) : Squamata(a, s, t) {}
void Viper::Print() {
    cout << endl;
    cout << "\t" << name << endl << "\tClass - " << this->Get_Class() << endl << "\tNumber - " << Get_Order() << "\n\tPopulation : " << number;
    cout << endl << '\t';
    for (int i = 0; i < 30; i++)
        cout << "-  "; cout << endl;
    cout << endl << "\t" << about; cout << endl;
    cout << endl << '\t';
    for (int i = 0; i < 46; i++)
        cout << "* ";
}
float Viper::Get_Pop()
{
    return number;
}
string Viper::Get_name()
{
    return name;
}
string Viper::Get_des()
{
    return about;
}
void Viper::Set_Pop(float a)
{
    number = a;
}
void Viper::Set_name(string s)
{
    name = s;
}
void Viper::Set_des(string t)
{
    about = t;
}
Birds::Birds() : Animal() { animal_class = "Birds"; }
Birds::Birds(float a, string s, string t) : Animal(a, s, t) {
    animal_class = "Birds";
}

string Birds::Get_Class()
{
    return animal_class;
}
Falcon_shaped::Falcon_shaped() : Birds() { Order = "Falcons"; }
Falcon_shaped::Falcon_shaped(float a, string s, string t) : Birds(a, s, t) { Order = "Falcons"; }

string Falcon_shaped::Get_Order()
{
    return Order;
}
Falcon::Falcon() : Falcon_shaped() {}
Falcon::Falcon(float a, string s, string t) : Falcon_shaped(a, s, t) {}
void Falcon::Print() {
    cout << endl;
    cout << "\t" << name << endl << "\tClass - " << this->Get_Class() << endl << "\tNumber - " << Get_Order() << "\n\tPopulation : " << number;
    cout << endl << '\t';
    for (int i = 0; i < 30; i++)
        cout << "-  "; cout << endl;
    cout << endl << "\t" << about; cout << endl;
    cout << endl << '\t';
    for (int i = 0; i < 46; i++)
        cout << "* ";
}

float Falcon::Get_Pop()
{
    return number;
}
string Falcon::Get_name()
{
    return name;
}
string Falcon::Get_des()
{
    return about;
}
void Falcon::Set_Pop(float a)
{
    number = a;
}
void Falcon::Set_name(string s)
{
    name = s;
}
void Falcon::Set_des(string t)
{
    about = t;
}
Hawk::Hawk() : Falcon_shaped() {  }
Hawk::Hawk(float a, string s, string t) : Falcon_shaped(a, s, t) {  }
void Hawk::Print() {
    cout << endl;
    cout << "\t" << name << endl << "\tClass - " << this->Get_Class() << endl << "\tNumber - " << Get_Order() << "\n\tPopulation : " << number;
    cout << endl << '\t';
    for (int i = 0; i < 30; i++)
        cout << "-  "; cout << endl;
    cout << endl << "\t" << about; cout << endl;
    cout << endl << '\t';
    for (int i = 0; i < 46; i++)
        cout << "* ";
}

float Hawk::Get_Pop()
{
    return number;
}
string Hawk::Get_name()
{
    return name;
}
string Hawk::Get_des()
{
    return about;
}
void Hawk::Set_Pop(float a)
{
    number = a;
}
void Hawk::Set_name(string s)
{
    name = s;
}
void Hawk::Set_des(string t)
{
    about = t;
}
RedBook::RedBook() {}
void RedBook::sizeofR_B(int i)
{
    cout << sizeof * AnimARR[i];
    cout << endl;
    cout << sizeof AnimARR[i];

}
void RedBook::setR_B(int i, float a, string s, string t)
{
    if (s == "Hawk")
    {
        AnimARR[i] = new Hawk;
    }
    else if (s == "Falcon")
    {
        AnimARR[i] = new Falcon;
    }
    else if (s == "Snake")
    {
        AnimARR[i] = new Natrix;
    }
    else if (s == "Viper")
    {
        AnimARR[i] = new Viper;
    }
    else if (s == "Marten")
    {
        AnimARR[i] = new Marten;
    }
    else if (s == "Cat")
    {
        AnimARR[i] = new Cats;
    }
    AnimARR[i]->Set_Pop(a);
    AnimARR[i]->Set_name(s);
    AnimARR[i]->Set_des(t);


}

void RedBook::Print(int i) {

    AnimARR[i]->Print();

}
void RedBook::Print_class(string s) {

    for (int i = 0; i < 6; i++)
    {
        if (s == AnimARR[i]->Get_Class())
            AnimARR[i]->Print();
    }

}
void RedBook::Print_order(string s) {

    for (int i = 0; i < 6; i++)
    {

        if (s == AnimARR[i]->Get_Order())
            AnimARR[i]->Print();
    }

}
void RedBook::Print_max() {
    float max; int j = 0;
    max = AnimARR[0]->Get_Pop();
    for (int i = 1; i < 6; i++)
    {
        if (max < AnimARR[i]->Get_Pop())
        {
            j = i;
            max = AnimARR[i]->Get_Pop();
        }
    }
    cout << "\t\tThe largest population - \n";
    AnimARR[j]->Print();
}
void RedBook::Print_min() {
    float min; int j = 0;
    min = AnimARR[0]->Get_Pop();
    for (int i = 1; i < 6; i++)
    {
        if (min > AnimARR[i]->Get_Pop())
        {
            j = i;
            min = AnimARR[i]->Get_Pop();
        }
    }
    cout << "\t\tThe smallest population - \n";
    AnimARR[j]->Print();
}

RedBook::~RedBook() { delete[] AnimARR; }