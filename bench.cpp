#include <verona.h>
#include <cpp/when.h>
#include <iostream>
#include <cstdio>

using namespace verona::rt;
using namespace verona::cpp;

int main(){

   auto& sched = Scheduler::get();
   Scheduler::set_detect_leaks(true);
   sched.set_fair(true);
   sched.init(1);

   when() << [=]() { 
       std::cout << "Hello World" << std::endl; 
   };

   sched.run();
}