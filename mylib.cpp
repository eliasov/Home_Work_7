#include <iostream>

using namespace std;

namespace mylib
{
    //Для 3-го задания
#define SWAP_INT(x, y) int temporary = x; x = y; y = temporary;

    void sortingDar(int* dar, short size)
    {
        for (size_t i = 0; i < size - 1; i++)
        {
            for (size_t k = 0; k < size - i - 1; k++)
            {
                if (dar[k] > dar[k + 1])
                {
                    SWAP_INT(dar[k], dar[k + 1]);
                }
            }
        }
    }

    
    void printDar(int* dar, short size)
    {
        std::cout << dar[0];
        for (size_t i = 0; i < size; i++)
        {
            std::cout << " " << dar[i];
        }
        std::cout << std::endl;
    }



    float* create_InitDar(short size)
    {
        float* dar = new (nothrow) float[size];
        if (dar != nullptr)
        {
            for (size_t i = 0; i < size; i++)
            {
                dar[i] = (rand() % 100) - 50.0f;
            }
        }
        return dar;
    }

    void pol(float* dar, short size, int *pol)
    {
        *pol = 0;
        for (size_t i = 0; i < size; i++)
        {
            if (dar[i] > 0)
            {
                pol++;
            }
        }
        std::cout << *pol << std::endl;
    }

    void min(int* dar, short size, int *min)
    {
   
        *min = 0;

        for (size_t i = 1; i < size; i++)
        {
            if (dar[i] < 0)
            {
                min += 1;
            }
        }
            std::cout << *min << std::endl;
    }

    

   }



int main()
{
    
    return 0;
}
