#include<iostream>
#include <conio.h>
#include"spec.h"
#include<fstream>

using namespace std;


member obj;
customer *ptr = &obj;

void run()
{
	menu();
}

void menu()
{
	system("cls");
	cout << "\n\n\n\t\t\t\t\t\t\tUIIT GYM\n";
	cout << "\nMenu:" << endl;
	cout << "\t1.Members" << endl;
	cout << "\t2.Non-Members" << endl;
	cout << "\t3.Trainers and Classes" << endl;
	cout << "\t4.Terms & condition" << endl;
	cout << "\t5.Help" << endl;
	cout << "\t6.Feedback" << endl;
	cout << "\t7.About" << endl;
	cout << "\t0.Exit" << endl;
	cout << "\nEnter Your Choice : ";
	int choice;
	cin >> choice;
	try
	{
		switch (choice)
		{
		case 1:
			members();
			break;
		case 2:
			non_members();
			break;
		case 3:
			staff_();
			break;
		case 4:
			terms();
			break;
		case 5:
			help();
			break;
		case 6:
			feedback_();
			break;
		case 7:
			about();
			break;
		case 0:
			break;
		default:
			throw (choice);
		}
	}
	catch (int i)
	{
		cout << "You Entered A Wrong Choice";
		getch();
		menu();
	}
}

void members()
{
		system("cls");
		cout << "\n\n\n\t\t\t\t\t\t\tUIIT GYM\n";
		cout << "\nMembers Menu :\n";
		cout << "\t1.New Account";
		cout << "\n\t2.Modify Account" << endl;
		cout << "\t3.Search An Account" << endl;
		cout << "\t4.View All" << endl;
		cout << "\t5.Previous Menu" << endl;
		cout << "\nEnter Your Choice : ";
		int choice;
		cin >> choice;
		try {
			switch (choice)
			{
					case 1:
						create_mem();
						break;
					case 2:
						modify_mem();
						break;
					case 3:
						search_mem();
						break;
					case 4:
						view_all_mem();
						break;
			case 5:
				menu();
				break;
			default:
				throw (choice);
			}
		}
		catch (int i)
		{
			cout << "You Entered A Wrong Choice";
			getch();
			members();
		}
}

void non_members()
{
	system("cls");
	cout << "\n\n\n\t\t\t\t\t\t\tUIIT GYM\n";
	cout << "\nNon-Members Menu :\n";
	cout << "\t1.New Account";
	cout << "\n\t2.Modify Account" << endl;
	cout << "\t3.Search An Account" << endl;
	cout << "\t4.View All" << endl;
	cout << "\t5.Previous Menu" << endl;
	cout << "\nEnter Your Choice : ";
	int choice;
	cin >> choice;
	try
	{
		switch (choice)
		{
			case 1:
			create_nonmem();
			break;
			case 2:
			modify_nonmem();
			break;
			case 3:
			search_nonmem();
			break;
			case 4:
			view_all_nonmem();
			break;
		case 5:
			menu();
			break;
		default:
			throw (choice);
		}
	}
	catch (int i)
	{
		cout << "You Entered A Wrong Choice";
		getch();
		non_members();
	}
}

void staff_()
{
	system("cls");
	cout << "\n\n\n\t\t\t\t\t\t\tUIIT GYM\n";
	cout << "\nTrainers Menu :\n";
	cout << "\t1.Physical Trainers" << endl;
	cout << "\t2.Nutritionists" << endl;
	cout << "\t3.Previous Menu" << endl;
	cout << "\nEnter Your Choice : ";
	int choice;
	cin >> choice;
	try
	{
		switch (choice)
		{
			case 1:
				trainers();
				break;
			case 2:
				nutrionists();
				break;
		case 3:
			menu();
			break;
		default:
			throw (choice);
		}
	}
	catch (int i)
	{
		cout << "You Entered A Wrong Choice";
		getch();
		staff_();
	}
}

