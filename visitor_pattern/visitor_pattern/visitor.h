
#include <fstream>
#include <string>
using namespace std;

class pavement_factory
{
public:
	virtual void accept(class Visitor &v,int i,int n) = 0;
	virtual void PrintDepartment() = 0;
};




class Classic_sizes_department : public pavement_factory
{
public:
	void accept(Visitor &v, int i, int n);
	void PrintDepartment(){
		fstream f;
		f.open("data.txt", ios_base::app);
		f << "orders for classic sizes department:\n";
		f.close();
	}
	string Classic_pavement(int n)
	{ 
		string res = "Classic pavement: ";
		res += to_string(n);
		res += " square meters\n";
		return res;
	}
	string Triangle_pavement(int n)
	{
		string res = "Triangle pavement: ";
		res += to_string(n); res += " square meters\n";
		return res;
	}
	string Colored_pavement(int n)
	{
		string res = "Colored pavement: ";
		res += to_string(n); res += " square meters\n";
		return res;
	}
	string Stone_imit_pavement(int n)
	{
		string res = "Stone-imitated pavement: ";
		res += to_string(n); res += " square meters\n";
		return res;
	}
};






class Small_sizes_department : public pavement_factory
{
public:
	void accept(Visitor &v, int i, int n);
	void PrintDepartment(){
		fstream f;
		f.open("data.txt", ios_base::app);
		f << "orders for small sizes department:\n";
		f.close();
	}
	string Classic_pavement(int n)
	{
		string res = "Classic pavement in small size: ";
		res += to_string(n); res += " square meters\n";
		return res;
	}
	string Triangle_pavement(int n)
	{
		string res = "Triangle pavement in small size: ";
		res += to_string(n); res += " square meters\n";
		return res;
	}
	string Colored_pavement(int n)
	{
		string res = "Colored pavement in small size: ";
		res += to_string(n); res += " square meters\n";
		return res;
	}
	string Stone_imit_pavement(int n)
	{
		string res = "Stone-imitated pavement in small size: ";
		res += to_string(n); res += " square meters\n";
		return res;
	}
};





class Big_sizes_department : public pavement_factory
{
public:
	void accept(Visitor &v, int i, int n);
	void PrintDepartment(){
		ofstream f;
		f.open("data.txt",ios_base::app);
		f << "orders for big sizes department:\n";
		f.close();
	}
	string Classic_pavement(int n)
	{
		string res = "Classic pavement in big sizes: ";
		res += to_string(n); res += " square meters\n";
		return res;
	}
	string Triangle_pavement(int n)
	{
		string res = "Triangle pavement in big sizes: ";
		res += to_string(n); res += " square meters\n";
		return res;
	}
	string Colored_pavement(int n)
	{
		string res = "Colored pavement in big sizes: ";
		res += to_string(n); res += " square meters\n";
		return res;
	}
	string Stone_imit_pavement(int n)
	{
		string res = "Stone-imitated pavement in big sizes: ";
		res += to_string(n); res += " square meters\n";
		return res;
	}
};






class Visitor
{
public:
	virtual void visit(Classic_sizes_department *e,int indx,int col) = 0;
	virtual void visit(Small_sizes_department *e, int indx, int col) = 0;
	virtual void visit(Big_sizes_department *e, int indx, int col) = 0;
};

void Classic_sizes_department::accept(Visitor &v,int i,int n){ v.visit(this,i,n); }
void Small_sizes_department::accept(Visitor &v, int i, int n) { v.visit(this, i, n); }
void Big_sizes_department::accept(Visitor &v, int i, int n){ v.visit(this, i, n); }





class Vip_client : public Visitor
{
	void visit(Big_sizes_department *e, int indx, int col)
	{
		ofstream f;
		f.open("data.txt", ios_base::app);
		string res = "Vip-client ordered:\n";
		switch (indx)
		{
		case 1:
		{
			res += e->Classic_pavement(col);
			break;
		}
		case 2:
		{
			res += e->Triangle_pavement(col);
			break;
		}
		case 3:
		{
			res += e->Colored_pavement(col);
			break;
		}
		case 4:
		{
			res += e->Stone_imit_pavement(col);
			break;
		}
		}
		res += "\n";
		f << res;
		f.close();
	}
	void visit(Classic_sizes_department *e, int indx,int col)
	{

		fstream f;
		f.open("data.txt", ios_base::app);
		string res = "Vip-client ordered:\n";
		switch (indx)
		{
		case 1:
		{
			res += e->Classic_pavement(col);
			break;
		}
		case 2:
		{
			res += e->Triangle_pavement(col);
			break;
		}
		case 3:
		{
			res += e->Colored_pavement(col);
			break;
		}
		case 4:
		{
			res += e->Stone_imit_pavement(col);
			break;
		}
		}
		res += "\n";
		f << res;
		f.close();
	}
	void visit(Small_sizes_department *e,int indx,int col)
	{
		fstream f;
		f.open("data.txt", ios_base::app);
		string res = "Vip-client ordered:\n";
		switch (indx)
		{
		case 1:
		{
			res += e->Classic_pavement(col);
			break;
		}
		case 2:
		{
			res += e->Triangle_pavement(col);
			break;
		}
		case 3:
		{
			res += e->Colored_pavement(col);
			break;
		}
		case 4:
		{
			res += e->Stone_imit_pavement(col);
			break;
		}
		}
		res += "\n";
		f << res;
		f.close();
	}
};










