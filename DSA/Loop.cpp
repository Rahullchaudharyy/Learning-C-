#include <iostream>
using namespace std;

int main()
{

    // Lets print the a to z using the loop
    char Name;
    for (Name = 'a'; Name <= 'z'; Name = Name + 1)
    {

        cout << Name << endl;
    };
    // Print the number 10 to 1 using loop

    for (int i = 10; i >= 1; i--)
    {
        cout << i << endl;
    };

    // Print the counting that the pattter like 0,4,7,10...100
    for (int num = 1; num <= 100; num += 3)
    {
        cout << num << "/n";
    }
    // Print the table for the desire number which is given by the use
    int n;
    cout << "Please Enter the number which you want to print!!!" << endl;
    cin >> n;

    for (int i = 1; i <= 10; i++)
    {
        cout << n << "*" << i << " =" << n * i << endl;
    }

    // The another way of printing of table

    int Num;
    cin >> Num;
    for (int i = Num; i <= 10 * Num; i = i + Num)
    {
        cout << i << endl;
    }
    // Power

    int N,Pow,i,num;
    cout<< "Enter The Number " << endl;
    cin>>   N;
    cout<< "Enter The Power for the number that you have enter prev.. " << endl;
    cin>> Pow;
    num = N;
    for ( i = 1; i < Pow; i++)
    {
        num= num*N;
    }
    cout<<num<<endl;

    int a, sum = 0;
    cout << "Enter the number" << endl;
    cin >> a;

    for (int i = 1; i <= a; i++)
    {
        sum = sum + i;
    }
    cout << sum << endl;

    long long int fact=1;
    double  FactNum;
    cout<< "Which number you want factorial :- " << endl;
    cin>> FactNum;

    for (int i = 1; i <= FactNum; i++)
    {
        fact = fact*i;

    }
    cout<< fact<<endl;

    // Prime number

    int n;
    cout << " Enter the number weather it is prime or not peime : - " << endl;
    cin >> n;

    if (n < 2)
    {
        cout << "It's Not A prime number" << endl;
        return 0;
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                cout << "It's Not A prime number" << endl;
                return 0;
            }

        }
            cout << "It's  A prime number !!" << endl;
            return 0;
    }




      int Last = 0, Prev = 1, Curr, Nummm;

    cout << "Enter the number of Fibonacci terms: " << endl;
    cin >> Nummm;

    if (Nummm == 1) {
        cout << Last << endl; 
    } else if (Nummm == 2) {
        cout << Prev << endl;
    } else {
        for (int i = 2; i < Nummm; i++) {
            Curr = Last + Prev;
            Last = Prev;
            Prev = Curr;
        }
        cout << Curr << endl;
    }
      
      
      



}