void terms()
{
	system("cls");
	cout << "\n\n\n\t\t\t\t\t\t\tUIIT GYM\n";
	cout << "\nTerms And Contions :" << endl;
	cout << "PRINCIPAL TERMS:\n\tThis agreement commences once you have indicated your acceptance in the Declaration section of the web sign up process.";
	cout << "\nIn some locations you can choose to delay the start date of your membership by up to 1 month.If you want to bring this date forward please contact us on 03444 770 005 or at member.services@puregym.com and we will be more than happy to discuss your options.Please do note, however, that the terms in the Money Back Guarantee section of these terms may then apply in that situation.";
	cout << "\nThis agreement will become binding on you and us when we contact you to confirm your membership application has been accepted, at which point a contract will come into existence between you and us.\nYou will be entitled to all the rights and privileges exercisable for the Type of Membership chosen.\nYou cannot transfer this agreement to anyone else.\nAll terms apply to British Military Fitness joint memberships - only available on certain sites.\nFEES AND CHARGES:\n\tThe Joining Fee(if one is payable) and first month's membership fees are collected from you by us either by Debit / Credit card at time of purchase, or by Direct Debit approximately 5 days from your membership application date. These fees are not refundable under any circumstances with the exception of the Money Back Guarantee detailed below. Joining fees are applied to cover the initial administration costs associated with setting up a new membership and direct debit agreement and entitle the member to a gym induction session, bookable online.";
	cout << "If you are looking to upgrade your membership there maybe an admin fee charged at the point at which you upgrade.\nYour second Direct Debit for monthly membership fees only will be collected one month after you joined, unless you joined prior to your gym opening in which case they will be collected one month after the gym opened.Subsequent Direct Debits for monthly membership fees will be collected monthly thereafter.Each payment made is not refundable under any circumstances.\nIf any Direct Debit is returned unpaid or any cheque is returned unpaid or if any other form of payment is not honoured for whatever reason, you shall pay us on demand an administration fee of £20.If, despite us having notified you of a missed payment, further payments are missed, we reserve the right to, at our sole election, either suspend or terminate your membership, upon having given you written notice of our intention to do so.We may present an option to reduce the administration fee if the outstanding amount is paid online within 7 days of becoming due.";
	cout << "You agree to advise us immediately of any change to the Members Details provided.\nA £5.99 monthly charge is applied if you freeze your membership.Your membership can be on freeze for a maximum of 3 months after which your membership will automatically be un - frozen and will revert back to your monthly rate.Freeze only applies to monthly memberships and will start from your payment date.\nPRICES :\n\tFrom time to time we may need to increase the price of membership.We will give you at least 1 full months' notice of any incoming price increase and will make it very clear when the price increase will take effect and how much your membership will cost after the increase. During this period you will have your usual right to terminate your membership in accordance with the membership terms and conditions and rules. If you do not terminate the membership by the date given to you in the notice then the price of your membership will be increased in accordance with our notice.\nPrice drops are valid at the gym highlighted only.The price given is the lowest price available and may apply to off peak or standard monthly memberships – please see individual club page for more details.";
	cout << "\nTERMINATION :\n\tYou may terminate your membership at any point by cancelling your direct debit with your bank, allowing 3 to 4 working days for the bank to action this.Please call Member Services for options available to you or for any further information.\nIn the above circumstances your membership will remain in force until the day before your next payment is due, at which point it will automatically terminate.If you have purchased a Fixed Term or Student membership you will be entitled to 50 % of the pro - rotated amount minus the joining fee as refund for any unused membership.\nMONEY BACK GUARANTEE :\n\tAs per the Consumer Contracts(Information, Cancellation and Additional Charges) Regulations 2013 you are entitled to cancel your membership and receive a full refund of any fees paid within 14 days of completing your membership application form.However, as per regulation 36 of Consumer Contracts(Information, Cancellation and Additional Charges) Regulations 2013, if you select to commence your membership immediately, or you ask us to start your membership early, you agree that if you subsequently cancel your membership within the 14 day period, you will be refunded any monies paid, less an amount for the membership you have already used.As an example of how this works, if your membership fee is £15 per month and you cancel your membership after 10 days of it commencing(having asked us to start it immediately) we shall refund you £10, keeping £5, which represents the membership you had used up to the point of cancellation.";
	cout << "\nPIN ABUSE POLICY :\n\tYour PIN number / Access Device(defined below) can only be used by you : Your PIN number / Access Device is issued solely for your use, as your membership is personal to you and only covers your use of a gym.You are responsible for keeping your PIN number / Access Device secure and confidential at all times.The PIN number / Access Device remains our property at all times(unless agreed otherwise and evidenced in writing).\nUse of PIN numbers is monitored : In the interests of the safety and security of all our members, use of PIN numbers and access is monitored and individuals using PIN numbers / Access Devices may be asked to provide proof of identification.\nWhat we will do if we think your PIN number / Access Device has been misused : Should we believe that your PIN number / Access Device has been used by another individual or individuals we may(in our discretion) decide to conduct an investigation.If we do so we will : (a)inform you, via email, that we believe your PIN number / Access Device has been used by another individual or individuals and ask you to provide us with reasonable assistance to investigate the matter; and (b)following our investigation we will contact you, via email, to inform you of our findings and our proposed course of action, which may include one or more of the steps set out in paragraph 4 below.\nOur Right to make additional charges and / or cancel your membership : If you unreasonably refuse to cooperate with our investigation, or following our investigation we have reasonable grounds to believe that your PIN number was used, with or without your knowledge and / or consent, by another individual or individuals, depending on the particular circumstances of each case, we reserve the right to take one or both of the following steps, which are in addition to any other legal rights that we may have : (a)to apply a penalty charge to your membership fees(and increase your direct debit payment(s) accordingly).The penalty charge will be calculated as being equal to the daily membership charge(that applied at the time of use) for each occasion on which your PIN number was used by that individual / those individuals; and / or (b)in the event of serious misuse of your PIN number, for example, your PIN number has been used on repeated occasions and / or by more than one individual, to notify you, via email, that we are cancelling your membership with immediate effect, and no refunds will be given.\nYour responsibility for another’s conduct : If we have reasonable grounds for believing that you knowingly provided your PIN number / Access Device to another individual or individuals, or allowed unauthorised entry following your entry to the gym(Known as tailgating) in addition to our rights referred to in paragraph 4 above, we may hold you responsible for the conduct of the individual(s) while on our gym premises, and liable for any loss we suffer as a consequence of that conduct.";
	cout << "\nAccess Device : \n\tThe device, key - fob, or any other relevant security hardware device with built - in authentication equipment, issued or otherwise provided to you by us to enable you to securely access the relevant gym in accordance with the terms of your membership.\n\nDAILY MEMBERSHIP TERMS & CONDITIONS :\nPRINCIPAL TERMS : \n\tThis daily membership commences once you have indicated your acceptance in the Declaration section of this web sign up process.\nYour membership will be activated on the date you specified.\nYou will be entitled to all the rights and privileges exercisable for the Type of Membership chosen.\nYou cannot transfer this daily membership to anyone else nor transfer to another date.\nFEES AND CHARGES :\n\tYou shall be entitled to cancel your daily membership the earlier of : (1) 14 days after the date of purchase; or (2) the day before the date on which you selected your daily membership to activate.If you cancel during this period you will receive a full refund.After this period the daily membership fee is not refundable.\n\nGENERAL TERMS & CONDITIONS :\nMISCELLANEOUS TERMS :\n\tMembers must be 16 or older.\nYou agree to comply with the Rules of Membership which are displayed prominently in the Club and relate to opening hours, use of facilities and your conduct.We may make reasonable changes to these Rules at any time provided that we give you advance notice of the change.\nIf we take no action or let you off any breach of this agreement or give you extra time to pay or comply, it will not stop us enforcing the terms of this agreement strictly at a future date.\nWe may assign the benefit of this agreement and our rights thereunder to a third party on notice to you.Your rights under this agreement will not be prejudiced.\nThere may be occasions where we have to close all, or part of, the gym of which you are a member.We will do our best to let you know of such closures in advance of them taking place, unless the problem is urgent or an emergency.We will use all commercially reasonable endeavours to ensure that such closures are outside of peak visiting hours and are kept to a minimum, in both duration and frequency.You will not be entitled to a refund of part of, or all of, your membership fees in such circumstances.\nWe will not be liable or responsible for any failure to perform, or delay in performance of, any of our obligations under these terms that is caused by any event that is outside of our reasonable control.\nWe will not be liable or responsible for outstanding monies paid to a Personal Trainer.Personal Training is arranged directly with the PT and not with Pure Gym Limited.\nAs a consumer, you have legal rights in relation to any services that are not carried out with reasonable skill and care, or if the materials we use are faulty or not as described.Advice about your legal rights is available from your local Citizens' Advice Bureau or Trading Standards office. Nothing in these terms will affect these legal rights.";
	cout << "\nThis agreement is governed by English Law.\n\n";
	cout << "Press Enter To Continue";
	getch();
	menu();
}

