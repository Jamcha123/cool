#include <iostream>
#include <vector>
#include <iterator>
#include <memory>
#include <string>
#include <array>
#include <fstream>
#include <conio.h>
#include <chrono>
#include <thread>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <iomanip>
#include <bits/stdc++.h>

struct node1
{
    int data;
    node1* next;
    node1(int data)
    {
        this->data = data;
        next = 0;
    }
};
template<typename T>T mytype1(T x, T y, T z)
{
    std::ofstream file("link.txt", std::ios::app);
    node1* head = new node1(0);
    node1* second = new node1(0);
    node1* third = new node1(0);

    head->data = x;
    head->next = second;

    second->data = y;
    second->next = third;

    third->data = z;
    third->next = 0;

    file << head->data << " " << second->data << " " << third->data << " ";
}
class value1
{
    int x, y, z;
public:
    value1(int x, int y, int z):
        x(x), y(y), z(z)
        {
        }
        value1(const value1& value1)
        {
            mytype1<int>(x, y, z);
        }
};
struct node2
{
    char data;
    node2* next;
    node2(char data)
    {
        this->data = data;
        next = 0;
    }
};
template<typename T>T mytype2(T x, T y, T z)
{
    std::ofstream file("link.txt", std::ios::app);
    node2* head = new node2(0);
    node2* second = new node2(0);
    node2* third = new node2(0);

    head->data = x;
    head->next = second;

    second->data = y;
    second->next = third;

    third->data = z;
    third->next = 0;

    file << head->data << " " << second->data << " " << third->data << " ";
}
class value2
{
    char x, y, z;
public:
    value2(char x, char y, char z):
        x(x), y(y), z(z)
        {
        }
        value2(const value2& value2)
        {
            mytype2<char>(x, y, z);
        }
};
class entity
{
    std::array<int, 10> hello = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    char bye[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
    int snum1, snum2, snum3;
    int cnum1, cnum2, cnum3;
    std::vector<value1> vert1;
    std::vector<value2> vert2;
public:
    entity()
    {
        for(int i = 0; i < 100; i++)
        {
            snum1 = rand()%9 + 0;
            snum2 = rand()%9 + 0;
            snum3 = rand()%9 + 0;

            vert1.push_back(value1(hello[snum1], hello[snum2], hello[snum3]));
        }
    }
    ~entity()
    {
        for(int i = 0; i < 100; i++)
        {
            cnum1 = rand()%9 + 0;
            cnum2 = rand()%9 + 0;
            cnum3 = rand()%9 + 0;

            vert2.push_back(value2(bye[cnum1], bye[cnum2], bye[cnum3]));
        }
    }
};
class encdec
{
    int key;
    char c;
    char qwerty[20] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't'};
public:
    void encrypt();
    void decrypt();
};
void encdec::encrypt()
{
    std::cout << "enter a key : ";
    std::cin >>  key;

    c = rand()%19 + 0;
    c = qwerty[c];

    std::fstream fin, fout;
    fin.open("link.txt", std::fstream::in);
    fout.open("linkencrypt.txt", std::fstream::out);

    while(fin >> std::noskipws >> c)
    {
        int temp = (key + c);

        fout << (char)temp;
    }
    fin.close();
    fout.close();
}
void encdec::decrypt()
{
    std::cout << "enter a key : ";
    std::cin >> key;

    c = rand()%19 + 0;
    c = qwerty[c];

    std::fstream fin;
    std::fstream fout;

    fin.open("linkencrypt.txt", std::fstream::in);
    fout.open("linkdecrypyt.txt", std::fstream::out);

    while(fin >> std::noskipws >> c)
    {
        int temp = (key - c);

        fout << (char)temp;
    }
    fin.close();
    fout.close();
}
int main()
{
    int level;
    char choice;
    encdec e;
    srand(time(0));
    std::unique_ptr<entity> e1(new entity());
    do
    {
        system("cls");
        std::cout << "encrypt or decrypt" << std::endl;
        std::cout << "1. encrypt \n";
        std::cout << "2. decrypt \n";
        std::cin >> level;
        try{
            switch(level)
            {
            case 1:
                e.encrypt();
                break;
            case 2:
                e.decrypt();
                break;
            default:
                throw(level);
            }
        }
        catch(int n){
            std::cout << "wrong choice" << std::endl;
        }
        std::cout << "end(y/n)?";
        std::cin >> choice;
        if(choice == 'y' || choice == 'Y')
        {
            return 0;
        }
    }while(choice == 'n' || choice == 'N');
}
