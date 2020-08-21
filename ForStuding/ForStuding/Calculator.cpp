#include <iostream>
#include "mainHeader.h"
#include <math.h>


using namespace std;


void CalcSquareArea()
{

	int a, b;
	cout << "Hey, Please Enter Sqaure weight and height" << endl;
	cout << "Square weight : ";
	cin >> a;
	cout << "Sqaure height : ";
	cin >> b;
	cout << "Sqaure Area = " << 2*a + 2*b;
}

void CalcSquareVolume()
{
	int a, b;
	cout << "Hey, Please Enter Sqaure weight and height" << endl;
	cout << "Square weight : ";
	cin >> a;
	cout << "Sqaure height : ";
	cin >> b;
	cout << "Sqaure Area = " << a*b;
}

void CalcCircleArea() 
{
	int r;
	cout << "Hey, Please Enter Circle radius" << endl;
	cout << "Circle Radius : ";
	cin >> r;
	cout << "Circle Area = " << 2 * 180 * r;
}
void CalcCircleVolume()
{
	int r;
	cout << "Hey, Please Enter Circle radius" << endl;
	cout << "Circle Radius : ";
	cin >> r;
	cout << "Circle Volume = " <<180 * r * r;
}
void CalcSphereArea() 
{
	int r;
	cout << "Hey, Please Enter Sphere radius" << endl;
	cout << "Sphere Radius : ";
	cin >> r;
	cout << "Sphere Area = " << 2*180 *r*r;
}
void CalcShpereVolume() 
{
	int r;
	cout << "Hey, Please Enter Sphere radius" << endl;
	cout << "Sphere Radius : ";
	cin >> r;
	cout << "Sphere Volume = " << (3/4)*360*r*r*r;
}