void feedback_()
{
	system("cls");
	cout << "\n\n\n\t\t\t\t\t\t\tUIIT GYM\n";
	cout << "\nFeedback Menu" << endl;
	cout << "\t1.Give Feedback" << endl;
	cout << "\t2.See Feedbacks" << endl;
	cout << "\t3.Previous Menu" << endl;
	cout << "\nEnter Your Choice : ";
	int choice;
	cin >> choice;
	try
	{
		switch (choice)
		{
		case 1:
			input_feedback();
			break;
		case 2:
			view();
			break;
		case 3:
			menu();
			break;
		default:
			throw (choice);
		}
	}
	catch (int i)
	{
		cout << "You Entered A Wrong Choice";
		getch();
		feedback_();
	}
}

void about()
{
	system("cls");
	cout << "\n\n\n\t\t\t\t\t\t\tUIIT GYM\n";
	cout << "\nAbout :\n" << endl;
	cout << "\n\t\"At UIIT_Gym we believe everyone should have the opportunity to enjoy a fit and healthy lifestyle.\n\tSo we have made it simple, affordable & convenient for everyone to achieve their personal health goals.\n\tWhether you're a beginner or a pro, young or old, we're here for everybody.\"";
	cout << "\n\n\nPress Enter To Go To Main Menu";
	getch();
	menu();
}

