#include <iostream>
using namespace std;

void sayHello()
{
    puts("Heloe there??");
}

int sayTwo(){
    // puts("its two !!!");
    return 2 ; 
}

void sayThree(){
    puts("3");
}
int main()
{
    sayHello();
    printf("%d\n",sayTwo()+4);
    sayThree();

    return 0;
}
