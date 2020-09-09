#include<iostream>
#include<string>
#include <conio.h>
using namespace std;
static int ci=0;
class customer
{
	int cid;
	string cname;
	int cage;
	string city;
	string mop;
	string email;
	string checkind;
	string checkoutd;
	
	public:
		customer()
		{
			cid=0;
			cname='NULL';
			cage=0;
			city='NULL';
			mop='NULL';
			email='NULL';
		}
		void addcustomer()
		{
			cout<<"\nenter customer id:";
			cin>>cid;
			cout<<"\nenter customer name:";
			cin.ignore();
			getline(cin,cname);
			cout<<"\nenter customer age:";
			cin>>cage;
			cout<<"\nenter customer city:";
			cin.ignore();
			getline(cin,city);
			cout<<"\nenter customer mop:";
			
			getline(cin,mop);
			cout<<"\nenter customer email:";
			
			getline(cin,email);
			cout<<"\nenter check in date:";
		
			getline(cin,checkind);
			cout<<"\nenter check out date:";
	
			getline(cin,checkoutd);
			
		}
		friend void customerrep(customer*);
		friend void delcustomer(customer*);
		friend void showcustomer(customer*);
		
	
};

class room
{
	string type;
	int rate;
	string status;
	string state;
	
	public:
			room(string a)
		{
			if(a =="single")
			{
				type="single";
				rate=2000;
				status="available";
				state="clean";
				
			}
			else if(a=="double")
			{
				type="double";
				rate=4000;
				status="available";
				state="clean";
				
			}
			else if(a=="suite")
			{
				type="suite";
				rate=6000;
				status="available";
				state="clean";
				
			}
			
			
		}
		friend void roombook(customer *,room *,room *,room*);
		friend void checkavail(room*,room*,room*);
		friend void viewallroom(room *,room *,room*);
		friend void viewavailroom(room *,room*,room *);
		friend void viewbookroom(room *,room*,room *);
		
		
};
 class staff
{
	int id;
	string name;
	int age;
	string department; 
	string designation;
	public:
	staff()
	{
		id=0;
		name='NULL';
		age=0;
		department='NULL';
		designation='NULL';
	}
		friend void addstaff(staff*);
		friend void delstaff(staff*);
		friend void showstaff(staff*);
		friend void staffrep(staff *);
};

class inventory
{
	public:
	int fid;
	string iname;
	int quantity;
	int rate;
	public:
		inventory()
		{
			fid=0;
		}
		friend void addin(inventory*);
		friend void delin(inventory*);
		friend void showin(inventory*);
};
class department 
{
	int did;
	string dname;
	
	public:
	department()
	{
		did=0;
		dname='NULL';
	}
	department(string s,int i)
	{
		did=i;
		dname=s;
	}
		friend void adddepartment(department*);
		friend void deldepartment(department*);
		friend void showdepartment(department*);
		friend void updepartment(department*);
};
void addin(inventory *arr)
{
	static int i=0;


	cout<<"\n enter the inventory item id: ";
	cin>>arr[i].fid;
	cout<<"\n enter the inventory item name: ";
	cin>>arr[i].iname;
	cout<<"\n enter the inventory item quantity: ";
	cin>>arr[i].quantity;
	cout<<"\n enter the inventory item rate: ";
	cin>>arr[i].rate;
	cout<<"\n item added";
	i++;
	

}
void delin(inventory *arr)
{
	int t,s=0;
	cout<<"\n enter the item id to delete: ";
	cin>>t;   
    while(arr[s].fid!=t && s<6)
	{
	
	s++;
}
	arr[s].fid=0;
	arr[s].iname='/0';
	arr[s].quantity=0;
	arr[s].rate=0;
}
void showin(inventory *arr)
{
	
	for(int i=0;i<5;i++)
	{
		if(arr[i].fid==0)
		continue;
		cout<<"\n id: "<<arr[i].fid;
		cout<<"\n name: "<<arr[i].iname;
		cout<<"\n quantity: "<<arr[i].quantity;
		cout<<"\n rate: "<<arr[i].rate;
	}}
	void adddepartment(department *arr)