void feedback::get_feedback()
{
	cout << "\tEnter Your Name :\n\t\t";
	cin.ignore();
	cin.getline(name, 30);
	cout << "\n\tEnter Your Feedback :\n\t\t";
	cin.ignore();
	cin.getline(feedbacks, 100);
}

void feedback::show_feedback()
{
	cout << "\tName :" << name;
	cout << "\n\tFeedback :" << feedbacks;
}


int member::mid = 0;
void member::create_acc()
{
	system("cls");
	cout << "\n\n\n\t\t\t\t\t\t\tUIIT GYM\n";
	cout << "\nCreate Account Menu  :" << endl;
	cout << "\nEnter name :";
	cin.ignore();
	cin.getline(name, 50);
	cout << "\nEnter cnic :";
	cin.ignore();
	cin.getline(cnic, 21);
	cout << "\nEnter age :";
	cin >> age;
	cout << "\nEnter weight :";
	cin >> weight;
	cout << "\nEnter height :";
	cin >> hight;
	cout << "\n\nYOUR GYM_ID IS :" << mmid;
	cout << "\nDo You Want To Hire Physical Trainer (y/n):";
	char ch;
	cin >> ch;
	if (ch == 'y')
		mem_fee += 5000;
	else
		mem_fee = mem_fee;
	cout << "\nDo You Want To Hire Nutritionists (y/n):";
	char cha;
	cin >> cha;
	if (cha == 'y')
		mem_fee += 5000;
	else
		mem_fee = mem_fee;
	cout << "\n\nGYM Fee : 5000\nYour Fee Will Be : " << mem_fee<<endl;
	cout << "\n\t\t\tACCOUNT CREATED" << endl;
}
void member::show()
{
	cout << "\n\n#  " << mmid/2 << "----------------------------------------" ;
	cout << "\nName\t :" << name;
	cout << "\nGYM ID\t :" << mmid;
	cout << "\nCnic\t :" << cnic;
	cout << "\nAge\t :" << age;
	cout << "\nWeight\t :" << weight;
	cout << "\nHight\t :" << hight;
	cout << "\nFee\t :" << mem_fee << endl;
}
int non_member::id = 0;

