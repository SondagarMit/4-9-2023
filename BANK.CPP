#include<conio.h>
#include<iostream.h>
class Bank
{
   static int bank_balance;
   int i,type,create,pancard,mobile_number,pincode,balance,w;

   char address[100];
	public:
		void type_of()
		{
		  cout << "---------------Account Type---------------";
		  cout << endl << "1 for Current Account 2 For Saving Account: ";
		  cin >> type;
		}

		void proof()
		{
		 cout << endl;
		 cout << "-----------------Customer Proofs----------------------";
		 cout << endl << "Enter Your Pan-Card: ";
		 cin >>pancard;

		 cout << endl << "Enter You Mobile Number:";
		 cin >> mobile_number;

		 cout << endl << "Enter Pin Code: ";
		 cin >> pincode;

		 cout << endl << "Enter Your Address: ";
		 cin >> address;

		}
		void balance_add()
		{
		 cout << endl;
		 cout << "----------------------Balance---------------------";
		 cout << endl << "Enter Your Balance: ";
		 cin >> balance;
		 bank_balance = balance + bank_balance;

		 cout << endl << "Bank Balance: " << bank_balance;
		}

		void display()
		{
		  type_of();
		  proof();
		  balance_add();
		  withdraw();

		}
		void withdraw()
		{
		  cout << endl;
		  cout << "----------------------Withdraw---------------------";
		  cout << endl <<  "Enter Your Withdraw Amount: " << endl;
		  cin >> w;

		  if (balance>=w)
		  {
		    balance = balance - w;
		    cout << "Total Balance After Withdraw ==> " << balance << endl;
		    cout << "Complete" << endl;
		  }
		  else
		  {
		  cout << "Invaild Amount";
		  }

		}

};
int Bank :: bank_balance=100;
void main()
{
  int create,i;
  clrscr();
  cout << "------------------Account-----------------";
  cout << endl << "How Many Acoount Create: ";
  cin >> create;
  cout << endl;

  for (i=0;i < create;i++)
  {
	Bank obj;
	obj.display();

  }
  getch();
}