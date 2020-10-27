#include <iostream>
#include <cmath>
#include <math.h>
int main()
{
    {
        int x;
        std::cout << "Enter x:";
        std::cin >> x;
        int y;
        std::cout << "Enter y:";
        std::cin >> y;
        int z;
        std::cout << "Enter z:";
        std::cin >> z;
        if (x % 2 == 1 && y == 1)
            std::cout << "condition is true";
        else
            std::cout << "condition is false";//1.1
    }

    {
        int x;
        std::cout << "Enter x:";
        std::cin >> x;
        int y;
        std::cout << "Enter y:";
        std::cin >> y;
        if (x >= 20 > y || y >= 20 > x)
            std::cout << "condition is true";
        else
            std::cout << "condition is false";//1.2
    }

    {
        int x;
        std::cout << "Enter x:";
        std::cin >> x;
        int y;
        std::cout << "Enter y:";
        std::cin >> y;
        if (x == 0 || y == 0)
            std::cout << "condition is true";
        else
            std::cout << "condition is false";//1.3
    }

    {
        int x;
        std::cout << "Enter x:";
        std::cin >> x;
        int y;
        std::cout << "Enter y:";
        std::cin >> y;
        int z;
        std::cout << "Enter z:";
        std::cin >> z;
        if (x < 0 && y < 0 && z < 0)
            std::cout << "condition is true";
        else
            std::cout << "condition is false";//1.4
    }

    {
        int x;
        std::cout << "Enter x:";
        std::cin >> x;
        int y;
        std::cout << "Enter y:";
        std::cin >> y;
        int z;
        std::cout << "Enter z:";
        std::cin >> z;
        if (((x % 5 == 0) && y % 5 != 0 && z % 5 != 0) || (x % 5 != 0 && (y % 5 == 0) && z % 5 != 0) ||
            (x % 5 != 0 && y % 5 != 0 && (z % 5 == 0)))
            std::cout << "condition is true";
        else
            std::cout << "condition is false";//1.5
    }

    {
        int x;
        std::cout << "Enter x:";
        std::cin >> x;
        int y;
        std::cout << "Enter y:";
        std::cin >> y;
        int z;
        std::cout << "Enter z:";
        std::cin >> z;
        if (x > 100 || y > 100 || z > 100)
            std::cout << "condition is true";
        else
            std::cout << "condition is false";//1.6
    }

    {
        std::pair<char, char> positionA;
        std::cin >> positionA.first >> positionA.second;
        std::pair<char, char> positionB;
        std::cin >> positionB.first >> positionB.second;

        if ((positionA.first == positionB.first) || (positionA.second == positionB.second))
            std::cout << "The rook can go like that";
        else
            std::cout << "The rook can't go like that!!!"; //2.1
    }

    {
        std::pair<char, char> positionA;
        std::cin >> positionA.first >> positionA.second;
        std::pair<char, char> positionB;
        std::cin >> positionB.first >> positionB.second;
        if (abs(positionA.first - positionA.second) == abs(positionB.first - positionB.second))
            std::cout << "The eliphant can go like that";
        else
            std::cout << "The eliphant can't go like that!!!"; //2.2
    }

    {
        std::pair<char, char> positionA;
        std::cin >> positionA.first >> positionA.second;
        std::pair<char, char> positionB;
        std::cin >> positionB.first >> positionB.second;
        if ((abs(positionA.first - positionB.first) == 1) && (abs(positionA.second - positionB.second) == 1))
            std::cout << "The king can go like that";
        else
            std::cout << "The king can't go like that!!!"; //2.3
    }

    {
        std::pair<char, char> positionA;
        std::cin >> positionA.first >> positionA.second;
        std::pair<char, char> positionB;
        std::cin >> positionB.first >> positionB.second;
        if ((positionA.first == positionB.first) || (positionA.second == positionB.second) ||
            (abs(positionA.first - positionA.second) == abs(positionB.first - positionB.second)))
            std::cout << "The queen can go like this";
        else
            std::cout << "The queen can't go like this!!!"; //2.4
    }
    {
        std::pair<char, char> positionA;
        std::cin >> positionA.first >> positionA.second;
        std::pair<char, char> positionB;
        std::cin >> positionB.first >> positionB.second;
        if( (positionA.first == positionB.first) && ((positionA.second-positionB.second)==1))
            std::cout << "The pawn will reach in one step";
        else
            std::cout << "The pawn will not reach in one step!!!"; //2.5.1
    }
    {
        std::pair<char, char> positionA;
        std::cin >> positionA.first >> positionA.second;
        std::pair<char, char> positionB;
        std::cin >> positionB.first >> positionB.second;
        if( ((positionA.first - positionB.first)==1) && ((positionA.second-positionB.second)==1))
            std::cout << "The pawn will eat in one step";
        else
            std::cout << "The pawn will not eat in one step!!!"; //2.5.2
    }

    {
        int j = 7;
        for(int i = 1; i <=9; ++i)
                    std::cout <<i <<" * "<<j <<" = "<<i*j <<std::endl;
         //3.1
    }

    {
        int n;
        std::cout << "n=";
        std::cin >> n;
        for(int i = 1; i <=9; ++i)
            std::cout <<i <<" * "<<n <<" = "<<i*n <<std::endl;
         //3.2
    }

    {
        for(int i = 8; i <=15; ++i)
        {
            for(int j = 8; j <=15; ++j)
                std::cout <<i <<" * "<<j <<" = "<<i*j <<std::endl;
        } //4.1
    }

    {
        int a;
        std::cout << "a(from 1 to 20)=";
        std::cin >> a;
        for(int i = a; i <=20; ++i)
        {
            for(int j = a; j <=20; ++j)
                std::cout <<i <<" * "<<j <<" = "<<i*j <<std::endl;
        } //4.2
    }

    {
        int a;
        std::cout << "a(from 1 to 20)=";
        std::cin >> a;
        for(int i = 1; i <=a; ++i)
        {
            for(int j = 1; j <=a; ++j)
                std::cout <<i <<" * "<<j <<" = "<<i*j <<std::endl;
        } //4.3
    }

    {
        int a;
        std::cout << "a(from 1 to 20)=";
        std::cin >> a;
        int b;
        std::cout << "b(from 1 to 20)=";
        std::cin >> b;
        for(int i = a; i <=b; ++i)
        {
            for(int j = a; j <=b; ++j)
                std::cout <<i <<" * "<<j <<" = "<<i*j <<std::endl;
        } //4.4
    }
    system("pause");
    return 0;
}
