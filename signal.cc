#include <iostream>
#include <csignal>
#include <unistd.h>

using namespace std;

void signalHandler(int signum)
{
    cout << "Interrupt signal (" << signum << ") received.\n";
    exit(signum);
}

int main()
{
    // register signal and the programmer processing signal
    signal(SIGINT, signalHandler);
    while(1)
    {
        cout << "Going to sleep...." << endl;
        sleep(1);
    }
    return 0;
}