int member::reid()
{
	return mmid;
}

int memid()
{
	member ids;
	ifstream id("member.dat", ios::binary);
	id.seekg(-sizeof(member), ios_base::end);
	id.read(reinterpret_cast<char*>(&ids), sizeof(member));
	return ids.reid();
}

void create_mem()
{
	member obj;
	obj.create_acc();
	ofstream input("member.dat", ios::binary | ios::app);
	input.write(reinterpret_cast<char*>(&obj), sizeof(member));
	input.close();
	cout << "\nPress Enter To Go TO Previous Menu";
	getch();
	members();
}

void modify_mem()
{
	system("cls");
	cout << "\n\n\n\t\t\t\t\t\t\tUIIT GYM\n";
	cout << "\nModifying Members Menu :\n";
	cout << "\nEnter ID To MOdify Your Account:";
	int id1;
	cin >> id1;
	member obj;
	fstream file("member.dat", ios::binary | ios::ate | ios::in | ios::out);
	file.seekg(0);
	file.read(reinterpret_cast<char*>(&obj), sizeof(member));
	int c = 0;
	while (!file.eof())
	{
		if (obj.reid() == id1)
		{
			c++;
			member obj2;
			obj2.create_acc();
			int loc = file.tellp();
			loc -= sizeof(member);
			file.seekp(loc);
			file.write(reinterpret_cast<char*>(&obj2), sizeof(member));
			file.close();
		}
		file.read(reinterpret_cast<char*>(&obj), sizeof(member));
	}
	if (c == 0)
		cout << "\nData Not Found ";

	cout << "\nPress Enter To Go TO Previous Menu";
	getch();
	members();
}

void search_mem()
{
	system("cls");
	cout << "\n\n\n\t\t\t\t\t\t\tUIIT GYM\n";
	cout << "\nSearching Members Menu :\n";
	cout << "\nEnter ID To Search Your Account:";
	int id1;
	cin >> id1;
	fstream file("member.dat", ios::binary | ios::ate | ios::in | ios::out);
	file.seekg(0);
	file.read(reinterpret_cast<char*>(&obj), sizeof(member));
	int c = 0;
	while (!file.eof())
	{
		if (obj.reid() == id1)
		{
			c++;
			obj.show();
		}
		file.read(reinterpret_cast<char*>(&obj), sizeof(member));
	}
	if (c == 0)
		cout << "\nData Not Found ";

	cout << "\nPress Enter To Go TO Previous Menu";
	getch();
	members();
}

void view_all_mem()
{
	member obj;
	ifstream out("member.dat", ios::binary);
	out.seekg(0);
	out.read(reinterpret_cast<char*>(&obj), sizeof(member));
	while(!out.eof())
	{
		obj.show();
		out.read(reinterpret_cast<char*>(&obj), sizeof(member));
	}
	cout << "\nPress Enter To Go TO Previous Menu";
	getch();
	members();
}

