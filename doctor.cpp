#include "doctor.h"
#include "times.h"
doctor::doctor()
{
    //ctor
}

void doctor :: pushDoctor()
{
    doctorlist.push_back("1.Dr.Liton islam           (MBBS, MS ( Ortho ))\n");
    doctorlist.push_back("2.Dr.Raihan Islam khan     (MBBS, MD ( Nephrology ))\n");
    doctorlist.push_back("3.Dr.Alamin Hossain        (MBBS, MD ( Gastro ))\n");
    doctorlist.push_back("4.Dr.Saifullah Shohag      (MBBS DMC)\n");
    doctorlist.push_back("5.Dr.Parvin chowdhury      (MBBS ,MS(Medicine))\n");
    doctorlist.push_back("6.Dr.Obadul islam Raihan   (MBBS, MD ( Gastro)\n");
    doctorlist.push_back("7.Dr.Mukta Aktar           (MBBS ,MS(Medicine))\n");
    doctorlist.push_back("8.Dr.Biren Kumar Biswas    (MBBS, MS ( Eye ))\n");
    doctorlist.push_back("9.Dr.Hannan Chowdhury      (MBBS ,MS(Medicine))\n");
    doctorlist.push_back("10.Dr.Samsul Hoque          ((MBBS, MS ( Eye ))\n");
    doctorlist.push_back("11.Dr.Miraz Bin Roshid      (MBBS ,MS(Medicine))\n");
    doctorlist.push_back("12.Dr.Rokibul Alam          ((MBBS, MS ( Eye ))\n");
    doctorlist.push_back("13.D.r.A.T.M. Abdul Hannan   (MBBS ,MS(Medicine))\n");
    doctorlist.push_back("14.Dr.A.B.M. Akram Ali Khan (MBBS ,MS(Medicine) )\n");
    doctorlist.push_back("15.Dr.Mozeza Jahura         (MBBS, MS ( Ortho ))\n");
    doctorlist.push_back("16.Dr.Md. Shamsur Rahman    (MBBS ,MS(Medicine))\n");
    doctorlist.push_back("17.Dr.Momota Mollik         (MBBS ,MS(Medicine))\n");
    doctorlist.push_back("18.Dr.Rezwan islam          (MBBS, MS ( Ortho ))\n");
    doctorlist.push_back("19.Dr.Ronjon Kumar Das      (MBBS ,MS(Medicine))\n");
    doctorlist.push_back("20.Dr. Momota Mollik        (MBBS ,MS(Medicine))\n");
}


void doctor :: showallDoctor()
{
    std::fstream file;

    cout << "\n\n\t\tAvailable Doctor List : \n\n";
    for(int i=0; i<doctorlist.size(); i++)
    {
        file.open("Doctor.txt",std::fstream::app|std::fstream::in|std::fstream::out);

        cout <<"\t\t"<<  doctorlist[i]<<endl;
        file<<doctorlist[i]<<endl;
        file.close();
    }
}


