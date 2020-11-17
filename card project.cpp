#include<iostream>
#include<fstream>
#include<iomanip>
#include<stdlib.h>

using namespace std;

class Card
{
 int sno;
 int date;
 
 int year;
 char month[12];

 char name_customer[20];
 char gender;
 char type[20];
 char address[50];
 //char bridename[20];
 //char bridegroomname[20];
 char maddress[50];
 
 
 public:
  void getData();
  void showData();
  int getAdmno(){return sno;}
}s;

void Card::getData()
{
 cout<<"\n\nEnter Cards Details......\n";
 cout<<"Enter Serial Number No.     : "; cin>>sno;
 cout<<"Enter Full Name of Customer        : "; cin.ignore(); cin.getline(name_customer,20);
 cout<<"Enter Gender (M/F)      : "; cin>>gender;
 cout<<"Enter Address           : "; cin.ignore(); cin.getline(address,50);
 cout<<"Enter Type of Card (Marriage,Birthday,Inauguration and others)   : "; cin >> type;
   cout<<"Date of Occasion        : "; cin>>date;
 cout<<"Month  of Occasion                :";cin.ignore(); cin.getline(month,12);
 cout<<"year of Occasion :" ;cin>>year;
 cout<<"Enter Occasion Address           : "; cin.ignore(); cin.getline(maddress,50);
	
}


void Card::showData()
{
 cout<<"\n\n.......Cards Details......\n";
 cout<<"Serial Number     : "<<sno<<endl;
 cout<<"Full Name         : "<<name_customer<<endl;
 cout<<"Gender            : "<<gender<<endl;
 cout<<"Address           :"<<address<<endl;
 cout<<"Type of Card    : "<<type<<endl;
 cout<<"@IMPORTANT"<<" " <<type <<" "<<"DETAILS"<<endl;
 //cout<<bridename <<"WEDS" <<bridegroomname<<endl;
 cout<<"Occasion Timing Details:"<<endl;
  cout<<"Date :" <<date<<endl;
  cout<<"Month :" <<month<<endl;
   cout<<"year:"<<year<<endl;
   cout<<"Address of Invitation:"<<maddress<<endl;
  
}

void addData()
{
 ofstream fout;
 fout.open("card.txt",ios::binary|ios::out|ios::app);
 s.getData();
 fout.write((char*)&s,sizeof(s));
 fout.close();
 cout<<"\n\nData Successfully Saved to File....\n";
}

void displayData()
{
 ifstream fin;
 fin.open("card.txt",ios::in|ios::binary);
 while(fin.read((char*)&s,sizeof(s)))
 {
  s.showData();
 }
 fin.close();
 cout<<"\n\nData Reading from File Successfully Done....\n";
}

void searchData()
{
 int n, flag=0;
 ifstream fin;
 fin.open("card.txt",ios::in|ios::binary);
 cout<<"Enter Serial Number you want to search : ";
 cin>>n;
 
 while(fin.read((char*)&s,sizeof(s)))
 {
  if(n==s.getAdmno())
  {
   cout<<"The Details of Serial Number No. "<<n<<" shown herewith:\n";
   s.showData();
   flag++;
  }
 }
 fin.close();
 if(flag==0)
  cout<<"The Serial Number "<<n<<" not found....\n\n";
 cout<<"\n\nData Reading from File Successfully Done....\n";
}

void deleteData()
{
 int n, flag=0;
 ifstream fin;
 ofstream fout,tout;

 fin.open("card.txt",ios::in|ios::binary);
 fout.open("Tempcard.txt",ios::out|ios::app|ios::binary);
 tout.open("Trashcard.txt",ios::out|ios::app|ios::binary);
 cout<<"Enter Serial Number you want to move to Trash : ";
 cin>>n;

 while(fin.read((char*)&s,sizeof(s)))
 {
  if(n==s.getAdmno())
  {
   cout<<"The Following Serial Number "<<n<<" has been moved to Trash:\n";
   s.showData();
   tout.write((char*)&s,sizeof(s));
   flag++;
  }
  else
  {
   fout.write((char*)&s,sizeof(s));
  }
 }
 fout.close();
 tout.close();
 fin.close();
 if(flag==0)
  cout<<"The Serial Number "<<n<<" not found....\n\n";
 remove("card.txt");
 rename("tempcard.txt","card.txt");
}

void getTrash()
{
 ifstream fin;
 fin.open("Trashcard.txt",ios::in|ios::binary);
 while(fin.read((char*)&s,sizeof(s)))
 {
  s.showData();
 }
 fin.close();
 cout<<"\n\nData Reading from Trash File Successfully Done....\n";
}

void modifyData()
{
 int n, flag=0, pos;
 fstream fio;

 fio.open("card.txt",ios::in|ios::out|ios::binary);
 
 cout<<"Enter Serial Number you want to Modify : ";
 cin>>n;
 
 while(fio.read((char*)&s,sizeof(s)))
 {
  pos=fio.tellg();
  if(n==s.getAdmno())
  {
   cout<<"The Following Users with serial number "<<n<<" will be modified with new data:\n";
   s.showData();
   cout<<"\n\nNow Enter the New Details Of Users....\n";
   s.getData();
   fio.seekg(pos-sizeof(s));
   fio.write((char*)&s,sizeof(s));
   flag++;
  }
 }
 fio.close();
 
 if(flag==0)
  cout<<"Users with serial number" <<n<<" not found....\n\n";
}

void project()
{
 int ch;
 do
 {
  system("cls");
  cout<<"...............INVITATION CARDS..............\n";
  cout<<"======================================================\n";
  cout<<"0. Exit from Program\n";
  cout<<"1. Write Card Detail to File\n";
  cout<<"2. Read  Order Details From File\n";
  cout<<"3. Search Order Details From File\n";
  cout<<"4. Delete Order From File\n";
  cout<<"5. Get Deleted Records from Trash file\n";
  cout<<"6. Modify Card Details in File\n";
  cout<<"Enter your choice  : ";
  cin>>ch;
  system("cls");
  switch(ch)
  {
   case 1: addData(); break;
   case 2: displayData(); break;
   case 3: searchData(); break;
   case 4: deleteData(); break;
   case 5: getTrash(); break;
   case 6: modifyData(); break;
  }
  system("pause");
 }while(ch);
}

int main()
{
 int i=0;
 string s="NULL01";
 ifstream fin1;
 fin1.open("pwd.txt",ios::app);
 while(!fin1.eof())
 {
     fin1>>s[i++];
 }
 fin1.close();
 if(s=="NULL01")
 {
     R:
     cout<<"\n SET your 6 Digit password";
     cin>>s;
     if(s.length()!=6)
     {
     cout<<"\n\n Password should not be NULL01 \n";
     cout<<"\n\n Password Must be 6 or more than 6 digit long\n";
     goto R;
     }
     ofstream fout1;
     fout1.open("pwd.txt",ios::app);
     fout1<<s;
     fout1.close();

 }
 else
 {
    int c=0;
    string s1;
    R1:
    c++;
    if(c>5)
    {
        cout<<"\n\n Password Limit Exceed";
        exit(0);
    }
    cout<<"\n\n Enter your 6 Digit password";
    cin>>s1;
    if(s1==s) cout<<"\n\n Welcome\n\n";
    else
    {
        cout<<"\n\n Wrong Password\n\n";
        goto R1;
    }
 }
 project();
}
