#include<iostream>
#include<cstdlib>
using namespace std;

int add(int a, int b)
{
        return(a+b);
}
float add(float c,float d)
{
        return(c+d);
}
int sub(int a, int b)
{
        return(a-b);
}
float sub(float c,float d)
{
        return(c-d);
}
int mul(int a, int b)
{
        return(a*b);
}
float mul(float c,float d)
{
        return(c*d);
}
int divd(int a, int b)
{
        return(a/b);
}
float divd(float c,float d)
{
        return(c/d);
}

int main()
{
        float c,d;
        int a,b,ch,ch1,ch2;

        do
        {
                cout<<"\n\n *****Menu***** \n";
                cout<<"\n 1. Calculate integers";
                cout<<"\n 2. Calculate floats";
                cout<<"\n 3. Exit";
                cout<<"\n\n Enter Your Choice : ";
                cin>>ch;
                switch(ch)
                {
                        case 1:
                        do
                        {
                                cout<<"\n Enter numbers: ";
                                cin>>a>>b;
                                cout<<"\n 1. Add";
                                cout<<"\n 2. Substract";
                                cout<<"\n 3. Multiply";
                                cout<<"\n 4. Divide";
                                cout<<"\n 5. Exit";
                                cout<<"\n\n Enter Your Choice : ";
                                cin>>ch1;
                                     switch(ch1)
                                        {
                                            case 1:
                                            {   cout<<"\n a+b= : "<<add(a,b);
                                                break;}
                                            case 2:
                                            {   cout<<"\n a-b= : "<<sub(a,b);
                                                break;}
                                            case 3:
                                            {   cout<<"\n a*b= : "<<mul(a,b);
                                                break;}
                                            case 4:
                                            {   cout<<"\n a/b= : "<<divd(a,b);
                                                break;}
                                            case 5:
                                                exit(0);
                                            default:
                                                cout<<"\n Invalid Choice... ";
                                        }
                        break;
                        }while(ch!=5);

                        case 2:
                        do
                        {
                                cout<<"\n Enter numbers: ";
                                cin>>c>>d;
                                cout<<"\n 1. Add";
                                cout<<"\n 2. Substract";
                                cout<<"\n 3. Multiply";
                                cout<<"\n 4. Divide";
                                cout<<"\n 5. Exit";
                                cout<<"\n\n Enter Your Choice : ";
                                cin>>ch2;
                                     switch(ch2)
                                        {
                                            case 1:
                                            {   cout<<"\n a+b= : "<<add(c,d);
                                                break;}
                                            case 2:
                                            {   cout<<"\n a-b= : "<<sub(c,d);
                                                break;}
                                            case 3:
                                            {   cout<<"\n a*b= : "<<mul(c,d);
                                                break;}
                                            case 4:
                                            {   cout<<"\n a/b= : "<<divd(c,d);
                                                break;}
                                            case 5:
                                                exit(0);
                                            default:
                                                cout<<"\n Invalid Choice... ";
                                        }
                        break;
                        }
                        while(ch!=5);

                        case 3:
                                exit(0);
                        default:
                                cout<<"\n Invalid Choice... ";
                }
        }while(ch!=3);
        return 0;
}