void non_member::create_acc()
{
	system("cls");
	cout << "\n\n\n\t\t\t\t\t\t\tUIIT GYM\n";
	cout << "\nCreate Account Menu  :" << endl;
	cout << "\nEnter name\t :";
	cin.ignore();
	cin.getline(name, 50);
	cout << "\nEnter cnic\t :";
	cin.ignore();
	cin.getline(cnic, 21);
	cout << "\nEnter age\t :";
	cin >> age;
	cout << "\nEnter weight\t :";
	cin >> weight;
	cout << "\nEnter height\t :";
	cin >> hight;
	cout << "\nYour Fee Will Be\t : " << fee << endl;
	cout << "\n\t\t\tACCOUNT CREATED" << endl;
}

void non_member::show()
{
	cout << "\n\n#  " << nid/2 << "----------------------------------------";
	cout << "\nName\t :" << name;
	cout << "\nGYM ID\t :" << nid;
	cout << "\nCnic\t :" << cnic;
	cout << "\nAge\t :" << age;
	cout << "\nWeight\t :" << weight;
	cout << "\nHight\t :" << hight;
	cout << "\nFee\t : " << fee << endl;
}

int non_member::reid()
{
	return nid;
}

void create_nonmem()
{
	non_member obj;
	obj.create_acc();
	ofstream input("non_member.dat", ios::binary | ios::app);
	input.write(reinterpret_cast<char*>(&obj), sizeof(non_member));
	input.close();
	cout << "\nPress Enter To Go TO Previous Menu";
	getch();
	non_members();
}

void modify_nonmem()
{
	system("cls");
	cout << "\n\n\n\t\t\t\t\t\t\tUIIT GYM\n";
	cout << "\nModifying Non_Members Menu :\n";
	cout << "\nEnter ID To MOdify Your Account:";
	int id1;
	cin >> id1;
	member obj;
	fstream file("non_member.dat", ios::binary | ios::ate | ios::in | ios::out);
	file.seekg(0);
	file.read(reinterpret_cast<char*>(&obj), sizeof(non_member));
	int c = 0;
	while (!file.eof())
	{
		if (obj.reid() == id1)
		{
			c++;
			member obj2;
			obj2.create_acc();
			int loc = file.tellp();
			loc -= sizeof(non_member);
			file.seekp(loc);
			file.write(reinterpret_cast<char*>(&obj2), sizeof(non_member));
			file.close();
		}
		file.read(reinterpret_cast<char*>(&obj), sizeof(non_member));
	}
	if (c == 0)
		cout << "\nData Not Found ";

	cout << "\nPress Enter To Go TO Previous Menu";
	getch();
	non_members();
}

void search_nonmem()
{
	system("cls");
	cout << "\n\n\n\t\t\t\t\t\t\tUIIT GYM\n";
	cout << "\nSearching Members Menu :\n";
	cout << "\nEnter ID To Search Your Account:";
	int id1;
	cin >> id1;
	non_member obj;
	fstream file("non_member.dat", ios::binary | ios::ate | ios::in | ios::out);
	file.seekg(0);
	file.read(reinterpret_cast<char*>(&obj), sizeof(non_member));
	int c = 0;
	while (!file.eof())
	{
		if (obj.reid() == id1)
		{
			c++;
			obj.show();
		}
		file.read(reinterpret_cast<char*>(&obj), sizeof(non_member));
	}
	if (c == 0)
		cout << "\nData Not Found ";

	cout << "\nPress Enter To Go TO Previous Menu";
	getch();
	non_members();
}

void view_all_nonmem()
{
	non_member obj;
	ifstream out("non_member.dat", ios::binary);
	out.seekg(0);
	out.read(reinterpret_cast<char*>(&obj), sizeof(non_member));
	while (!out.eof())
	{
		obj.show();
		out.read(reinterpret_cast<char*>(&obj), sizeof(non_member));
	}
	cout << "\nPress Enter To Go TO Previous Menu";
	getch();
	non_members();
}

