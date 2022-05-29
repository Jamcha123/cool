#include <iostream>
#include <vector>
#include <iterator>
#include <memory>
#include <array>
#include <string>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <thread>
#include <fstream>
#include <conio.h>
#include <iomanip>
#include <algorithm>
#include <bits/stdc++.h>

struct metrcis
{
    uint32_t usage;
    uint32_t freed;

    uint32_t currentusage() {return usage - freed;}
};
static metrcis s_metrics;
void* operator new(size_t size)
{
    s_metrics.usage += size;

    return malloc(size);
}
void operator delete(void* memory, size_t size)
{
    s_metrics.freed += size;

    free(memory);
}
static void memoryusage()
{
    std::cout << "memory usage is " << s_metrics.currentusage() << " bytes" << std::endl;
}
class login
{
    std::string username, password, confirm, un, pw;
    int tries = 0;
    int pin;
    int code;
public:
    void create();
    void log1();
    void pinmode();
};
void login::create()
{

}
void login::log1()
{

}
template<typename T>T mytype1(T x, T y, T z)
{
    std::ofstream file("shitme.txt", std::ios::app);
}
class someshit
{
    std::array<int, 5> arr1 = {10, 20, 30, 40, 50};
    std::array<std::string, 5> arr2 = {"hello", "fuck", "china", "nice", "russia"};
    std::array<char, 5> arr3 = {'a', 'b', 'c', 'd', 'e'};
    std::array<double, 5> arr4 = {0.1, 0.2, 0.3, 0.4, 0.5};
    int dice;
    int num1, num2, num3, num4;
public:
    void games();
};
void someshit::games()
{
    for(int i = 0; i < 100; i++)
    {
        dice = rand()%1 + 0;
        switch(dice)
        {

        }
    }
}
int main()
{

}
