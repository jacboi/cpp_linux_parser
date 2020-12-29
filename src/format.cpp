#include <string>
#include <iostream>
#include <sstream>

#include "format.h"

using std::string;

// TODO: Complete this helper function
// INPUT: Long int measuring seconds
// OUTPUT: HH:MM:SS
// REMOVE: [[maybe_unused]] once you define the function
// ref: // https://stackoverflow.com/questions/12746885/why-use-asprintf-instead-of-sprintf
string Format::ElapsedTime(long seconds) { 
    std::ostringstream stream;
    stream << seconds/3600 << ":" << seconds/60%60 << ":" << seconds%60;
    return stream.str();
 }