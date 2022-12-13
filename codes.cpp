//FIND THE ROOTS OF A SECOND DEGREE EQUATION
#include<bits/stdc++.h>
#include <iostream>
#include<string>
#include <cmath>
using namespace std;


void myFunctionRoots(){
    double a;
    double b;
    double c;
    cout<<"ax^2+bx+c equation has coefficient like a,b,c\n";
    cout<<"ENTER YOUR COEFFICIENTS: ";
    cin>>a;
    cin>>b;
    cin>>c;
    double delta=pow(b,2)-4*a*c;
    cout<<"YOUR DELTA VALUE IS: "<<delta<<endl;
    if(delta<0){
        cout<<"THERE IS NO REAL ROOT !!"<<endl;
    }else if(delta==0){
        double x0=((-b)+sqrt(delta))/(2*a);
        cout<<"YOU HAVE JUST ONE ROOT\n";
        cout<<"YOUR  ROOT IS: "<<x0<<endl;
    }else if(delta>0){
        double x1=((-b)+sqrt(delta))/(2*a);
        double x2=((-b)-sqrt(delta))/(2*a);
        cout<<"YOUR FIRST ROOT IS: "<<x1<<endl;
        cout<<"YOUR SECOND ROOT IS: "<<x2<<endl;
    }
}
main(){
    myFunctionRoots();
}
    
