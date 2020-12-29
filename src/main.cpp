#include <iostream>
#include "ncurses_display.h"
#include "system.h"
#include "linux_parser.h"
#include "process.h"

int main() {
  System system;
  // std::cout << "hello" << std::endl;
  // system.Cpu();
  // std::cout << "cpu" << std::endl;
  // system.Processes();
  // std::cout << "processes" << std::endl;
  // system.MemoryUtilization();
  // std::cout << "MemoryUtilization" << std::endl;
  // system.UpTime();
  // auto j = Process(7329).CpuUtilization();
  // std::cout << j << std::endl;
  // auto k =LinuxParser::Jiffies();
  // std::cout << k << std::endl;
  // auto kd =LinuxParser::IdleJiffies();
  // std::cout << kd << std::endl;
  // std::cout << k - kd << std::endl;
  // auto pJif = LinuxParser::ActiveJiffies(7329);
  // std::cout << "pJif" << std::endl;
  // std::cout << pJif << std::endl;
  // std::cout << k - kd << std::endl;
  // std::cout << pJif / (k - kd) << std::endl;
  // LinuxParser::ActiveJiffies(7329);
  // std::cout << "LinuxParser" << std::endl;
  // system.TotalProcesses();
  // std::cout << "TotalProcesses" << std::endl;
  // system.RunningProcesses();
  // std::cout << "RunningProcesses" << std::endl;
  // system.OperatingSystem();
  // std::cout << "OperatingSystem" << std::endl;
  // system.Kernel();
  // std::cout << "Kernel" << std::endl;
  // auto j = LinuxParser::User(1638);
  // std::cout<<j<<std::endl;
  // auto k = LinuxParser::UpTime();
  // std::cout<< k << std::endl;
  NCursesDisplay::Display(system);
}