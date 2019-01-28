
#include<iostream>
using namespace std;

class Person
{

  string name;
  string contact_number;
  public:
      Person(){};
      Person(string name,string contact_number)
      {
          this->name=name;
          this->contact_number;
      }
      void displayPerson()
      {
          cout<<"Name:"<<this->name<<endl;
          cout<<"Contact number: "<<this->contact_number<<endl;
      }
      void getName()
      {
          cout<<this->name<<endl;
          cout<<this->contact_number<<endl;
      }

};

class Author : public Person
{
    string City;
public:
    Author(){};
    Author(string name,string contact_number,string City): Person(name,contact_number)
    {
        this->City=City;
    }
    void displayAuthor()
    {
        cout<<"Author city name:"<<this->City<<endl;
    }
    void getAuthor()
    {
        getName();
    }
};

class Customer : public Person
{
    int customer_ID;

public:
    Customer(){};
    Customer(string name,string contact_number,int customer_ID):Person(name,contact_number)
    {
        this->customer_ID=customer_ID;
    }

     void displayCustomer()
    {
        displayPerson();
        cout<<"Customer Id :"<<this->customer_ID<<endl;
    }
};

class Sellsman : public Person
{
    int Sellsman_ID;
public:
    Sellsman(){};
    Sellsman(string name,string contact_number,int Sellsman_ID) : Person(name,contact_number)
    {
        this->Sellsman_ID=Sellsman_ID;
    }
    void viewSellsman()
    {
        displayPerson();
        cout<<"Sellsman id no :"<<this->Sellsman_ID<<endl;
    }
};

class BookStore
{
    string name;
    int id;
public:
    BookStore(){};
    BookStore(string name,int id)
    {
        this->name=name;
        this->id=id;
    }
    void viewBookStore()
    {
        cout<<"Store Name:"<<this->name<<endl;
        cout<<"Store id :"<<this->id<<endl;
    }
};

class Book
{
    string BookTitle;
     Author author;
    int price;
    int quantity;
    int serial_number;
public:

    Book(){};
    Book(string BookTitle,Author author,int price,int quantity,int serial_number)
    {
        this->BookTitle=BookTitle;
        this->author=author;
        this->price=price;
        this->quantity=quantity;
        this->serial_number=serial_number;
    }

    void viewBook()
    {
        cout<<"Book Tittle:"<<this->BookTitle<<endl;
        cout<<"Writter Name: ";
        author.getAuthor();
        cout<<endl;
        cout<<"Price of the Book:"<<this->price<<endl;
        cout<<"Quantity Of the Book:"<<this->quantity<<endl;
        cout<<"Serial No Of the Book:"<<this->serial_number<<endl;
    }
};
class Category
{
    string name;
public:

    Category(){};
    Category(string name)
    {
        this->name=name;
    }
    void displayCategory()
    {
        cout<<"Ctegory Name;"<<this->name<<endl;
    }
};

int main()
{
    int i;
    Category *category[3]=
    {
        new Category("Fiction"),
        new Category("non-fiction"),
        new Category ("Comics")
    };

    Customer *customer[3]=
    {
        new Customer("Akash","018344657283",1001),
        new Customer("Shakil","019646534",1002),
        new Customer("Anik","01734567890",1003)
    };
    Author *author[3]
    {
        new Author("Jaffor Ikbal Sir","01645678901","Shylet"),
        new Author("Robindronath","01765432876","Dhaka"),
        new Author("Shamsor Rahman","01987654876","Kurigram")
    };
    /*
    Book *book[3]=
    {
        new Book("Moyorakkhi","Jaffor Ikbal",250,13,1001),
        new Book("Janina","Samsur Rahman",270,16,1002),
        new Book("Sesher Kobita","Robindronath Thakor",240,18,1003)
    }
    cout<<".... Book Information....."<<endl;
    for(i=0;i<3;i++)
    {
        book[i]->viewBook();
    }
    cout<<" "<endl;
    */

    cout<<".... Author Information....."<<endl<<endl;
    for(i=0;i<3;i++)
    {
        author[i]->displayAuthor();
    }
    cout<<"   "<<endl;

    cout<<".... Book Ctegory Information....."<<endl<<endl;
    for(i=0;i<3;i++)
    {

        category[i]->displayCategory();
    }
    cout<<"   "<<endl;

    int MonthlyFrequency[3]={3,0,4};

    cout<<"...Customer Has Discount..."<<endl<<endl;
    for(i=0;i<3;i++)
    {
        if(MonthlyFrequency[i]>=3)
        {
            customer[i]->displayCustomer();
        }
    }

};
