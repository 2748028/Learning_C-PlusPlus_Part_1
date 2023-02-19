#ifndef MYHEADER_H
#define MYHEADER_H
#include <iostream>

using std::cout;

const char vP[] = "release 1.0.1"; const char vT[] = "beta 0.1.3";

void getVersion(); 

namespace Production{ void getVersion(); }

namespace Testing{ void getVersion(); } namespace { void getVersionI(); }

#endif