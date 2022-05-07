#include <iostream>
#include <vector>
#include <iterator>
#include <memory>
#include <string>
#include <array>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <thread>
#include <fstream>
#include <conio.h>
#include <algorithm>
#include <iomanip>
#include <bits/stdc++.h>

struct metrics
{
    uint32_t usage;
    uint32_t freed;

    uint32_t currentusage() {return usage - freed;}
};
static metrics s_metrics;
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
class banks
{
    float amount;
    int dice1;
    int dice2;
    double procent;
    char choice1;
    char choice2;
public:
    void banking();
    void betodds();
    void worsodds();
    void gain();
    void loss();
};
void banks::banking()
{
    system("cls");
    std::cout << "gain or lose\n";
    std::cout << "enter a amount $: ";
    std::cin >> amount;
    memoryusage();
    if(amount >= 1000)
    {
        banks b;
        b.betodds();
    }else{
        banks b;
        b.worsodds();
    }
}
void banks::betodds()
{
    system("cls");
    memoryusage();
    std::cout << "more money, better odds" << std::endl;
    dice1 = rand()%3 + 1;
    switch(dice1)
    {
    case 1:
        banks a;
        a.gain();
        break;
    case 2:
        banks a;
        a.gain();
        break;
    case 3:
        banks a;
        a.loss();
        break;
    default:
        std::cout << "error" << std::endl;
        break;
    }
}
void banks::worsodds()
{
    system("cls");
    memoryusage();
    std::cout << "less money, worse odds" << std::endl;
    dice1 = rand()%3 + 1;
    switch(dice1)
    {
    case 1:
        banks a;
        a.loss();
        break;
    case 2:
        banks a;
        a.loss();
        break;
    case 3:
        banks a;
        a.gain();
        break;
    default:
        std::cout << "error" << std::endl;
        break;
    }
}
void banks::gain()
{
    std::cout << "yay, you can win money, roll the dice when ready(y/Y)";
    std::cin >> choice1;
    try{
        if(choice1 == 'Y' || choice1 == 'y')
        {

        }else{
            throw(choice1);
        }
    }
}
void banks::loss()
{

}
int main()
{

}
