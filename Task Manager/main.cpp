#include <iostream>
#include "Task Manager.h"

using namespace std;

int main()
{
    cout << "=== Task Manager ===" << endl;

    ShowTasks();
    AddTask();
	RemoveTask();
    

    return 0;
}