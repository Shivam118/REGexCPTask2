// TASK 2
// Referral Code : CPRSS1135
// Name : SHIVAM SHARMA

/* AIM: Write a program to check whether the given number of 
three digits is palindrome or not? [Do not use loops]. */


#include<iostream>
using namespace std;
int main(){
    int a, b, c, n, sum=0;
    cout<<"Enter number you want to check for palindrome: ";
    cin>>n;
    a = n/100;
    b = n/10;
    b = b%10;
    c = n%10;
    sum = (c*100) + (b*10) + a;
    if(sum==n)
        cout<<"Palindrome";
    else
        cout<<"Not Palindrome";
    return 0;
}
 
