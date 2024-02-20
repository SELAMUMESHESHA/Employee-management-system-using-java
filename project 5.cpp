#include<iostream>
#include <string>
using namespace std;
int k = 1000;
int i = 0;
class bank
{
  private:
	int account, balance;
	long long int mn;
	string name, address, dob;

  public:
	void putdata()
	{
		string xyz;
		getline(cin, xyz);
		cout << "ENTER YOUR NAME\n";
		getline(cin, name);
		cout << "ENTER YOUR DATE OF BIRTH IN\"DD/MM/YYYY\" FORMAT\n";
		cin >> dob;
		cout << "ENTER YOUR ADDRESS\n";
		cin >> address;
		cout<<"enter your intial balance\n";
		cin>>balance ;
		account = k;
		k++;
		cout << "ENTER YOUR MOBILE NUMBER\n";
		cin >> mn;
		cout << "YOUR ACCOUNT NUMBER IS\t" << account << endl;
	}
	bool find_account(int a)
	{
		if (account == a)
			return true;
		else
			return false;
	}
	void deposit(int b)
	{
		balance = balance + b;
		cout << "YOUR CURRENT BALANCE IS " << balance << endl;
	}
	void withdraw_money(int b)
	{
		if (b > balance)
		{
			cout << "NOT ENOUGH MONEY TRY AGAIN!!\n";
		}
		else
		{
			balance = balance - b;
			cout << "YOUR REMAINING BALANCE IS\t" << balance << "\n";
		}
	}
	void display_data()
	{
		cout << "ACCOUNT NUMBER:- " << account << endl;
		cout << "NAME:- " << name << endl;
		cout << "DATE OF BIRTH:- " << dob << endl;
		cout << "ADDRESS:- " << address << endl;
		cout << "MOBILE NUMBER:- " << mn << endl;
		cout << "BALANCE:- " << balance << endl;
	}
	int balance_inquiry()
	{
		return balance;
	}
};
bank v1[100];
int main()
{
	int j;
	while (true)
	{
		int choice;
		cout << "*****welcome to werabe bank*****\n" << endl;
		cout<<"\tPLEASE ENTER YOUR CHOICE\n"<<endl
		;
		cout << "\t1. OPEN ACCOUNT\n";
		cout << "\t2. DEPOSIT MONEY\n";
		cout << "\t3. WITHDRAWL MONEY\n";
		cout << "\t4. TRANSFER MONEY\n";
		cout << "\t5. SHOW ACCOUNT STATUS\n";
		cout << "\t6.  ABOUT\n ";
		cout << "\t7. FINISH PROGRAMM\n";
		cout << "\t8. CLEAR PREVIOUS ENTRIES\n";
		cin >> choice;
		switch (choice)
		{
		case 1:
			v1[i].putdata();
			i++;
			break;
		case 2:
			cout << "ENTER YOUR ACCOUNT NUMBER\n";
			int a;
			cin >> a;
			for (j = 0; j < i; j++)
			{
				if (v1[j].find_account(a))
					break;
			}
			if (j == i)
				cout << "ENTER VALID ACCOUNT AND TRY AGAIN\n\n";
			else
			{
				cout << "ENTER AMOUNT TO BE DEPOSITED\n";
				int b;
				cin >> b;
				v1[j].deposit(b);
			}
			break;
		case 3:
			cout << "ENTER YOUR ACCOUNT NUMBER\n";
			int v;
			cin >> v;
			for (j = 0; j < i; j++)
			{
				if (v1[j].find_account(v))
					break;
			}
			if (j == i)
				cout << "ENTER VALID ACCOUNT NUMBER\n\n";
			else
			{
				cout << "HOW MUCH MONEY YOU WANT TO WITHDRAW\n";
				int b;
				cin >> b;
				v1[j].withdraw_money(b);
			}
			break;
		case 4:
			cout << "ENTER YOUR ACCOUNT NUMBER\n";
			int u;
			cin >> u;
			for (j = 0; j < i; j++)
			{
				if (v1[j].find_account(u))
					break;
			}
			if (j == i)
				cout << "ENTER VALID ACCOUNT NUMBER AND TRY AGAIN\n\n";
			else
			{
				int g;
				cout << "ENTER RECEIPEINT ACCOUNT NUMBER\n";
				int b;
				cin >> b;
				for (g = 0; g < i; g++)
				{
					if (v1[g].find_account(b))
						break;
				}
				if (g == i)
					cout << "ENTER VALID ACCOUNT NUMBER AND TRY AGAIN\n\n";
				else
				{
					cout << "ENTER MONEY TO BE TRANSFERRED\n";
					int l;
					cin >> l;
					if (v1[j].balance_inquiry() < l)
						cout << "NOT ENOUGH MONEY\n";
					else
					{
						v1[j].withdraw_money(l);
						v1[g].deposit(l);
					}
				}
			}
			break;
		case 5:
			cout << "ENTER ACCOUNT NUMBER\n";
			int s;
			cin >> s;
			for (j = 0; j < i; j++)
			{
				if (v1[j].find_account(s))
					break;
			}
			if (j == i)
				cout << "NO BANK ACCOUNT FOUND\n";
			else
			{
				v1[j].display_data();
			}
			break;
			case 6:
			cout <<"werabe bank is created by second year computer science students in 2015.\n\n";
			break;
		case 7:
		cout<< "THANKS FOR WORKING WITH US ";
			exit(0);
			break;
		case 8:
			system("cls");
			break;
		default:
			cout << "ENTER VALID CHOICE\n";
			break;
		}
	}
}
