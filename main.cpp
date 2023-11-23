#include "Initializing.hpp"
#include "Hide.hpp"
#include "Paint.hpp"
#include "Over.hpp"
#include "Generated.hpp"
#include "Move.hpp"
#include "Test.hpp"
#include "FreeMap.hpp"
#include "Run.hpp"

int main()
{
    int size;
    std::cout<<"Please input the size of the map: ";
    std::cin>>size;
    Initializing("2048 games",size);
    run();
    return 0;
}