{
	static int i=5;


	cout<<"\n enter the department id: ";
	cin>>arr[i].did;
	cout<<"\n enter the department name: ";
	cin>>arr[i].dname;
	i++;
}
void deldepartment(department *arr)
{
	int t,s=0;
	cout<<"\n enter the id of department to delete: ";
	cin>>t;   
    while(arr[s].did!=t && s<10)
	{
	
	s++;
}
	arr[s].did=0;
	arr[s].dname='/0';
}
void updepartment(department * arr)
{
	int i=0,t;
	cout<<"\nenter department id to update: ";
	cin>>t;
	while(arr[i].did!=t && i<10)
	i++;
	cout<<"\nenter new department id:";
	cin>>arr[i].did;
		cout<<"\nenter new department name:";

	cin>>arr[i].dname;
}
void showdepartment(department *arr)
{
		for(int i=0;i<10;i++)
	{
		if(arr[i].did==0)
		continue;
		cout<<"\n id of the department: "<<arr[i].did;
		cout<<"\n name of the department: "<<arr[i].dname;

	}
}
void addstaff(staff *arr)
{
	static int i=0;


	cout<<"\n enter the staff member ID: ";
	cin>>arr[i].id;
	cout<<"\n enter the staff member name: ";
	cin>>arr[i].name;
	cout<<"\n enter the staff member department: ";
	cin>>arr[i].department;
	cout<<"\n enter the staff member designation: ";
	cin>>arr[i].designation;
	cout<<"\n enter the staff member age: ";
	cin>>arr[i].age;
	cout<<"\n A new staff member hired";
	i++;
}
void delstaff(staff *arr)
{
	int t,s=0;
	cout<<"\n enter the staff member id to delete: ";
	cin>>t;   
    while(arr[s].id!=t && s<6)
	{
	
	s++;
}
	arr[s].id=0;
	arr[s].name='NULL';
	arr[s].age=0;
	arr[s].department='NULL';
	arr[s].designation='NULL';
}
void showstaff(staff *arr)
{
		for(int i=0;i<5;i++)
	{
		if(arr[i].id==0)
		continue;
		cout<<"\n id: "<<arr[i].id;
		cout<<"\n name: "<<arr[i].name;
		cout<<"\n age: "<<arr[i].age;
		cout<<"\n department: "<<arr[i].department;
		cout<<"\n designation: "<<arr[i].designation;
	}
}
void staffrep(staff *st)
{
	int x=0;
	while(x<20)
	{
	
	if ( st[x].id==0)
	continue;
	cout<<st[x].name<<"\t\t\t"<<st[x].department<<endl;
	x++;
}
}
void viewallroom(room *arr,room *arr1,room *arr2)
{
	for(int i=0;i<5;i++)
	{
		cout<<"\n\n\nroom "<<i+1<<endl;
		cout<<"\nroom type: "<<arr[i].type;
		cout<<"\nroom rate: "<<arr[i].rate;
		cout<<"\nroom status: "<<arr[i].status;
		cout<<"\nroom state: "<<arr[i].state;
	}
	for(int i=0;i<3;i++)
	{
		cout<<"\n\n\nroom "<<i+6<<endl;
	cout<<"\nroom type: "<<arr1[i].type;
		cout<<"\nroom rate: "<<arr1[i].rate;
		cout<<"\nroom status: "<<arr1[i].status;
		cout<<"\nroom state: "<<arr1[i].state;
	}
	for(int i=0;i<2;i++)
	{ 
	cout<<"\n\n\nroom "<<i+9<<endl;
	cout<<"\nroom type: "<<arr2[i].type;
		cout<<"\nroom rate: "<<arr2[i].rate;
		cout<<"\nroom status: "<<arr2[i].status;
		cout<<"\nroom state: "<<arr2[i].state;
	}
}
void viewavailroom(room * arr,room* arr1,room * arr2)
{
	for(int i=0;i<5;i++)
	{
		if(arr[i].status!="available")
		continue;
		cout<<"\n\n\nroom "<<i+1<<endl;
		cout<<"\nroom type: "<<arr[i].type;
		cout<<"\nroom rate: "<<arr[i].rate;
		cout<<"\nroom status: "<<arr[i].status;
		cout<<"\nroom state: "<<arr[i].state;
	}
	for(int i=0;i<3;i++)
	{
		if(arr1[i].status!="available")
		continue;
		cout<<"\n\n\nroom "<<i+6<<endl;
	cout<<"\nroom type: "<<arr1[i].type;
		cout<<"\nroom rate: "<<arr1[i].rate;
		cout<<"\nroom status: "<<arr1[i].status;
		cout<<"\nroom state: "<<arr1[i].state;
	}
	for(int i=0;i<2;i++)
	{ 
	if(arr2[i].status!="available")
		continue;
	cout<<"\n\n\nroom "<<i+9<<endl;
	cout<<"\nroom type: "<<arr2[i].type;
		cout<<"\nroom rate: "<<arr2[i].rate;
		cout<<"\nroom status: "<<arr2[i].status;
		cout<<"\nroom state: "<<arr2[i].state;
	}
	
}
void viewbookroom(room * arr,room* arr1,room * arr2)
{
	for(int i=0;i<5;i++)
	{
		if(arr[i].status!="unavailable")
		continue;
		cout<<"\n\n\nroom "<<i+1<<endl;
		cout<<"\nroom type: "<<arr[i].type;
		cout<<"\nroom rate: "<<arr[i].rate;
		cout<<"\nroom status: "<<arr[i].status;
		cout<<"\nroom state: "<<arr[i].state;
	}
	for(int i=0;i<3;i++)
	{
		if(arr1[i].status!="unavailable")
		continue;
		cout<<"\n\n\nroom "<<i+6<<endl;
	cout<<"\nroom type: "<<arr1[i].type;
		cout<<"\nroom rate: "<<arr1[i].rate;
		cout<<"\nroom status: "<<arr1[i].status;
		cout<<"\nroom state: "<<arr1[i].state;
	}
	for(int i=0;i<2;i++)
	{ 
	if(arr2[i].status!="unavailable")
		continue;
	cout<<"\n\n\nroom "<<i+9<<endl;
	cout<<"\nroom type: "<<arr2[i].type;
		cout<<"\nroom rate: "<<arr2[i].rate;
		cout<<"\nroom status: "<<arr2[i].status;
		cout<<"\nroom state: "<<arr2[i].state;
	}
	
}
void roombook(customer *c,room * arr,room* arr1,room * arr2)
{
	
	int rate;
	c[ci].addcustomer();
	ci++;
	cout<<"\nenter the room rate to book: ";
	cin>>rate;
	if(rate==2000)
	{
		int a=0;
		while(arr[a].status!="available" && a<5)
		{
			a++;
		}
		      
				arr[a].status="unavailable";
		cout<<"\n room booked";
		}
			if(rate==4000)
	{
		int b=0;
		while(arr1[b].status!="available" && b<3)
		{
			b++;
		}
		      
				arr1[b].status="unavailable";
		cout<<"\n room booked";
		}
			if(rate==6000)
	{
		int c=0;
		while(arr2[c].status!="available" && c<2)
		{
			c++;
		}
		      
				arr2[c].status="unavailable";
		cout<<"\n room booked";
		}
		
}
void checkavail(room* arr,room* arr1,room* arr2)
{
	string temp;
	int a=0;
	cout<<"\nenter room type to check availibilty: ";
	cin.ignore();
	getline(cin,temp);
	if(temp=="single")
	{
		for(int i=0;i<5;i++)
		{
			if(arr[i].status=="available" && arr[i].state=="clean")
			{
				a++;
			}
		}
		cout<<"\nthere are "<<a<<"single rooms available";
	}
		if(temp=="double")
	{
		for(int i=0;i<3;i++)
		{
			if(arr1[i].status=="available" && arr1[i].state=="clean")
			{
				a++;
			}
		}
		cout<<"\nthere are "<<a<<" double rooms available";
	}
		if(temp=="suite")
	{
		for(int i=0;i<2;i++)
		{
			if(arr2[i].status=="available" && arr2[i].state=="clean")
			{
				a++;
			}
		}
		cout<<"\nthere are "<<a<<" suite rooms available";
	}
}
void customerrep(customer *c)
	{
		int i=0;
	while(i<10)
				{
					if(c[i].cid==0)
					continue;
			cout<<"\n"<<c[i].cname<<"\t\t\t"<<c[i].checkind<<"\t\t\t"<<c[i].checkoutd;
			i++;
		}
		}
		
		void delcustomer(customer *c)
		{
			int tid,i=0;
			cout<<"\nenter customer id to delete:";
			cin>>tid;
			while(c[i].cid!=tid && i<10)
			{
				i++;
			}
			c[i].cid=0;
			c[i].cname='NULL';
			c[i].cage=0;
			c[i].city='NULL';
			c[i].mop='NULL';
			c[i].email='NULL';
			
		}
		void showcustomer(customer *c)
		{
				int i=0;
	while(i<10)
				{
					if(c[i].cid==0)
					continue;
			cout<<"\nname:"<<c[i].cname;
			cout<<"\nid:"<<c[i].cid;
			
			cout<<"\nage:"<<c[i].cage;
			cout<<"\ncity:"<<c[i].city;
			cout<<"\nmethod of payment:"<<c[i].mop;
			cout<<"\nemail:"<<c[i].email;
			i++;
		}
		}

