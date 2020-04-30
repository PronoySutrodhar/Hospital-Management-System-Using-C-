#ifndef DOCTOR_H
#define DOCTOR_H

#include <bits/stdc++.h>
using namespace std;

#include "times.h"

class doctor : public times
{
    public:
        doctor();
        void pushDoctor();
        void showallDoctor();

    public:
        vector<string> doctorlist;
};

#endif // DOCTOR_H



