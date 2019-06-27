#include<iostream.h> 
#include<math.h>
#include<stdlib.h>  
#include"matrix.h"

void octal(int num) 

{
int rem;
if(num<=1)
{
cout<<num;
return;
}
rem=num%8;
octal(num/8);
cout<<rem;
}

void binary(int num)
{
int rem;
if(num<=1)
{
cout<<num;
return;
}
rem=num%2;
binary(num/2);
cout<<rem;
}
int main()
{
double degrees,radians;
char again;
float fah,cel;
int oct, dec,bin;
float a,b,PI; 
int c,fact=1,num;
float a1,b1,c1,d1,root1,root2;
int i,n;
int w[10][10], z[10][10], t[10][10];
int row,col,j;
int s=0;
do{
cout<<endl; 
system("clear");
cout<<"***************************************************[CALCULATOR]****************************************************\n"; 
cout<<"===================================================================================================================\n"; 
cout<<" ARITHMETIC OPERATIONS\t"<<"\tTRIGNOMETRIC FUNCTIONS"<<"\t\tLOG & MATRIX FUNCTIONS"<<"\t\tOTHER OPERATIONS\n"; 
cout<<"===================================================================================================================\n"; 
cout<<endl;
cout<<"1: Division             \t"<<"5: Sin                "<<"\t\t11: Log with base e   "<<"\t\t15:TempConversions"<<endl; 
cout<<endl; 
cout<<"2: Multiplication       \t"<<"6: Cos                "<<"\t\t12: Log with base 10  "<<"\t\t16:Factorial"<<endl; 
cout<<endl; 
cout<<"3: Subtraction          \t"<<"7: Tan                "<<"\t\t13: Matrix Operations "<<"\t\t17:Quadratic Roots"<<endl; 
cout<<endl; 
cout<<"4: Addition             \t"<<"8: Inverse of Sin     "<<"\t\t14: Det 3*3 matrix    "<<"\t\t18:Exponent "<<endl; 
cout<<endl; 
cout<<"                        \t"<<"9: Inverse of Cos     "<<"\t\t22: Sum of list ele   "<<"\t\t19:Square root"<<endl; 
cout<<endl; 
cout<<"        		       \t"<<"10: Inverse of Tan    "<<"\t\t                      "<<"\t\t20:Sum of N numbers"<<endl;
cout<<endl;
cout<<"                                                                                      \t\t21:Number Conversion"<<endl; 
cout<<"===================================================================================================================\n";
cout<<endl;
 
cout<<"Enter the function that you want to perform : "; 
cin>>c;
cout<<endl; 

PI=3.14159265;
switch(c) 
{ 
case 1: 
cout<<"Enter 1st number : "; 
cin>>a; 
cout<<endl; 
cout<<"Enter 2nd number : "; 
cin>>b; 
cout<<endl; 
cout<<"Division = "<<a/b<<endl; 
break; 
case 2: 
cout<<"Enter 1st number : "; 
cin>>a; 
cout<<endl; 
cout<<"Enter 2nd number : "; 
cin>>b; 
cout<<endl; 
cout<<"Multiplication = "<<a*b<<endl; 
break; 
case 3: 
cout<<"Enter 1st number : "; 
cin>>a; 
cout<<endl; 
cout<<"Enter 2nd number : "; 
cin>>b; 
cout<<endl; 
cout<<"Subtraction = "<<a-b<<endl; 
break; 
case 4: 
cout<<"Enter 1st number : "; 
cin>>a; 
cout<<endl; 
cout<<"Enter 2nd number : "; 
cin>>b; 
cout<<endl; 
cout<<"Addition = "<<a+b<<endl; 
break; 
case 18: 
cout<<"Enter the basenumber : "; 
cin>>a; 
cout<<endl; 
cout<<"Enter the exponent : "; 
cin>>b; 
cout<<endl; 
cout<<"Exponent = "<<pow(a,b)<<endl; 
break; 
case 19: 
cout<<"Enter the number : "; 
cin>>a; 
cout<<endl; 
if(a>=0)
{
cout<<"Square Root = "<<sqrt(a)<<endl; 
}
else
{
cout<<"negative of square root is not defined"<<endl;
}
break; 
case 5: 
cout<<"Enter the  value  in degrees : ";  
cout<<endl; 
cin>>degrees;
radians=degrees*PI/180.0;
cout<<"Sin = "<<sin(radians)<<endl; 
break; 
case 6: 
cout<<"Enter the  value  in degrees : "; 
cin>>degrees;
radians=degrees*PI/180.0; 
cout<<endl; 
cout<<"Cos = "<<cos(radians)<<endl; 
break; 
case 7: 
cout<<"Enter the value  in degrees : "; 
cin>>degrees; 
radians=degrees*PI/180.0;
cout<<endl; 
cout<<"Tan = "<<tan(radians)<<endl; 
break; 
case 8: 
cout<<"Enter the  value  in degrees: "; 
cin>>degrees;
radians=degrees*PI/180.0; 
cout<<endl; 
cout<<"Inverse of Sin = "<<asin(radians)*180.0/PI<<endl; 
break; 
 
case 9: 
cout<<"Enter the value  in degrees : "; 
cin>>degrees; 
radians=degrees*PI/180.0;
cout<<endl; 
cout<<"Inverse of Cos = "<<acos(radians)*180.0/PI<<endl; 
break; 
case 10: 
cout<<"Enter the value in degrees : "; 
cin>>degrees; 
radians=degrees*PI/180.0;
cout<<endl; 
cout<<"Inverse of tan = "<<atan(radians)*180.0/PI<<endl; 
break; 
case 11: 
cout<<"Enter the number : "; 
cin>>a; 
cout<<endl; 
cout<<"Log = "<<log(a)<<endl; 
break; 
case 12: 
cout<<"Enter the number : "; 
cin>>a; 
cout<<endl; 
cout<<"Log with base 10 = "<<log10(a)<<endl; 
break; 
case 16:
cout<<"enter the number";
cin>>num;
for(int i=1;i<=num;i++)
fact=fact*i;
cout<<"Factorial:"<<fact<<endl;
break;
case 17:
	float realPart,imaginaryPart;
	cout<<"Enter value of  a, b and c : ";
	cin>>a1>>b1>>c1;

	d1=b1*b1-4*a1*c1;

	if(d1==0)
	{
		root1=(-b1)/(2*a1);
		root2=root1;
		cout<<"Roots are real & equal";
		  cout<<"\nRoot 1= "<<root1<<"\nRoot 2= "<<root2<<endl;

  	}
	else if(d1>0)
	{
		root1=-(b1+sqrt(d1))/(2*a1);
		root2=-(b1-sqrt(d1))/(2*a1);
		cout<<"Roots are real & distinct";
		  cout<<"\nRoot 1= "<<root1<<"\nRoot 2= "<<root2<<endl;

	}
	else
	{
		root1=(-b1)/(2*a1);
		root2=sqrt(-d1)/(2*a1);
		cout<<"Roots are imaginary";
		cout<<"\nRoot 1= "<<root1<<"\nRoot 2= "<<root2<<endl;
		cout << "root1 = " << realPart << "+" <<"("<<imaginaryPart<<")" << "i" << endl;
        	cout << "root2 = " << realPart << "-" <<"("<<imaginaryPart<<")" << "i" << endl;
	}
break;
case 20:
cout<<" enter the size "<<endl;
cin>>n;
for(int i=0;i<=n;i++)
{
s=s+i;
}
cout<<"sum is "<<s<<endl;

break;
case 21:

{
cout<<" enter the decimal number"<<endl;
cin>>dec;
if(dec<0)
{
cout<<" it is negative num"<<endl;
}
else

{
cout<<" binary form of decimal no. "<<dec<<" is "<<endl;
             binary(dec);
cout<<"\n octal form of decimal no. "<<dec<<" is "<<endl;
octal(dec);
cout<<"\n";
}
}
break;
case 15:
{
cout<<" enter the temperature in celsius"<<endl;
cin>>cel;
fah=(cel*9.0)/5.0+32;
cout<<"\n the temperature in celsius is "<< cel<<endl;
cout<<"\n the temperature in fahrenheit is "<<fah<<endl;
}
break;
case 13:
{
cout << "\nEnter the number of rows and columns for Matrix A:::\n\n";
cin >>row>>col;
cout << "\n\nEnter elements for Matrix A :::\n\n";
for (i = 0; i < row; i++)
{
for (j = 0; j < col; j++)
{
cin >> w[i][j];
}
}
cout << "\n\nEnter elements for Matrix B :::\n\n";
for (i = 0; i < row; i++)
{
for (j = 0; j < col; j++)
{
cin >> z[i][j];
}
}
for(i = 0; i < row;i++)
for(j = 0; j < col;j++)
t[i][j] = w[i][j] + z[i][j];
cout << endl << "Sum of two matrix is: " << endl;
for(i = 0; i < row;i++)
{
for(j = 0; j < col;j++)
{
cout << t[i][j]<<"\t"<<" ";
}
cout<<"\n\n";
}
cout << endl;
for(i = 0; i < row;i++)
for(j = 0; j < col;j++)
t[i][j] = w[i][j] - z[i][j];
cout << endl << "Differnce of two matrix is: " << endl;
for(i = 0; i < row;i++)
{
for(j = 0; j < col;j++)
{
cout << t[i][j]<<"\t" << "  ";
}
cout << endl;
}
if (j==row)
{
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
t[i][j] = 0;
for (int k = 0; k <row; k++)
{
t[i][j] = t[i][j] + w[i][k] * z[k][j];
}
}
}
}
cout<< "\n-----------------------------------------------------------\n";
cout << "\n\nMultiplication of Matrix A and Matrix B :\n\n";
for (i = 0; i < row; i++)
{
for (j = 0; j < col; j++)
{
cout << t[i][j]<<"\t"<<" ";
}
cout<<"\n\n";
}
}
break;
case 22:
{

 int arr[20],i,n,sum=0;

 cout<<"How many elements you want to enter: ";
 cin>>n;
 cout<<"Enter any "<<n<<" elements in Array: ";
 for(i=0;i<n;i++)
 {
 cin>>arr[i];
 }
 cout<<"Sum of all Elements are: ";

 for(i=0;i<n;i++)
 {
  sum=sum+arr[i];
 }
 for(i=0;i<n;i++)
 {
 }
cout<<sum<<endl;
}
break;


case 14:
{
det();
cout<<endl;
}
break;

default:cout<<"\n Entered choice is invalid\n";
break;
}
cout<< "would you like to restart(y)";
    cin >> again;
}while(again == 'y' ||again == 'Y');
return 0;

}
 /* {
   int arr[20],i,n,sum=0;
   
   cout<<"How many elements you want to enter: ";
   cin>>n;
   cout<<"Enter any "<<n<<" elements in Array: ";
   for(i=0;i<n;i++)
   {
   cin>>arr[i];
   }
   cout<<"Sum of all Elements are: ";

   for(i=0;i<n;i++)
   {
    sum=sum+arr[i];
   }
   for(i=0;i<n;i++)
   {
   }
  cout<<sum;
  
  }*/
