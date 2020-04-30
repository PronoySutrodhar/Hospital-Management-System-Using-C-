#ifndef TIMES_H
#define TIMES_H


class times
{
public:
    times();
    int gethour();
    int getmin();
    int getsec();
    int getdoctor();
    void get_data();
    void show_data();


protected:
    int hour,min,sec;
    int doctor;
};

#endif // TIMES_H
