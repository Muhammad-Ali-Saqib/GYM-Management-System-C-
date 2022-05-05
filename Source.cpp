#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;

//to store data after reading from file
struct fix
{
	int gym_id ;
	char name[25];
	int age;
	char cnic[25];
	int weight;
	double contact_no;
	char doj[25];
}fix;

//to store data temporarily
struct customer
{
	int gym_id = 0;
	char name[25];
	int age;
	char cnic[25];
	int weight;
	double contact_no;
char doj[25];
};

int fee = 10000;

//this structure contains only functions upto line no:226
struct collection
{ 
	customer c;

	//to store data in file 
	void saving()
	{
		if (fix.gym_id > c.gym_id)
			c.gym_id = fix.gym_id;
		c.gym_id++;
		cout << "\n Your Gym ID is: " << c.gym_id << endl;
		ofstream sav("customer data.txt",ios::app);
		sav <<c.gym_id<<" " <<c.name << " " << c.cnic << " " << c.age << " " << c.contact_no << " " << c.weight << " " << c.doj << " " << "\n";
		sav.close();
	}

	
	
	//to read data from file
	
	void reading(int id)
	{
		ifstream reading("customer data.txt");
		while (reading)
		{
			
			reading >> fix.gym_id >> fix.name >> fix.cnic >> fix.age >> fix.contact_no >> fix.weight >> fix.doj;
			if (fix.gym_id == id)
				members();
			else
				cout << "\n Record Not Found ";
		}
		reading.close();
		cout << "\nPress Enter key to return to Membership Menu\n";
		getch();
		membership();
	}
	void reading_all()
	{
		ifstream reading("customer data.txt");
		while (reading)
		{
			int gym_id;
			char name[25];
			char cnic[25];
			int age;
			int contact_no;
			int weight;
			char doj[25];
			reading >> gym_id >> name >>cnic >> age >> contact_no >> weight >> doj;
			cout << "\n\t" << gym_id << ". Coustomer:\n";
			cout << "\n\tName : ";
			cout << name;
			cout << "\n\tCNIC.NO : ";
			cout << cnic;
			cout << "\n\tAge:";
			cout << age;
			cout << "\n\tCONTACT NO:";
			cout << contact_no;
			cout << "\n\tWeight:";
			cout << weight;
			cout << "\n\tDate Of Joining:";
			cout << doj;
			cout << "\n";
		}
		reading.close();
		cout << "\nPress Enter key to return to Membership Menu\n";
		getch();
		membership();
	}
	
	//object of structure
	

	//this functions will display the menu
	int menu()
	{
		cout << "\nMenu:" << endl;
		cout << "\t1.Membership" << endl;
		cout << "\t2.Help" << endl;
		cout << "\t3.Feedback" << endl;
		cout << "\t4.Terms & conditions" << endl;
		cout << "\t5.Exit Menu" << endl;
		cout << "\n\nEnter Menu Number=";
		int n;
		cin >> n;
		return n;
		//returning the menu number 
	}
	//menu of member
	void membr()
	{
		cout << "\n\n Members : " << endl;
		cout << "\t 1.View All Members";
		cout << "\n\t 2.Search Member";
		cout << "\n\t 3.Return to Membership Menu";
		cout << "\n\nEnter menu number: ";
	membr:
		int a;
		cin >> a;
		switch (a)
		{
		case 1:
			reading_all();
			break;
		case 2:
			int id;
			cout << "\n Enter YOur Gym ID";
			cin >> id;
			reading(id);
			break;
		case 3:
			membership();
			break;
		default:
			cout << "\tinvalid input\n";
			cout << "\nEnter again: ";
			goto membr;
		}

	}

