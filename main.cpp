#include <sys/types.h>
#include <unistd.h>
#include <iostream>

using namespace std;

int main() {
    const pid_t pid = fork();
    cout << "------------------------------------" << endl;
    cout << "pid: " << pid << endl;
    if (pid == 0) {
        cout << "I am the child process" << endl;
        cout << "My father is process " << getppid() << endl;
    } else if (pid > 0) {
        cout << "I am now the parent process of " << pid << endl;
    } else {
        cout << "No child process could be created" << endl;
    }
    cout << "My pid is: " << getpid() << endl;
    cout << "------------------------------------" << endl;
    return 0;
}