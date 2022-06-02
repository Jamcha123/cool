#include <iostream>
#include <array>
#include <iterator>
#include <memory>
#include <string>
#include <array>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <thread>
#include <cstdlib>
#include <ctime>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>

int main()
{
    std::array<int, 4> arr1 = {2, 4, 1, 3};
    int num = 0;
    int sum1, sum2, sum3, sum4;
    int mainsum;
    int number2 = 2;
    int number = 1;
    std::vector<int> vec;
    for(int i = 0; i < arr1.size(); i++)
    {
        try{
            switch(num)
            {
            case 0:
                sum1 = arr1[num];
                break;
            case 1:
                sum2 = arr1[num];
                break;
            case 2:
                sum3 = arr1[num];
                break;
            case 3:
                sum4 = arr1[num];
                break;
            default:
                throw(num);
            }
            num++;
        }
        catch(int n){
            break;
        }
    }
    mainsum = sum1 + sum2 + sum3 + sum4;
    for(int i = 0; i < 1; i++)
    {
        mainsum = mainsum / mainsum;
        vec.push_back(mainsum);

        mainsum = mainsum * number2;
        vec.push_back(mainsum);

        mainsum = mainsum + number;
        vec.push_back(mainsum);

        mainsum = mainsum + number;
        vec.push_back(mainsum);
    }
    for(int vec : vec)
    {
        std::cout << vec << " ";
    }

}