	//displaying data after reading from file 
	void members()
	{
		cout << "\n\n\nMembers:";
		cout << "\n\tName : ";
		cout<< fix.name;
		cout << "\n\tCNIC.NO : ";
		cout << fix.cnic;
		cout << "\n\tAge:";
		cout << fix.age;
		cout << "\n\tCONTACT NO:";
		cout << fix.contact_no;
		cout << "\n\tWeight:";
		cout << fix.weight;
		cout << "\n\tDate Of Joining:";
		cout << fix.doj;
		cout << "\nPress Enter key to return to Main Menu";
		getch();
		menu_w();
	}

	
	void create_member()
	{
		cout << "\n\t\t\t\t\tBuying Membership";
		cout << "\n\nStep 1:\n\n\t\tEnter Your Personnal Info:";
		
		//following function is used to get user data only
		F.user_data();
		
		//asking for instructor upto line :52
		cout << "\n\n Step 2:";
		cout << "\n\tDo You Want To Hire Instuctor?\n\n";
	r:
		cout << "\npress 'y' for yes and 'n' for no : ";
		char ch;
		cin >> ch;
		switch (ch)
		{
		case 'y':
			fee = fee + 5000;
			break;
		case 'n':
			fee = fee + 0;
			break;
		default:
			cout << "\tinvalid input\n";
			goto r;
		}
		//asking for nutritionist upto line:71 
		cout << "\n\nStep 3:\n";
		cout << "\n\tDo You Want To Hire Nutritionist?\n\n";
	w:
		cout << "\npress 'y' for yes and 'n' for no : ";
		char c;
		cin >> c;
		switch (c)
		{
		case 'y':
			fee = fee + 5000;
			break;
		case 'n':
			fee = fee + 0;
			break;
		default:
			cout << "\tinvalid input\n";
			goto w;
		}
		//making total fee
		cout << "\n\nyour total fee is=";
		cout << fee;
		cout << "\n\ndeposit your fee to get membership card\n\n";
		cout << "\nPress 0 to return to the main menu\nOr press 1 to refill the above data : ";
		int q;
	p:
		cin >> q;
		if (q == 0)
		{
			saving();
			menu_w();
		}
		else if (q == 1)
			create_member();
		else if (q != 0 || q != 1)
		{
			cout << "\nInvalid input";
			cout << "\n enter again";
			goto p;
		}
	}
	//this function only gets data of the userupto line:86
	void membership()

	{
		cout << "\n\nMembership:\n";
		cout << "\t1.Buy Membership";
		cout << "\n\t2.Members";
		cout << "\n\t3.Return to Main Menu";
		cout << "\n\nEnter menu number: ";
	member:
		int a;
		cin >> a;
		switch (a)
		{
		case 1:
			create_member();
			break;
		case 2:
			membr();
			break;
		case 3:
			menu_w();
			break;
		default:
			cout << "\tinvalid input\n";
			cout << "\nEnter again: ";
			goto member;
		}
	}

	void help()
	{
		cout << "\n\n\nHelp About: \n";
		cout << "\t1.Buying Membership\n";
		cout << "\t2.Hiring Trainer\n";
		cout << "\t3.Hiring Nutritionist\n";
		cout << "\t4.Classes & Timing\n";
		cout << "\t5.Gym Tyming\n";
		cout << "\t0.Return To Main Menu\n";
		int choice;
		cout << "\nEnter Menu No = ";
		help:
		cin >> choice;
		switch(choice)
		{
		case 1:
			cout << "\n\t\t\t\tBuying Membership\n\n";
			cout << "Following are the steps to buy the membership in the gym\n";
			cout << "\nstep 1:\n \t~ Enter Your personnal information\n";
			cout << "\nstep 2:\n \t~ Tell us if you wont to hire an instructor\n";
			cout << "\nstep 3:\n \t~ Tell us if you wont to hire an nutritionist\n";
			cout << "\nstep 4:\n \t~ Deposit the fee to get membership\n";
			cout << "\nPress enter to return to help menu\n";
			getch();
			help();
			break;
		case 2:
			cout << "\n\t\t\t Hiring INSTRUCTOR\n";
			cout << "\nIn the second step of buying membership you will decide to hire instructor or not. \n if you hire an instructor you will pay 5000 Rs for that.\n";
			cout << "\nPress enter to return to help menu\n";
			getch();
			help();

			break;
		case 3:
			cout << "\n\t\t\t HIRING NUTRITIONIST\n";
			cout << "\nIn the third step of buying membership you will decide to hire nutritionist or not. \n if you hire a nutritionist you will pay 5000 Rs for that.\n";
			cout << "\nPress enter to return to help menu\n";
			getch();
			help();
			break;
		case 4:
			cout << "\n\t\t\t CLASSESS AND THEIR TIMING\n";
			cout << "\nThere are four classes that will be taken every day:\n";
			cout << "\n\t8:00 AM to 9:00 AM\t=>\tHeld by Trainer";
			cout << "\n\t10:00 AM to 11:00 AM\t=>\tHeld by Nutritionist";
			cout << "\n\t8:00 PM to 9:00 PM\t=>\tHeld by Trainer";
			cout << "\n\t10:00 PM to 11:00 PM\t=>\tHeld by Nutritionist";
			cout << "\nPress enter to return to help menu\n";
			getch();
			help();
			break;
		case 5:
			cout << "\n\t\t\t GYM TIMING\n";
			cout << "\nPress enter to return to help menu\n";
			getch();
			help();
			break;
		case 0:
			menu();
			break;
		defult:
			cout << "\ninvalid input\n";
			cout << "\nEnter menu number again: ";
			goto help;
		}
	}

