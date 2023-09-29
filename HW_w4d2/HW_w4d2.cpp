#include <iostream>
#include <ctime>
#include <windows.h>
#include <queue>
#include "Queue.h"
using namespace std;

int main()
{
    QueuePriority printer(10);
    printer.Add("student", 1);
    printer.Add("director", 5);
    printer.Add("manager1", 4);
    printer.Add("manager2", 3);
    printer.Add("worker", 2);
    printer.Show();

    int c = 0;
    time_t times;
    char str[26] = {};

    queue<string> statistic;
    while (c != printer.GetCount()) {
        statistic.push(printer.Extract());
        Sleep(3000);
        times = time(nullptr);
        ctime_s(str, sizeof str, &times);
        cout << statistic.front() << ' ' << str << endl;
        statistic.pop();
    }
    
    
  
    

    

    
}