void classes::show()
{
	cout << "\n\n#  " << id  << "----------------------------------------";
	cout << "\nName\t :" << name;
	cout << "\nCnic\t :" << cnic;
	cout << "\nID\t :" << id;
	cout << "\nTimming\t :" << timming << endl;
	cout << "Type\t :" << type << endl;
	cout << "Class No\t :" << no<<endl;
}
int staff::id = 0;
void nutrionists()
{

	system("cls");
	cout << "\n\n\n\t\t\t\t\t\t\tUIIT GYM\n";
	cout << "\nNutrionists :" << endl;
	classes t[4];
	t[0].input("Hassan", "37405_3434343_3", "Nutritionist", "7:00 AM to 8:00 AM",1);
	t[1].input("Aqib", "37405_3434343_3", "Nutritionist", "7:00 PM to 8:00 PM",2);
	ofstream file("staff.dat", ios::binary|ios::app);
	file.write(reinterpret_cast<char*>(&t[0]), sizeof(classes));
	file.write(reinterpret_cast<char*>(&t[1]), sizeof(classes));
	file.close();
	ifstream file1("staff.dat", ios::binary);
	file1.read(reinterpret_cast<char*>(&t[2]), sizeof(classes));
	file1.read(reinterpret_cast<char*>(&t[3]), sizeof(classes));
	file1.close();
	t[2].show();
	t[3].show();
	cout << "\nPress Enter To Go TO Previous Menu";
	getch();
	staff_();
	staff_();
}

void trainers()
{
	system("cls");
	cout << "\n\n\n\t\t\t\t\t\t\tUIIT GYM\n";
	cout << "\nTrainers :" << endl;
	classes t[4];
	t[0].input("saqib", "37405_3434343_3", "Trainer", "8:00 AM to 9:00 AM",3);
	t[1].input("yasin", "37405_3434343_3", "Trainer", "8:00 PM to 9:00 PM",4);
	ofstream file("staff.dat", ios::binary|ios::app);
	file.write(reinterpret_cast<char*>(&t[0]), sizeof(classes));
	file.write(reinterpret_cast<char*>(&t[1]), sizeof(classes));
	file.close();
	ifstream file1("staff.dat", ios::binary);
	file1.read(reinterpret_cast<char*>(&t[2]), sizeof(classes));
	file1.read(reinterpret_cast<char*>(&t[3]), sizeof(classes));
	file1.close();
	t[2].show();
	t[3].show();
	cout << "\nPress Enter To Go TO Previous Menu";
	getch();
	staff_();
}

void classes::input(char name1[50], char cnic1[21], char type1[20], char timming1[50],int n)
{
	strcpy(name, name1);
	strcpy(cnic, cnic1);
	strcpy(type, type1);
	strcpy(timming, timming1);
	no = n;
}

void input_feedback()
{
	system("cls");
	cout << "\n\n\n\t\t\t\t\t\t\tUIIT GYM\n";
	cout << "\nFeedback Input Menu " << endl;
	feedback obj;
	obj.get_feedback();
	ofstream file("feedback.dat", ios::binary);
	file.write(reinterpret_cast<char*>(&obj), sizeof(feedback));
	file.close();
	cout << "\nPress Enter To Go TO Previous Menu";
	getch();
	feedback_();
}

void view()
{
	system("cls");
	cout << "\n\n\n\t\t\t\t\t\t\tUIIT GYM\n";
	cout << "\nFeedback Input Menu " << endl;
	feedback obj;
	ifstream file("feedback.dat", ios::binary);
	file.seekg(0);
	file.read(reinterpret_cast<char*>(&obj), sizeof(person));
	while (!file.eof())
	{
		obj.show_feedback();
		file.read(reinterpret_cast<char*>(&obj), sizeof(person));
	}
	cout << "\n\nPress Enter To Go To Feedback Menu";
	getch();
	feedback_();
}

void help()
{
	system("cls");
	cout << "\n\n\n\t\t\t\t\t\t\tUIIT GYM\n";
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
	switch (choice)
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