	char fedback[50];
	void feedback()

	{
		
		cout << "\nFeedback:";
		cout << "\n\t1.Give Feedback";
		cout << "\n\t2.View Feedback";
		cout << "\n\t3.Return To Main Menu";
		cout << "\n\nEnter menu number: ";
	feedback:
		int a;
		cin >> a;
		switch (a)
		{
		case 1:
			cout << "\n\t\t\"plz give us any feedback\"\n\t\t\t\t\t : ";
			cin.ignore();
			cin.getline(fedback, 50);
			cout << "\npress enter to return to Feedback menu";
			getch();
			feedback();
			break;
		case 2:
			cout << "\nYour Feedback Is : \n\t\t";
			cout << fedback;
			cout << "\npress enter to return to Feedback menu";
			getch();
			feedback();
			break;
		case 3:
			menu_w();
			break;
		default:
			cout << "\tinvalid input\n";
			cout << "\nEnter again: ";
			goto feedback;
		}
		cout << "\n\t\t\"plz give us any feedback\"\n\t\t\t\t\t : ";
		char feedback[50];
		cin.ignore();
		cin.getline(feedback, 50);
		cout << "\npress enter to return to Main menu";
		getch();
		menu_w();
	}

	void terms()

	{
		cout << "\nTerms & Conditions:\n";
		cout << "\n\"There are so many restrictions that i can't explain uffff!!!\"\n\n\t\t\t\t:)\n";
		cout << "\npress enter to return to Main menu";
		getch();
		menu_w();
	}

	void user_data()

	{
		
		cout << "\n\t\tEnter Your Name (Use \"_\" instead of space) : ";
		cin.ignore();
		cin.getline( c.name,20);
		cout << "\n\t\tEnter Your CNIC.NO : ";
		cin >> c.cnic;
		cout << "\n\t\tEnter Your Age:";
		cin >> c.age;
		cout << "\n\t\tEnter Your CONTACT NO:";
		cin >> c.contact_no;
		cout << "\n\t\tEnter Your Weight:";
		cin >> c.weight;
		cout << "\n\t\tEnter Your Date Of Joining:";
		cin >> c.doj;
	}
	void menu_w()
	{
	m:
		int n = F.menu();

		switch (n)
		{
		case 1:
			F.membership();
			break;
		case 2:
			F.help();
			break;
		case 3:
			F.feedback();
			break;
		case 4:
			F.terms();
			break;
		case 5:
			cout << "\t\t\tPress \"esc\" Button";
			break;
		default:
			cout << "\t\t\tInvalid Input";
			cout << "\n\t\tAgain enter !!!";
			goto m;
		}
	}

}F;

//main function stars from here 

void main()

{
	//to get new gym id from file
	ifstream oy("customer data.txt");
	while (oy)
	{
		oy>>fix.gym_id;
	}
	oy.close();

	//run!!!
	cout << "\n\n\t\t\t \t\t\tWELCOME TO THE GYM\n\n\n";
	m:
	int n=F.menu();

	switch (n)
	{
	case 1:
		F.membership();
		break;
	case 2:
		F.help();
		break;
	case 3:
		F.feedback();
		break;
	case 4:
		F.terms();
		break;
	case 5:
		cout << "\t\t\tPress \"esc\" Button";
		break;
	default:
		cout << "\t\t\tInvalid Input";
		cout << "\n\t\tAgain enter !!!";
		goto m;
	}
	getch();
}










