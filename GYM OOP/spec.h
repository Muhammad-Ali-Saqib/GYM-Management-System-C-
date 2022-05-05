void run();
void menu();
void members();
void non_members();
void staff_();
void terms();
void feedback_();
void about();
void create_mem();
void view_all_mem();
void modify_mem();
void search_mem();
void create_nonmem();
void modify_nonmem();
void search_nonmem();
void view_all_nonmem();
void trainers();
void nutrionists();
void input_feedback();
void view();
void help();
class person
{
protected:
	char name[50];
	int age;
	char cnic[21];
public:
	virtual void show() = 0;
};

class customer :public person
{
protected:
	int weight;
	float hight;
public:
};

class member : public customer
{
	int mem_fee ;
	static int mid;
	int mmid;
public:
	member()
	{
		mid++;
		mmid = mid;
		mem_fee = 5000;
	}
	void create_acc();
	void show();
	int reid();
};
class non_member :public customer
{
	const int fee=5000;
	static int id;
	int nid;
public:
	non_member()
	{
		id++;
		nid = id;
	}
	void create_acc();
	void show();
	int reid();
};

class staff:public person
{
protected:
	static int id;
	int oid;
	char type[20];
	char timming[50];
public:
	staff()
	{
		id++;
		oid = id;
	}
};
class classes :public staff
{
	int no;
public:
	void input(char name1[50], char cnic1[21], char type1[20], char timming1[50],int n);
	void show();
};
class feedback
{
	char name[30];
	char feedbacks[100];
public:
	void get_feedback();
	void show_feedback();
};
