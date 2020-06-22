//Write a C++ program to overload > operator
//Given 2 numbers find the big of 2 numbers (objects) using operator overloading.

#include <iostream>
using namespace std;

class Max
{
    int num = 0;

public:
    void init(int f)
    {
        num = f;
    }
    bool operator>(Max s2)
    {
        if (num > s2.num)
            return true;

        return false;
    }

    int display()
    {
        return num;
    }
};

int main()
{
    Max s1, s2;
    int t, j;
    int x, y;

    scanf("%d", &t);
    if (t >= 1 && t <= 100)
    {
        for (j = 0; j < t; j++)
        {
            cin >> x >> y;
            if (x >= 1 && x <= 1000 && y >= 1 && y <= 1000)
            {
                s1.init(x);
                s2.init(y);

                if (s1 > s2)
                    cout << s1.display() << endl;
                else if (s2 > s1)
                    cout << s2.display() << endl;
            }
        }
    }

    return 0;
}