int main()
{
	room a[5]={{"single"},{"single"},{"single"},{"single"},{"single"}};
	room b[3]={{"double"},{"double"},{"double"}};
	room c[2]={{"suite"},{"suite"}};
	inventory in[20];
	customer cu[10];
	department dep[20]={{"management",1},{"reservation",2},{"cleaning",3},{"inventory",4},{"admin",5}};
	staff st[20];
	string uname;
	string password;
	cout<<"\nUSERNAME:";
	getline(cin,uname);

	cout<<"\nPASSWORD:";


	char ch;
	 ch = _getch();
   while(ch != 13){
      password.push_back(ch);
      cout << '*';
      ch = _getch();
   }

	
	

	
	int choice=5;
	
	while(choice!=0)
	{
		
	if(uname=="owner" && password=="owner")
	{
	cout<<"\n1. Inventory Management"<<endl;
	cout<<"2. Room Management"<<endl;
	cout<<"3. Department Management"<<endl;
	cout<<"4. Reservation Management"<<endl;
	cout<<"5. Staff Management"<<endl;
	cout<<"6. Customer Management"<<endl;
	cout<<"7. Generate Reports"<<endl;
	
	
	cin>>choice;
		switch (choice)
		{
			case 1:
				cout<<"\n\n**********Inventory Management***********";
				cout<<"\nEnter 1 to add an inventory";
				cout<<"\nEnter 2 to Delete an inventory";
				cout<<"\nEnter 3 to show inventories";
				
				cin>>choice;
				if (choice==1)
				{
					addin(in);
				}
				else if (choice==2)
				{
					delin(in);
				
				}
				else if(choice==3)
				{
					showin(in);
				}
				else 
				{
				}
				break;
				
			case 2:
				cout<<"\n\n**********Room Management***********";
				cout<<"\nEnter 1 to view all rooms";
				cout<<"\nEnter 2 to view available rooms";
				cout<<"\nEnter 3 to view booked rooms";
				
				
				cin>>choice;
				if (choice==1)
				{
					viewallroom(a,b,c);
				}
				else if (choice==2)
				{
					viewavailroom(a,b,c);
				
				}
				else if(choice==3)
				{
					viewbookroom(a,b,c);
				}
				
				break;
				
				
			case 3:
				cout<<"\n\n**********Department Management***********";
				cout<<"\nEnter 1 to add department";
				cout<<"\nEnter 2 to Delete a department";
				cout<<"\nEnter 3 to show all departments";
				cout<<"\nEnter 4 to update a department";
				
				cin>>choice;
				if (choice==1)
				{
					adddepartment(dep);
				}
				else if (choice==2)
				{
					deldepartment(dep);
				
				}
				else if(choice==3)
				{
					showdepartment(dep);
				}
				else if(choice==4)
				{
					updepartment(dep);
				}
				else 
				{
				}
				break;
				
				
			case 4:
				cout<<"\n**********Reservation Management***********";
				cout<<"\nEnter 1 to book a room;";
				cout<<"\nEnter 2 to check availability of a room";
				
				cin>>choice;
				if (choice==1)
			
				{
					roombook(cu,a,b,c);
				}
				else if (choice==2)
				{
					checkavail(a,b,c);
				}
				else
				{
				}
				break;
				
				
			case 5:
				cout<<"\n\n**********Staff Management***********";
				cout<<"\nEnter 1 to add a staff";
				cout<<"\nEnter 2 to add a staff";
				cout<<"\nEnter 3 to show staff members";
				
				cin>>choice;
				if (choice==1)
				{
					addstaff(st);
					cout<<"A new staff member hired";
				}
				else if (choice==2)
				{
					delstaff(st);
				
				}
				else if(choice==3)
				{
					showstaff(st);
				}
				else 
				{
				}
				break;
				
				
			case 6:
				cout<<endl<<"________________________________________________________________"<<endl;
				cout<<"\n\n**********Customer Management***********"<<endl;
				cout<<"\nEnter 1 to Add a customer"<<endl;
				cout<<"\nEnter 2 to delete a customer"<<endl;
				cout<<"\nEnter 3 to show customers"<<endl;
				cin>>choice;
				if (choice==1)
				{
					cu[ci].addcustomer();
					ci++;
				cout<<"added";
				}
				
				if (choice==2)
				{
				delcustomer(cu);
			
				}
				
				if (choice==3)
				{
					showcustomer(cu);
				
				}
			break;
					
			
			case 7:
				cout<<"\n\n*********************REPORT GENERATION***********************";
					cout<<"\nEnter 1 to generate customer report"<<endl;
	cout<<"\nEnter 2 to generate the staff report"<<endl;
	cout<<"\nEnter 3 to generate total sale report"<<endl;
	cout<<"\nEnter 0 to return to main menu"<<endl;
	cout<<"\nEnter 5 to exit"<<endl;
	
	cin>>choice;
	
	while(choice!=5)
	{
		

	

	
	if (choice==1)
	{
		cout<<"************************************Customer Report**********************************"<<endl;
		cout<<"Customer Name\t\t\t\tCheck-in Date\t\t\t\tcheck-out date"<<endl;
		customerrep(cu);
	}
	else if (choice==2)
	{
		cout<<"************************************staff Report**********************************"<<endl;
		cout<<"staff Name\t\t\t\tdepartment"<<endl;
		staffrep(st);
	}
	else if (choice==3)
	{
		cout<<"************************************sale Report**********************************"<<endl;
		cout<<"date\t\t\troom type\t\t\troom rate"<<endl;
		
	}
	else if (choice==0)
	{
		
	}
	else
	{
		
	}
}
				
		}
	}

		if(uname=="manager" && password=="manager")
	{
	cout<<"\n1. Inventory Management"<<endl;
	cout<<"2. Room Management"<<endl;
	cout<<"3. Customer Management"<<endl;
		cin>>choice;
		switch (choice)
		{
			case 1:
				cout<<"\n\n**********Inventory Management***********";
				cout<<"\nEnter 1 to add an inventory";
				cout<<"\nEnter 2 to Delete an inventory";
				cout<<"\nEnter 3 to show inventories";
				
				cin>>choice;
				if (choice==1)
				{
					addin(in);
				}
				else if (choice==2)
				{
					delin(in);
				
				}
				else if(choice==3)
				{
					showin(in);
				}
				else 
				{
				}
				break;
				
			case 2:
				cout<<"\n\n**********Room Management***********";
				cout<<"\nEnter 1 to view all rooms";
				cout<<"\nEnter 2 to view available rooms";
				cout<<"\nEnter 3 to view booked rooms";
				
				
				cin>>choice;
				if (choice==1)
				{
					viewallroom(a,b,c);
				}
				else if (choice==2)
				{
					viewavailroom(a,b,c);
				
				}
				else if(choice==3)
				{
					viewbookroom(a,b,c);
				}
				
				break;
					case 3:
				cout<<endl<<"________________________________________________________________"<<endl;
				cout<<"\n\n**********Customer Management***********"<<endl;
				cout<<"\nEnter 1 to Add a customer"<<endl;
				cout<<"\nEnter 2 to delete a customer"<<endl;
				cout<<"\nEnter 3 to show customers"<<endl;
				cin>>choice;
				if (choice==1)
				{
					cu[ci].addcustomer();
					ci++;
				cout<<"added";
				}
				
				if (choice==2)
				{
				delcustomer(cu);
			
				}
				
				if (choice==3)
				{
					showcustomer(cu);
				
				}
			break;
				
}

}
       	if(uname=="receptionist" && password=="receptionist")
       	{
       		cout<<"\n**********Reservation Management***********";
				cout<<"\nEnter 1 to book a room";
				cout<<"\nEnter 2 to check availability of a room";
				
				cin>>choice;
				if (choice==1)
			
				{
					roombook(cu,a,b,c);
				}
				else if (choice==2)
				{
					checkavail(a,b,c);
				}
				else
				{
				}
				break;
		   }
       	
}

}
