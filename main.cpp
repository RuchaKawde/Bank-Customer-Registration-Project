#include <iostream>

using namespace std;

class EMPLOYEE
{
public:
    string acn,name;
    double bal,profit,loss;
    void setdata(int i)
   {
    cout<<"Employee "<<i+1<<" Data\n";
    cout<<"Enter Account no:\n";
    cin>>acn;
    cout<<"Enter name:\n";
    cin>>name;
    cout<<"Enter balance:\n";
    cin>>bal;
    cout<<"Enter profit\n";
    cin>>profit;
    cout<<"Enter loss:\n";
    cin>>loss;
   }

};
class Clerk:public EMPLOYEE
{
    public:
    void clerk(int i)
    {
        cout<<"Employee "<<i+1<<" Data\n";
        cout<<"Account No:"<<acn<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Balance:"<<bal<<endl;
    }

    void manager(int i)
    {
        cout<<"Employee "<<i+1<<" Data\n";
        cout<<"Account No:"<<acn<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Balance:"<<bal<<endl;
        cout<<"Profit:"<<profit<<endl;
        cout<<"loss:"<<loss<<endl;
    }

};




int main()
{
    Clerk m[400];
    int a,j=1,b,n=0,d,t=0,y=0,k=1,k1=1;
    double z;
    string c,x;
    cout<<"***********************************************Bank Data System**********************************************\n";
    while(j)
    {
    cout<<"Menu\n1.Clerk login\n2.Manager login\n0.Exit\nEnter your choice:";
    cin>>a;
        switch(a)
        {
        case 1:
            while(k)
           {
            cout<<"Clerk login\n1.Add employee\n2.Show\n0.Exit\nEnter your choice:";
            cin>>b;
            switch(b)
            {
            case 1:
                cout<<"Enter no of employee to be added:\n";
                cin>>n;
                for(int i=0;i<n;i++)
                {
                    m[i].setdata(i);
                }
                break;
            case 2:
                   for(int i=0;i<n;i++)
                   if(m[i].acn!="Unknown")
                    m[i].clerk(i);

                break;
            case 0:
                k=0;
                break;
            }

           }
        break;
        case 2:
            while(k1)
            {cout<<"Manager login\n1.Show\n2.Search\n3.Update\n4.Delete\n0.exit\nEnter your choice:";
            cin>>b;
            switch(b)
            {
            case 1:
                for(int i=0;i<n;i++)
                {
                    if(m[i].acn!="Unknown")
                    m[i].manager(i);
                }
                break;
            case 2:
                cout<<"Enter the account no:";
                cin>>c;
                for(int i=0;i<n;i++)
                {
                   if(c==m[i].acn)
                   {
                      cout<<"Account No:"<<m[i].acn<<endl;
                      cout<<"Name:"<<m[i].name<<endl;
                      cout<<"Balance:"<<m[i].bal<<endl;
                      cout<<"Profit:"<<m[i].profit<<endl;
                      cout<<"loss:"<<m[i].loss<<endl;
                   }
                }
                break;
            case 3:
                cout<<"Enter the Account number:";
                cin>>c;
                for(int i=0;i<n;i++)
                {
                   if(c==m[i].acn)
                   {
                       cout<<"OK What do you want to update?\n1.Name\n2.Balance\n3.Profit\n4.Loss\nEnter your choice:";
                       cin>>d;
                       y=i;
                   }
                  if(c!=m[i].acn)
                    t++;
            }
                  if(t==n)
             {
                 cout<<"your entered ID is not available\n";
             }
        switch(d)
        {
        case 1:
            cout<<"Your old name is"<<m[y].name;
            cout<<"Enter new name:\n";
            cin>>x;
            cout<<"Your old name is "<<m[y].name<<"Your new name is"<<x;
            m[y].name=x;
            cout<<"ok your name is updated";
            break;
        case 2:
            cout<<"Your old balance is"<<m[y].bal;
            cout<<"Enter your new balance:\n";
            cin>>z;
            cout<<"Your old balance is "<<m[y].bal<<"Your new balance is"<<z;
            m[y].bal=z;
            cout<<"ok your balance is updated";
            break;
        case 3:
            cout<<"Your old profit is"<<m[y].profit;
            cout<<"Enter new profit:\n";
            cin>>z;
            cout<<"Your old profit is "<<m[y].profit<<"Your new profit is"<<z;
            m[y].bal=z;
            cout<<"ok your profit is updated";
            break;
        case 4:
            cout<<"Your old loss is"<<m[y].loss;
            cout<<"Enter your new loss:\n";
            cin>>z;
            cout<<"Your old loss is "<<m[y].loss<<"Your new name is"<<z;
            m[y].loss=z;
            cout<<"ok your Loss is updated";
            break;
        }
        break;
        case 4:
            cout<<"Enter the account to be deleted:";
            cin>>c;
            for(int i=0;i<n;i++)
            {
               if(c==m[i].acn)
               {
                m[i].acn="Unknown";
               }
            }
         break;
        case 0:
            k1=0;
        }
            }
        case 0:
            j=0;

        break;
    }
    }

    return 0;
}


