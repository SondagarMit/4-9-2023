#include<conio.h>
#include<iostream.h>
class Interview
{
	     public:
		  void ready_interview()
		{
		  char ready;
		  cout << "ARE YOU READY FOR INTERVIEW ? Y / N" << endl;
		  cin >> ready;

		  if (ready == 'Y' || ready == 'y')
		  {
		      start();
		  }
		  else if (ready == 'N' || ready == 'n')
		  {
		   exit();
		  }
		}
		void start()
		{
		  char name[10], degree[10], choose[10], dream[10];
		  int salary_ex;

		  cout << "What is Your Name ?" << endl;
		  cin >> name;

		  cout << "You Have Degree ?" << endl;
		  cin >> degree;

		  cout << "Why You Choose Our Company ?" << endl;
		  cin >> choose;

		  cout << "What Is Your Dream" << endl;
		  cin >> dream;

		  cout << "How Many You Expected Salary ?" << endl;
		  cin >> salary_ex;

		  cout << "Interview is END";

		}

		void bye()
		{
		  cout << "I Call You";

		}
		void exit()
		{
		  cout << "OK ! Good Luck Next Time";

		}
};
void main()
{
  Interview obj;
  clrscr();
  obj.ready_interview();

  getch();
}