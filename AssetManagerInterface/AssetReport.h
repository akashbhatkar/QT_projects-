#ifndef ASSETREPORT_H
#define ASSETREPORT_H

#include<iostream>
#include<QPdfWriter>
#include<QPainter>
using namespace std;

class AssetReport
{
public:
    AssetReport();
    void generatepdf(int,QString[]);
};

#endif // ASSETREPORT_H
