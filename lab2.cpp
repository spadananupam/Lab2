#include <iostream>
#include <math.h>

using namespace std;

int main(){

int q,qnum;
char resp ;

cout << "This assignment has been submitted by Spandan Anupam\n";
cout << "Enter the question you want to go to \n";
cin >> q;
switch (q){
           case 1 :
           float a,b,c;
           cout << "Enter a length in centimeters\n";
           cin >> a;  
           b=a/1000;  
           c=a/100000;
           cout << "The value you entered is,\n"<< b << " meters or " << c << " kilometers.\n";
           break;

           case 2 :
           float temp,finalc,finalf;
           char type;
           cout << "I am going to combine question 2 and 3\n";
           cout << "Now tell us what temperature you want to convert (just the value)\n";
           cin >> temp;
           cout << "Can you specify the units please? (in c or f) \n";
           cin >> type;
                    switch (type){
                        case 'c' :
                        finalf=1.8*temp+32;
                        cout << "the temperature in fahrenheit is " << finalf << endl;
                        break;
                        case 'f' :
                        finalc=(temp-32)/1.8;
                        cout << "The final temperature in celsius is " << finalc << endl;
                        break;
                        }
           break;

           case 3 :
           float temp1,finalc1,finalf1;
           char type1;
           cout << "I am going to combine question 2 and 3\n";
           cout << "Now tell us what temperature you want to convert\n";
           cin >> temp;
           cout << "Can you specify the units please?\n";
           cin >> type1;
                    switch (type1){
                        case 'c' :
                        finalf1=1.8*temp1+32;
                        cout << "the temperature in fahrenheit is " << finalf1 << endl;
                        break;
                        case 'f' :
                        finalc1=(temp1-32)/1.8;
                        cout << "The final temperature in celsius is " << finalc1 << endl;
                        break;
                        }
           break;

           case 4 :
           int d1,e1,f1,g1,h1;
           cout << "Enter what number of days you need to convert\n";
           cin >> d1;
           e1=(d1-d1%365)/365;
           f1=d1-365*e1;
           g1=(f1-f1%7)/7;
           h1=f1-7*g1;
           cout << "The days inputted can be expressed as " << e1 << " years " << g1 << " weeks and " << h1 << " days.\n";
           break; 
 
           case 5 :
           float fl1,fl2,fl3;
           cout << "Enter the base number\n";
           cin >> fl1;
           cout << "To which power do you want to raise it to\n";
           cin >> fl2;
           fl3 = pow(fl1,fl2);
           cout << "The required data is "<< fl3 <<endl;
           break;
           
           case 6 :
           float fl4;
           cout << "Enter the base number\n";
           cin >> fl4;
           cout << "The square root of this number is " << pow(fl4,0.5)<< endl;
           break;     
           
           case 7 :
           float ang1,ang2;
           cout << "Enter two angles of a triangle\n";
           cin >> ang1 >> ang2; 
           if (ang1+ang2 > 180)           {
           cout << "Eh? invalid input\n";
           }
           else{
           cout << "The third angle is "<< 180-(ang1+ang2)<<endl;}
           break;
           
           case 8 :
           float base,height;
           cout << "Enter the base and height of a triangle\n";
           cin >> base >> height;
           cout << "The area of the triangle is "<< 0.5*base*height<< endl;
           break;
           
           case 9 :
           float side;
           cout << "Enter the side of equilateral triangle\n";
           cin >> base >> height;
           cout << "The area of the triangle is "<< 1.732*side*side/4<< endl;
           break;
           
           case 10 :
           float m1,m2,m3,m4,m5,m6;
           cout << "Enter the marks attained in five subjects\n";
           cin >>m1>>m2>>m3>>m4>>m5;
           cout << "What is the full mark for each subject?\n";
           cin >> m6;
           cout << "The average mark obtained is " << (m1+m2+m3+m4+m5)/5 << " The percentage obtained is " << (m1+m2+m3+m4+m5)*20/m6 <<endl;
           break;
           
           case 11 :
           float p,r,t;
           cout << "Now we are going to calculate the simple interest for the given data\n"
           <<"Please enter in Principal amount,Rate of interest(in decimals) and the time \n";
           cin >> p >> r >> t;
           cout << "The simple interest for the inquired amounts is "<< p*r*t<<endl;                       
           break;
           
           case 12 :
           float p2,r2,n2,t2,a2,b2;
           cout << "Lets start with compund interest \n";
           cout <<"Please enter the principal amount, rate (in decimal), number of times interest is compunded per year,time\n";
           cin >> p2 >> r2 >> n2 >> t2;
           b2=1.0+(r2/n2);
           a2=p2*pow(b2,(n2*t2));
           cout << "Now the compound interest is, " << a2-p2 <<"The amount finally is "<< a2 << endl;
           break;
         
           
           
           
           }
cout << "Do you want to verify any of the codes now?,\nie, do you want to see the source code for anyone (y/n)?\n";
cin >> resp;
if (resp = 'y')
  { cout << "Which question do you want to see?\n";
   cin >> qnum;
   switch (qnum){
           
           case 1 :
           cout << "cout << \"Enter a length in centimeters\";\n"
           <<"cin >> a;\n"  
           <<"b=a/1000;\n"  
           <<"c=a/100000;\n"
           <<"cout << \"The value you entered is,\"<< b << \" meters or \" << c << \" kilometers.\";\n";
           break;

           case 2 :
           cout<<"float temp,finalc,finalf;\n"
           <<"char type;\n"
           <<"cout << \"I am going to combine question 2 and 3\";\n"
           <<"cout << \"Now tell us what temperature you want to convert\";\n"
           <<"cin >> temp;\n"
           <<"cout << \"Can you specify the units please?\";\n"
           <<"cin >> type;\n"
                    <<"switch (type){\n"
                        <<"case 'c' :\n"
                        <<"finalf=1.8*temp+32;\n"
                        <<"cout << \"the temperature in fahrenheit is \" << finalf << endl;\n"
                        <<"break;\n"
                        <<"case 'f' :\n"
                        <<"finalc=(temp-32)/1.8;\n"
                        <<"cout << \"The final temperature in celsius is \" << finalc << endl;\n"
                        <<"break;\n"
                        <<"}\n";
           break;

           case 3 :
           cout<<"float temp1,finalc1,finalf1;\n"
           <<"char type1;\n"
           <<"cout << \"I am going to combine question 2 and 3\";\n"
           <<"cout << \"Now tell us what temperature you want to convert\";\n"
           <<"cin >> temp;\n"
           <<"cout << \"Can you specify the units please?\";\n"
           <<"cin >> type1;\n"
                    <<"switch (type1){\n"
                        <<"case 'c' :\n"
                        <<"finalf1=1.8*temp1+32;\n"
                        <<"cout << \"the temperature in fahrenheit is \" << finalf1 << endl;\n"
                        <<"break;\n"
                        <<"case 'f' :\n"
                        <<"finalc1=(temp1-32)/1.8;\n"
                        <<"cout << \"The final temperature in celsius is \" << finalc1 << endl;\n"
                        <<"break;\n"
                        <<"}\n";
           break;

           case 4 :
           cout<<"int d1,e1,f1,g1,h1;\n"
           <<"cout << \"Enter what number of days you need to convert\";\n"
           <<"cin >> d1;\n"
           <<"e1=(d1-d1%365)/365;\n"
           <<"f1=d1-365*e1;\n"
           <<"g1=(f1-f1%7)/7;\n"
           <<"h1=f1-7*g1;\n"
           <<"cout << \"The days inputted can be expressed as \" << e1 << \" years \" << g1 << \" weeks and \" << h1 << \" days.\";\n";
           break; 
 
           case 5 :
           cout<<"float fl1,fl2,fl3;\n"
           <<"cout << \"Enter the base number\";\n"
           <<"cin >> fl1;\n"
           <<"cout << \"To which power do you want to raise it to\";\n"
           <<"cin >> fl2;\n"
           <<"fl3 = pow(fl1,fl2);\n"
           <<"cout << \"The required data is \"<< fl3 <<endl;\n";
           break;
           
           case 6 :
           cout<<"float fl4;\n"
           <<"cout << \"Enter the base number\";\n"
           <<"cin >> fl4;\n"
           <<"cout << \"The square root of this number is \" << pow(fl4,0.5)<< endl;\n";
           break;     
           
           case 7 :
           cout<<"float ang1,ang2;\n"
           <<"cout << \"Enter two angles of a triangle\";\n"
           <<"cin >> ang1 >> ang2; \n"
           <<"cout << \"The third angle is \"<< 180-(ang1+ang2)<<endl;\n";
           break;
           
           case 8 :
           cout<<"float base,height;\n"
           <<"cout << \"Enter the base and height of a triangle\";\n"
           <<"cin >> base >> height;\n"
           <<"cout << \"The area of the triangle is \"<< 0.5*base*height<< endl;\n";
           break;
           
           case 9 :
           cout<<"float side;\n"
           <<"cout << \"Enter the side of equilateral triangle\";\n"
           <<"cin >> base >> height;\n"
           <<"cout << \"The area of the triangle is \"<< 1.732*side*side/4<< endl;\n";
           break;
           
           case 10 :
           cout<<"float m1,m2,m3,m4,m5,m6;\n"
           <<"cout << \"Enter the marks attained in five subjects\";\n"
           <<"cin >>m1>>m2>>m3>>m4>>m5;\n"
           <<"cout << \"What is the full mark for each subject?\";\n"
           <<"cin >> m6;\n"
           <<"cout << \"The average mark obtained is \" \n<< (m1+m2+m3+m4+m5)/5 << \" The percentage obtained is \" \n<< (m1+m2+m3+m4+m5)*20/m6 <<endl;\n";
           break;
           
           case 11 :
           cout<<"float p,r,t;\n"
           <<"cout << \"Now we are going to calculate the simple interest for the given data\"\n"
           <<"\"Please enter in Principal amount,Rate of interest(in decimals) and the time \";\n"
           <<"cin >> p >> r >> t;\n"
           <<"cout << \"The simple interest for the inquired amounts is \"<< p*r*t<<endl;\n";                       
           break;
           
           case 12 :
           cout<<"float p2,r2,n2,t2,a2,b2;\n"           
           <<"cout << \"Lets start with compund interest \";\n"
           <<"cout <<\"Please enter the principal amount, rate (in decimal),\n number of times interest is compunded per year,time\";\n"
           <<"cin >> p2 >> r2 >> n2 >> t2;\n"
           <<"b2=1+r2/n2;\n"
           <<"a2=p2*pow(b2,n2*t2);\n"
           <<"cout << \"Now the compound interest amount is, \" << a2-p2 << endl;\n";
           break;
           }
        }
else {cout << "Thank you for your cooperation\n";}
                 
return 0;
}
                        
                        
           
            
           