class New_client : public Visitor
{
	void visit(Big_sizes_department *e, int indx, int col)
	{
		fstream f;
		f.open("data.txt", ios_base::app);
		string res = "New client ordered:\n";
		switch (indx)
		{
		case 1:
		{
			res += e->Classic_pavement(col);
			break;
		}
		case 2:
		{
			res += e->Triangle_pavement(col);
			break;
		}
		case 3:
		{
			res += e->Colored_pavement(col);
			break;
		}
		case 4:
		{
			res += e->Stone_imit_pavement(col);
			break;
		}
		}
		res += "\n";
		f << res;
		f.close();
	}
	void visit(Classic_sizes_department *e, int indx, int col)
	{

		fstream f;
		f.open("data.txt", ios_base::app);
		string res = "New client ordered:\n";
		switch (indx)
		{
		case 1:
		{
			res += e->Classic_pavement(col);
			break;
		}
		case 2:
		{
			res += e->Triangle_pavement(col);
			break;
		}
		case 3:
		{
			res += e->Colored_pavement(col);
			break;
		}
		case 4:
		{
			res += e->Stone_imit_pavement(col);
			break;
		}
		}
		res += "\n";
		f << res;
		f.close();
	}
	void visit(Small_sizes_department *e, int indx, int col)
	{
		fstream f;
		f.open("data.txt", ios_base::app);
		string res = "New client ordered:\n";
		switch (indx)
		{
		case 1:
		{
			res += e->Classic_pavement(col);
			break;
		}
		case 2:
		{
			res += e->Triangle_pavement(col);
			break;
		}
		case 3:
		{
			res += e->Colored_pavement(col);
			break;
		}
		case 4:
		{
			res += e->Stone_imit_pavement(col);
			break;
		}
		}
		res += "\n";
		f << res;
		f.close();
	}
};









class Registered_client : public Visitor
{
	void visit(Big_sizes_department *e, int indx, int col)
	{
		fstream f;
		f.open("data.txt", ios_base::app);
		string res = "Registered client ordered:\n";
		switch (indx)
		{
		case 1:
		{
			res += e->Classic_pavement(col);
			break;
		}
		case 2:
		{
			res += e->Triangle_pavement(col);
			break;
		}
		case 3:
		{
			res += e->Colored_pavement(col);
			break;
		}
		case 4:
		{
			res += e->Stone_imit_pavement(col);
			break;
		}
		}
		res += "\n";
		f << res;
		f.close();
	}
	void visit(Classic_sizes_department *e, int indx, int col)
	{

		fstream f;
		f.open("data.txt", ios_base::app);
		string res = "Registered client ordered:\n";
		switch (indx)
		{
		case 1:
		{
			res += e->Classic_pavement(col);
			break;
		}
		case 2:
		{
			res += e->Triangle_pavement(col);
			break;
		}
		case 3:
		{
			res += e->Colored_pavement(col);
			break;
		}
		case 4:
		{
			res += e->Stone_imit_pavement(col);
			break;
		}
		}
		res += "\n";
		f << res;
		f.close();
	}
	void visit(Small_sizes_department *e, int indx, int col)
	{
		fstream f;
		f.open("data.txt", ios_base::app);
		string res = "Registered client ordered:\n";
		switch (indx)
		{
		case 1:
		{
			res += e->Classic_pavement(col);
			break;
		}
		case 2:
		{
			res += e->Triangle_pavement(col);
			break;
		}
		case 3:
		{
			res += e->Colored_pavement(col);
			break;
		}
		case 4:
		{
			res += e->Stone_imit_pavement(col);
			break;
		}
		}
		res += "\n";
		f << res;
		f.close();
	}
};