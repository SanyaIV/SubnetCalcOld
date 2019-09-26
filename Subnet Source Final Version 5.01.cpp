#include <iostream> 
#include <iomanip>
#include <string>
#include <fstream>
#include <sstream>
#include <Windows.h>

using namespace std;

int main()
{
cout << "Subnet Calculator Final Version 5.01" << endl;
Sleep(1000);
system("CLS");
    
string Menu;

system("CLS");
cout << "Chose what to do:" << endl << endl;
cout << "1. Subnet Calculator W/ IP and Subnet Mask" << endl;
cout << "2. Subnet Calculator W/ Amount of Subnets" << endl;
cout << "3. Subnet Calculator W/ Amount of Hosts" << endl;
cout << "4. History" << endl << endl;
cout << "Option: ";
getline (cin, Menu);
system("CLS");

if (Menu == "1" || Menu == "1.")
{
int loop = 1;
while (loop == 1)
{
	int a[4], b[4], c[3], d[4], e[4], f[2], w[4], log, Menu2;
	int classA = 127;
	int classB = 192;
	int classC = 224;
	int octal[2];
	octal[1] = 255;
	octal[2] = 0;
	int classabc;
	cout << "Press enter after each octet, do NOT use dots." << endl;
	cout << "IP: ";
	cin >> a[1];
	system("CLS");
	cout << "IP: " << a[1] << ".";
	cin >> a[2];
	system("CLS");
	cout << "IP: " << a[1] << "." << a[2] << ".";
	cin >> a[3];
	system("CLS");
	cout << "IP: " << a[1] << "." << a[2] << "." << a[3] << ".";
	cin >> a[4];
	system("CLS");
	cout << "IP: " << a[1] << "." << a[2] << "." << a[3] << "." << a[4] << endl;
	cout << "SM: ";
	cin >> b[1];
	system("CLS");
	cout << "IP: " << a[1] << "." << a[2] << "." << a[3] << "." << a[4] << endl;
    cout << "SM: " << b[1] << ".";
	cin >> b[2];
	system("CLS");
	cout << "IP: " << a[1] << "." << a[2] << "." << a[3] << "." << a[4] << endl;
	cout << "SM: " << b[1] << "." << b[2] << ".";
	cin >> b[3];
	system("CLS");
	cout << "IP: " << a[1] << "." << a[2] << "." << a[3] << "." << a[4] << endl;
	cout << "SM: " << b[1] << "." << b[2] << "." << b[3] << ".";
	cin >> b[4];
	system("CLS");
	cout << "IP: " << a[1] << "." << a[2] << "." << a[3] << "." << a[4] << endl;
	cout << "SM: " << b[1] << "." << b[2] << "." << b[3] << "." << b[4] << endl;

	if (a[1] < classA)
	{
		classabc = 1;
		log = 1;
		cout << "" << endl;
	}
	else
		if (a[1] == classA)
		{
			classabc = 2;
			log = 0;
			cout << "" << endl;
		}
		else
			if (a[1] < classB && a[1] > classA)
			{
				classabc = 3;
				log = 1;
				cout << "" << endl;
			}
			else
				if (a[1] >= classB && a[1] < classC)
				{
					classabc = 4;
					log = 1;
					cout << "" << endl;
				}
				 else
				     if (a[1] >= classC)
		             {
                         classabc = 5;
                         log = 0;
                         cout << "" << endl;
                     }
	if (classabc == 1)
	{
		c[1] = a[1];
	}
	else
		if (classabc == 2)
		{
			cout << "NIC" << endl;
		}
		else
			if (classabc == 3)
			{
				c[1] = a[1];
				c[2] = a[2];
			}
			else
				if (classabc == 4)
				{
					c[1] = a[1];
					c[2] = a[2];
					c[3] = a[3];
				}
	if (a[1] > octal[1])
	{
		cout << "This is not a valid IP address." << endl << "-----------" << endl;
		Sleep(3000);
		system("CLS");
		continue;
	}
	else
		if (a[2] > octal[1])
		{
			cout << "This is not a valid IP address." << endl << "-----------" << endl;
			Sleep(3000);
			system("CLS");
			continue;
		}
		else
			if (a[3] > octal[1])
			{
				cout << "This is not a valid IP address." << endl << "-----------" << endl;
				Sleep(3000);
				system("CLS");
				continue;
			}
			else
				if (a[4] > octal[1])
				{
					cout << "This is not a valid IP address." << endl << "-----------" << endl;
					Sleep(3000);
					system("CLS");
					continue;
				}
				else
					if (a[1] == octal[2])
					{
						cout << "This is not a valid IP address." << endl << "-----------" << endl;
						Sleep(3000);
						system("CLS");
						continue;
					}
				    else
				        if (classabc == 5)
	                    {
                           cout << "This IP is either a class D or class E address, this application does not support anything other than A, B and C" << endl;
                           Sleep(6000);
                           system("CLS");
                           continue;  
                        }
					    else
                        {
        	                 cout << "Your IP address is:       " << a[1] << "." << a[2] << "." << a[3] << "." << a[4] << endl;
                        }
	if (b[1] != octal[1])
	{
		cout << "This is not a valid subnet mask." << endl;
		Sleep(3000);
		system("CLS");
		continue;
	}
	else
		if (b[2] > b[1] || b[2] != 0 && b[2] != 128 && b[2] != 192 && b[2] != 224 && b[2] != 240 && b[2] != 248 && b[2] != 252 && b[2] != 254 && b[2] != 255)
		{
			cout << "This is not a valid subnet mask." << endl;
			Sleep(3000);
			system("CLS");
			continue;
		}
		else
			if (b[3] > b[1] || b[3] > b[2] || b[3] != 0 && b[3] != 128 && b[3] != 192 && b[3] != 224 && b[3] != 240 && b[3] != 248 && b[3] != 252 && b[3] != 254 && b[3] != 255)
			{
				cout << "This is not a valid subnet mask." << endl;
				Sleep(3000);
				system("CLS");
				continue;
			}
			else
				if (b[4] > b[1] || b[4] > b[2] || b[4] > b[3] || b[4] != 0 && b[4] != 128 && b[4] != 192 && b[4] != 224 && b[4] != 240 && b[4] != 248 && b[4] != 252 && b[4] != 254)
				{
					cout << "This is not a valid subnet mask." << endl;
					Sleep(3000);
					system("CLS");
					continue;
				}
	if (classabc == 1)
	{
		cout << "Default subnet mask:      255.0.0.0" << endl;
	}
	else
		if (classabc == 2)
		{
			cout << "Default subnet mask:      NIC can't have a subnet mask." << endl;
		}
		else
			if (classabc == 3)
			{
				cout << "Default subnet mask:      255.255.0.0" << endl;
			}
			else
				if (classabc ==4)
				{
					cout << "Default subnet mask:      255.255.255.0" << endl;
				}

	if (classabc == 1)
	{
		cout << "Subnet mask:              " << b[1] << "." << b[2] << "." << b[3] << "." << b[4] << endl; 
	}
	else
		if (classabc == 2)
		{
			cout << "Subnet mask:              NIC can't have a subnet mask." << endl;
		}
		else
			if (classabc == 3)
			{
				cout << "Subnet mask:              " << b[1] << "." << b[2] << "." << b[3] << "." << b[4] << endl;
			}
			else
				if (classabc == 4)
				{
					cout << "Subnet mask:              " << b[1] << "." << b[2] << "." << b[3] << "." << b[4] << endl;
				}
		if (classabc == 1)
	{
        d[1] = a[1] & b[1];
		d[2] = a[2] & b[2];
		d[3] = a[3] & b[3];
		d[4] = a[4] & b[4];
		cout << "Subnet:                   " << d[1] << "." << d[2] << "." << d[3] << "." << d[4] << endl;
	}
	else
		if (classabc == 2)
		{
			cout << "Subnet:                   NIC" << endl;
		}
		else
			if (classabc == 3)
			{
                         d[1] = a[1] & b[1];
                         d[2] = a[2] & b[2];
				         d[3] = a[3] & b[3];
				         d[4] = a[4] & b[4];
				         cout << "Subnet:                   " << d[1] << "." << d[2] << "." << d[3] << "." << d[4] << endl;
			}
			else
				if ( classabc == 4)
				{
                     d[1] = a[1] & b[1];
                     d[2] = a[2] & b[2];
                     d[3] = a[3] & b[3];
                     d[4] = a[4] & b[4];
					 cout << "Subnet:                   " << d[1] << "." << d[2] << "." << d[3] << "." << d[4] << endl;
				}
	if (classabc == 1 || classabc == 3 || classabc == 4)
	{
       w[1] = 255-b[1];
       w[2] = 255-b[2];
       w[3] = 255-b[3];
       w[4] = 255-b[4];
       cout << "Wildcard:                 " << w[1] << "." << w[2] << "." << w[3] << "." << w[4] << endl;
       } else if(classabc == 2)
         {
              cout << "Wildcard:                 " << "NIC" << endl;
          }
    if (classabc == 1)
	{
                 e[1] = a[1] | (255-b[1]);
		         e[2] = a[2] | (255-b[2]);
		         e[3] = a[3] | (255-b[3]);
		         e[4] = a[4] | (255-b[4]);
		         cout << "Broadcast:                " << e[1] << "." << e[2] << "." << e[3] << "." << e[4] << endl;
	}
	else
		if (classabc == 2)
		{
			cout << "Broadcast:                NIC" << endl;
		}
		else
			if (classabc == 3)
			{
                         e[1] = a[1] | (255-b[1]);
                         e[2] = a[2] | (255-b[2]);
                         e[3] = a[3] | (255-b[3]);
				         e[4] = a[4] | (255-b[4]);
		                 cout << "Broadcast:                " << e[1] << "." << e[2] << "." << e[3] << "." << e[4] << endl;
			}
			else
				if ( classabc == 4)
				{
                     e[1] = a[1] | (255-b[1]);
                     e[2] = a[2] | (255-b[2]);
                     e[3] = a[3] | (255-b[3]);
					 e[4] = a[4] | (255-b[4]);
					 cout << "Broadcast:                " << e[1] << "." << e[2] << "." << e[3] << "." << e[4] << endl;
				}
	if (classabc == 1)
	{
		f[1] = d[4] + 1;
		f[2] = e[4] - 1;
		cout << "Valid IP range:           " << d[1] << "." << d[2] << "." << d[3] << "." << f[1] << " to " << e[1] << "." << e[2] << "." << e[3] << "." << f[2] << endl;
	}
	else
		if (classabc == 2)
		{
			cout << "Valid IP Range:           Does not exist, NIC";
		}
		else
			if (classabc == 3)
			{
				f[1] = d[4] + 1;
				f[2] = e[4] - 1;
				cout << "Valid IP range:           " << d[1] << "." << d[2] << "." << d[3] << "." << f[1] << " to " << e[1] << "." << e[2] << "." << e[3] << "." << f[2] << endl;
			}
			else
				if (classabc == 4)
				{
					f[1] = d[4] + 1;
					f[2] = e[4] - 1;
					cout << "Valid IP range:           " << d[1] << "." << d[2] << "." << d[3] << "." << f[1] << " to " << e[1] << "." << e[2] << "." << e[3] << "." << f[2] << endl;
				}
	if (classabc == 1)
	{
		cout << "Your IP is of Class:      A" << endl << "-----------" << endl;
	}
	else
		if (classabc == 2)
		{
			cout << "Your IP is of Class:      NIC " << endl << "-----------" << endl;
		}
		else
			if (classabc == 3)
			{
				cout << "Your IP is of Class:      B" << endl << "-----------" << endl;
			}
			else
				if (classabc == 4)
				{
					cout << "Your IP is of Class:      C" << endl << "-----------" << endl;
				}
    if (log == 1)
       {
            ofstream myfile ("History.log", ios::app);
            myfile << "IP: " << a[1] << "." << a[2] << "." << a[3] << "." << a[4] << "\n";
            myfile << "SM: " << b[1] << "." << b[2] << "." << b[3] << "." << b[4] << "\n \n";
            if (classabc == 1)
               {
                         myfile << "Subnet: " << d[1] << "." << d[2] << "." << d[3] << "." << d[4] << "\n";
                         myfile << "Wildcard: " << w[1] << "." << w[2] << "." << w[3] << "." << w[4] << "\n";
                         myfile << "Broadcast: " << e[1] << "." << e[2] << "." << e[3] << "." << e[4] << "\n";
                         myfile << "Valid IP range: " << d[1] << "." << d[2] << "." << d[3] << "." << f[1] << " to " << e[1] << "." << e[2] << "." << e[3] << "." << f[2] << "\n";
                         cout << "Successfully wrote to history" << endl;
               } else if (classabc == 3)
                         {
                                   myfile << "Subnet: " << d[1] << "." << d[2] << "." << d[3] << "." << d[4] << "\n";
                                   myfile << "Wildcard: " << w[1] << "." << w[2] << "." << w[3] << "." << w[4] << "\n";
                                   myfile << "Broadcast: " << e[1] << "." << e[2] << "." << e[3] << "." << e[4] << "\n";
                                   myfile << "Valid IP range: " << d[1] << "." << d[2] << "." << d[3] << "." << f[1] << " to " << e[1] << "." << e[2] << "." << e[3] << "." << f[2] << "\n";
                                   cout << "Successfully wrote to history" << endl;
                         } else if (classabc == 4)
                                   {
                                             myfile << "Subnet: " << d[1] << "." << d[2] << "." << d[3] << "." << d[4] << "\n";
                                             myfile << "Wildcard: " << w[1] << "." << w[2] << "." << w[3] << "." << w[4] << "\n";
                                             myfile << "Broadcast: " << e[1] << "." << e[2] << "." << e[3] << "." << e[4] << "\n";
                                             myfile << "Valid IP range: " << d[1] << "." << d[2] << "." << d[3] << "." << f[1] << " to " << e[1] << "." << e[2] << "." << e[3] << "." << f[2] << "\n";
                                             cout << "Successfully wrote to history" << endl;
                                   }
            myfile << "--------------------------- \n";
            myfile.close();
            cout << "-----------" << endl << endl;
       }
       cout << "1. Menu" << endl;
       cout << "2. Continue" << endl << endl;
       cin >> Menu2;
       if (Menu2 == 1)
          {
                 cin.ignore(1000,'\n');
                 cout << "\n" << endl;
                 system("CLS");
                 main();
                 return 0;
          } else 
                 {
                        system("CLS");
                        continue;
                 }
    }
} else if (Menu == "2" || Menu == "2.")
       {
        string a;
        int b1, b2, b3;
        
        cout << "Class A, B or C?: ";
        getline(cin, a);
        
        if(a == "A" || a == "a")
        {
              cout << "Max subnets: 4194304" << endl;
              cout << "Amount of subnets you need: ";
              cin >> b3;
              if(b3 == 1)
              {
                    cout << "Subnet mask: 255.0.0.0" << endl;
                    cin.ignore(1000, '\n');
                    cout << "\n" << endl;
                    cin.clear();
                    cin.get();
                    system("CLS");
                    main();
                    return 0;
              }else if(b3 == 2)
                    {
                          cout << "Subnet mask: 255.128.0.0" << endl;
                          cin.ignore(1000, '\n');
                          cout << "\n" << endl;
                          cin.clear();
                          cin.get();
                          system("CLS");
                          main();
                          return 0;
                    }else if(b3 == 3 || b3 == 4)
                          {
                                cout << "Subnet mask: 255.192.0.0" << endl;
                                cin.ignore(1000, '\n');
                                cout << "\n" << endl;
                                cin.clear();
                                cin.get();
                                system("CLS");
                                main();
                                return 0;
                          }else if(b3 >= 5 && b3 <= 8)
                                {
                                      cout << "Subnet mask: 255.224.0.0" << endl;
                                      cin.ignore(1000, '\n');
                                      cout << "\n" << endl;
                                      cin.clear();
                                      cin.get();
                                      system("CLS");
                                      main();
                                      return 0;
                                }else if(b3 >= 9 && b3 <= 16)
                                      {
                                            cout << "Subnet mask: 255.240.0.0" << endl;
                                            cin.ignore(1000, '\n');
                                            cout << "\n" << endl;
                                            cin.clear();
                                            cin.get();
                                            system("CLS");
                                            main();
                                            return 0;
                                      }else if(b3 >= 17 && b3 <= 32)
                                            {
                                                  cout << "Subnet mask: 255.248.0.0" << endl;
                                                  cin.ignore(1000, '\n');
                                                  cout << "\n" << endl;
                                                  cin.clear();
                                                  cin.get();
                                                  system("CLS");
                                                  main();
                                                  return 0;
                                            }else if(b3 >= 33 && b3 <= 64)
                                                  {
                                                        cout << "Subnet mask: 255.252.0.0" << endl;
                                                        cin.ignore(1000, '\n');
                                                        cout << "\n" << endl;
                                                        cin.clear();
                                                        cin.get();
                                                        system("CLS");
                                                        main();
                                                        return 0;
                                                  }else if(b3 >= 65 && b3 <= 128)
                                                        {
                                                              cout << "Subnet mask: 255.254.0.0" << endl;
                                                              cin.ignore(1000, '\n');
                                                              cout << "\n" << endl;
                                                              cin.clear();
                                                              cin.get();
                                                              system("CLS");
                                                              main();
                                                              return 0;
                                                        }else if(b3 >= 129 && b3 <= 256)
                                                              {
                                                                    cout << "Subnet mask: 255.255.0.0" << endl;
                                                                    cin.ignore(1000, '\n');
                                                                    cout << "\n" << endl;
                                                                    cin.clear();
                                                                    cin.get();
                                                                    system("CLS");
                                                                    main();
                                                                    return 0;
                                                              }else if(b3 >= 257 && b3 <= 512)
                                                                    {
                                                                          cout << "Subnet mask: 255.255.128.0" << endl;
                                                                          cin.ignore(1000, '\n');
                                                                          cout << "\n" << endl;
                                                                          cin.clear();
                                                                          cin.get();
                                                                          system("CLS");
                                                                          main();
                                                                          return 0;
                                                                    }else if(b3 >= 513 && b3 <= 1024)
                                                                          {
                                                                                cout << "Subnet mask: 255.255.192.0" << endl;
                                                                                cin.ignore(1000, '\n');
                                                                                cout << "\n" << endl;
                                                                                cin.clear();
                                                                                cin.get();
                                                                                system("CLS");
                                                                                main();
                                                                                return 0;
                                                                          }else if(b3 >= 1025 && b3 <= 2048)
                                                                                {
                                                                                      cout << "Subnet mask: 255.255.224.0" << endl;
                                                                                      cin.ignore(1000, '\n');
                                                                                      cout << "\n" << endl;
                                                                                      cin.clear();
                                                                                      cin.get();
                                                                                      system("CLS");
                                                                                      main();
                                                                                      return 0;
                                                                                }else if(b3 >= 2049 && b3 <= 4096)
                                                                                      {
                                                                                            cout << "Subnet mask: 255.255.240.0" << endl;
                                                                                            cin.ignore(1000, '\n');
                                                                                            cout << "\n" << endl;
                                                                                            cin.clear();
                                                                                            cin.get();
                                                                                            system("CLS");
                                                                                            main();
                                                                                            return 0;
                                                                                      }else if(b3 >= 4097 && b3 <= 8192)
                                                                                            {
                                                                                                  cout << "Subnet mask: 255.255.248.0" << endl;
                                                                                                  cin.ignore(1000, '\n');
                                                                                                  cout << "\n" << endl;
                                                                                                  cin.clear();
                                                                                                  cin.get();
                                                                                                  system("CLS");
                                                                                                  main();
                                                                                                  return 0;
                                                                                            }else if(b3 >= 8193 && b3 <= 16384)
                                                                                                  {
                                                                                                        cout << "Subnet mask: 255.255.252.0" << endl;
                                                                                                        cin.ignore(1000, '\n');
                                                                                                        cout << "\n" << endl;
                                                                                                        cin.clear();
                                                                                                        cin.get();
                                                                                                        system("CLS");
                                                                                                        main();
                                                                                                        return 0;
                                                                                                  }else if(b3 >= 16384 && b3 <= 32768)
                                                                                                        {
                                                                                                              cout << "Subnet mask: 255.255.254.0" << endl;
                                                                                                              cin.ignore(1000, '\n');
                                                                                                              cout << "\n" << endl;
                                                                                                              cin.clear();
                                                                                                              cin.get();
                                                                                                              system("CLS");
                                                                                                              main();
                                                                                                              return 0;
                                                                                                        }else if(b3 >= 32769 && b3 <= 65536)
                                                                                                              {
                                                                                                                    cout << "Subnet mask: 255.255.255.0" << endl;
                                                                                                                    cin.ignore(1000, '\n');
                                                                                                                    cout << "\n" << endl;
                                                                                                                    cin.clear();
                                                                                                                    cin.get();
                                                                                                                    system("CLS");
                                                                                                                    main();
                                                                                                                    return 0;
                                                                                                              }else if(b3 >= 65537 && b3 <= 131072)
                                                                                                                    {
                                                                                                                          cout << "Subnet mask: 255.255.255.128" << endl;
                                                                                                                          cin.ignore(1000, '\n');
                                                                                                                          cout << "\n" << endl;
                                                                                                                          cin.clear();
                                                                                                                          cin.get();
                                                                                                                          system("CLS");
                                                                                                                          main();
                                                                                                                          return 0;
                                                                                                                    }else if(b3 >= 131073 && b3 <= 262144)
                                                                                                                          {
                                                                                                                                cout << "Subnet mask: 255.255.255.192" << endl;
                                                                                                                                cin.ignore(1000, '\n');
                                                                                                                                cout << "\n" << endl;
                                                                                                                                cin.clear();
                                                                                                                                cin.get();
                                                                                                                                system("CLS");
                                                                                                                                main();
                                                                                                                                return 0;
                                                                                                                          }else if(b3 >= 262145 && b3 <= 524288)
                                                                                                                                {
                                                                                                                                      cout << "Subnet mask: 255.255.255.224" << endl;
                                                                                                                                      cin.ignore(1000, '\n');
                                                                                                                                      cout << "\n" << endl;
                                                                                                                                      cin.clear();
                                                                                                                                      cin.get();
                                                                                                                                      system("CLS");
                                                                                                                                      main();
                                                                                                                                      return 0;
                                                                                                                                }else if(b3 >= 524288 && b3 <= 1048576)
                                                                                                                                      {
                                                                                                                                            cout << "Subnet mask: 255.255.255.240" << endl;
                                                                                                                                            cin.ignore(1000, '\n');
                                                                                                                                            cout << "\n" << endl;
                                                                                                                                            cin.clear();
                                                                                                                                            cin.ignore();
                                                                                                                                            system("CLS");
                                                                                                                                            main();
                                                                                                                                            return 0;
                                                                                                                                      }else if(b3 >= 1048577 && b3 <= 2097152)
                                                                                                                                            {
                                                                                                                                                  cout << "Subnet mask: 255.255.255.248" << endl;
                                                                                                                                                  cin.ignore(1000, '\n');
                                                                                                                                                  cout << "\n" << endl;
                                                                                                                                                  cin.clear();
                                                                                                                                                  cin.get();
                                                                                                                                                  system("CLS");
                                                                                                                                                  main();
                                                                                                                                                  return 0;
                                                                                                                                            }else if(b3 >= 2097152 && b3 <= 4194304)
                                                                                                                                                  {
                                                                                                                                                        cout << "Subnet mask: 255.255.255.252" << endl;
                                                                                                                                                        cin.ignore(1000, '\n');
                                                                                                                                                        cout << "\n" << endl;
                                                                                                                                                        cin.clear();
                                                                                                                                                        cin.get();
                                                                                                                                                        system("CLS");
                                                                                                                                                        main();
                                                                                                                                                        return 0;
                                                                                                                                                  }else
                                                                                                                                                       {
                                                                                                                                                               cout << "Invalid input" << endl;
                                                                                                                                                               cin.ignore(1000, '\n');
                                                                                                                                                               cout << "\n" << endl;
                                                                                                                                                               cin.clear();
                                                                                                                                                               cin.get();
                                                                                                                                                               system("CLS");
                                                                                                                                                               main();
                                                                                                                                                               return 0;
                                                                                                                                                       }
        }else if(a == "B" || a == "b")
              {
                    cout << "Max subets: 16384" << endl;
                    cout << "Amount of subnets you need: ";
                    cin >> b2;
                    if(b2 == 1)
                    {
                          cout << "Subnet mask: 255.255.0.0" << endl;
                          cin.ignore(1000,'\n');
                          cout << "\n" << endl;
                          cin.clear();
                          cin.get();
                          system("CLS");
                          main();
                          return 0;
                    }else if(b2 == 2)
                          {
                                cout << "Subnet mask: 255.255.128.0" << endl;
                                cin.ignore(1000, '\n');
                                cout << "\n" << endl;
                                cin.clear();
                                cin.get();
                                system("CLS");
                                main();
                                return 0;
                          }else if(b2 == 3 || b2 == 4)
                                {
                                      cout << "Subnet mask: 255.255.192.0" << endl;
                                      cin.ignore(1000, '\n');
                                      cout << "\n" << endl;
                                      cin.clear();
                                      cin.get();
                                      system("CLS");
                                      main();
                                      return 0;
                                }else if(b2 >= 5 && b2 <= 8)
                                      {
                                            cout << "Subnet mask: 255.255.224.0" << endl;
                                            cin.ignore(1000, '\n');
                                            cout << "\n" << endl;
                                            cin.clear();
                                            cin.get();
                                            system("CLS");
                                            main();
                                            return 0;
                                      }else if(b2 >= 9 && b2 <= 16)
                                            {
                                                  cout << "Subnet mask: 255.255.240.0" << endl;
                                                  cin.ignore(1000, '\n');
                                                  cout << "\n" << endl;
                                                  cin.clear();
                                                  cin.get();
                                                  system("CLS");
                                                  main();
                                                  return 0;
                                            }else if(b2 >= 17 && b2 <= 32)
                                                  {
                                                        cout << "Subnet mask: 255.255.248.0" << endl;
                                                        cin.ignore(1000, '\n');
                                                        cout << "\n" << endl;
                                                        cin.clear();
                                                        cin.get();
                                                        system("CLS");
                                                        main();
                                                        return 0;
                                                  }else if(b2 >= 33 && b2 <= 64)
                                                        {
                                                              cout << "Subnet mask: 255.255.252.0" << endl;
                                                              cin.ignore(1000, '\n');
                                                              cout << "\n" << endl;
                                                              cin.clear();
                                                              cin.get();
                                                              system("CLS");
                                                              main();
                                                              return 0;
                                                        }else if(b2 >= 65 && b2 <= 128)
                                                              {
                                                                    cout << "Subnet mask: 255.255.254.0" << endl;
                                                                    cin.ignore(1000, '\n');
                                                                    cout << "\n" << endl;
                                                                    cin.clear();
                                                                    cin.get();
                                                                    system("CLS");
                                                                    main();
                                                                    return 0;
                                                              }else if(b2 >= 129 && b2 <= 256)
                                                                    {
                                                                          cout << "Subnet mask: 255.255.255.0" << endl;
                                                                          cin.ignore(1000, '\n');
                                                                          cout << "\n" << endl;
                                                                          cin.clear();
                                                                          cin.get();
                                                                          system("CLS");
                                                                          main();
                                                                          return 0;
                                                                    }else if(b2 >= 257 && b2 <= 512)
                                                                          {
                                                                                cout << "Subnet mask: 255.255.255.128" << endl;
                                                                                cin.ignore(1000, '\n');
                                                                                cout << "\n" << endl;
                                                                                cin.clear();
                                                                                cin.get();
                                                                                system("CLS");
                                                                                main();
                                                                                return 0;
                                                                          }else if(b2 >= 513 && b2 <= 1024)
                                                                                {
                                                                                      cout << "Subnet mask: 255.255.255.192" << endl;
                                                                                      cin.ignore(1000, '\n');
                                                                                      cout << "\n" << endl;
                                                                                      cin.clear();
                                                                                      cin.get();
                                                                                      system("CLS");
                                                                                      main();
                                                                                      return 0;
                                                                                }else if(b2 >= 1025 && b2 <= 2048)
                                                                                      {
                                                                                            cout << "Subnet mask: 255.255.255.224" << endl;
                                                                                            cin.ignore(1000, '\n');
                                                                                            cout << "\n" << endl;
                                                                                            cin.clear();
                                                                                            cin.get();
                                                                                            system("CLS");
                                                                                            main();
                                                                                            return 0;
                                                                                      }else if(b2 >= 2049 && b2 <= 4096)
                                                                                            {
                                                                                                  cout << "Subnet mask: 255.255.255.240" << endl;
                                                                                                  cin.ignore(1000, '\n');
                                                                                                  cout << "\n" << endl;
                                                                                                  cin.clear();
                                                                                                  cin.get();
                                                                                                  system("CLS");
                                                                                                  main();
                                                                                                  return 0;
                                                                                            }else if(b2 >= 4097 && b2 <= 8192)
                                                                                                  {
                                                                                                        cout << "Subnet mask: 255.255.255.248" << endl;
                                                                                                        cin.ignore(1000, '\n');
                                                                                                        cout << "\n" << endl;
                                                                                                        cin.clear();
                                                                                                        cin.get();
                                                                                                        system("CLS");
                                                                                                        main();
                                                                                                        return 0;
                                                                                                  }else if(b2 >= 8193 && b2 <= 16384)
                                                                                                        {
                                                                                                              cout << "Subnet mask: 255.255.255.252" << endl;
                                                                                                              cin.ignore(1000, '\n');
                                                                                                              cout << "\n" << endl;
                                                                                                              cin.clear();
                                                                                                              cin.get();
                                                                                                              system("CLS");
                                                                                                              main();
                                                                                                              return 0;
                                                                                                        }else
                                                                                                             {
                                                                                                                     cout << "Invalid input" << endl;
                                                                                                                     cin.ignore(1000, '\n');
                                                                                                                     cout << "\n" << endl;
                                                                                                                     cin.clear();
                                                                                                                     cin.get();
                                                                                                                     system("CLS");
                                                                                                                     main();
                                                                                                                     return 0;
                                                                                                             }
              }else if(a == "C" || a == "c")
                    {     
                          cout << "Max subnets: 64" << endl;
                          cout << "Amount of subnets you need: ";
                          cin >> b1;
                          if(b1 == 1)
                          {
                                cout << "Subnet mask: 255.255.255.0" << endl;
                                cin.ignore(1000,'\n');
                                cout << "\n" << endl;
                                cin.clear();
                                cin.get();
                                system("CLS");
                                main();
                                return 0;
                          }else if(b1 == 2)
                                {
                                      cout << "Subnet mask: 255.255.255.128" << endl;
                                      cin.ignore(1000,'\n');
                                      cout << "\n" << endl;
                                      cin.clear();
                                      cin.get();
                                      system("CLS");
                                      main();
                                      return 0;
                                }else if(b1 == 3 || b1 == 4)
                                      {
                                            cout << "Subnet mask: 255.255.255.192" << endl;
                                            cin.ignore(1000,'\n');
                                            cout << "\n" << endl;
                                            cin.clear();
                                            cin.get();
                                            system("CLS");
                                            main();
                                            return 0;
                                      }else if(b1 >= 5 && b1 <= 8)
                                            {
                                                  cout << "Subnet Mask: 255.255.255.224" << endl;
                                                  cin.ignore(1000,'\n');
                                                  cout << "\n" << endl;
                                                  cin.clear();
                                                  cin.get();
                                                  system("CLS");
                                                  main();
                                                  return 0;
                                            }else if(b1 >=9 && b1 <= 16)
                                                  {
                                                        cout << "Subnet mask: 255.255.255.240" << endl;
                                                        cin.ignore(1000,'\n');
                                                        cout << "\n" << endl;
                                                        cin.clear();
                                                        cin.get();
                                                        system("CLS");
                                                        main();
                                                        return 0;
                                                  }else if(b1 >=17 && b1 <=32)
                                                        {
                                                              cout << "Subnet mask 255.255.255.248" << endl;
                                                              cin.ignore(1000,'\n');
                                                              cout << "\n" << endl;
                                                              cin.clear();
                                                              cin.get();
                                                              system("CLS");
                                                              main();
                                                              return 0;
                                                        }else if(b1 >= 33 && b1 <= 64)
                                                              {
                                                                    cout << "Subnett mask 255.255.255.252" << endl;
                                                                    cin.ignore(1000,'\n');
                                                                    cout << "\n" << endl;
                                                                    cin.clear();
                                                                    cin.get();
                                                                    system("CLS");
                                                                    main();
                                                                    return 0;
                                                              } else
                                                                    {
                                                                           cout << "Invalid input" << endl;
                                                                           cin.ignore(1000,'\n');
                                                                           cout << "\n" << endl;
                                                                           cin.clear();
                                                                           cin.get();
                                                                           system("CLS");
                                                                           main();
                                                                           return 0;
                                                                    }
                    }else
                    {
                     cout << "Invalid input" << endl;
                     cin.ignore(1000, '\n');
                     cout << "\n" << endl;
                     cin.clear();
                     cin.get();
                     system("CLS");
                     main();
                     return 0;
                    }
        
       }else if(Menu == "3" || Menu == "3.")
       {
        string classes;
        int hosts;
                       
        cout << "Class A, B or C?: ";
        getline(cin, classes);
                       
        if(classes == "A" || classes == "a" || classes == "A." || classes == "a.")
        {
         cout << "Max hosts: 16777214" << endl;
         cout << "Amount of hosts you need per subnet: ";
         cin >> hosts;
                        
         if(hosts == 1 || hosts == 2)
         {
          cout << "Subnet mask: 255.255.255.252" << endl;
          cin.ignore(1000, '\n');
          cout << "\n" << endl;
          cin.clear();
          cin.get();
          system("CLS");
          main();
          return 0;
         }else if(hosts >= 3 && hosts <= 6)
         {
          cout << "Subnet mask: 255.255.255.248" << endl;
          cin.ignore(1000, '\n');
          cout << "\n" << endl;
          cin.clear();
          cin.get();
          system("CLS");
          main();
          return 0;
         }else if(hosts >= 7 && hosts <= 14)
          {
           cout << "Subnet mask: 255.255.255.240" << endl;
           cin.ignore(1000, '\n');
           cout << "\n" << endl;
           cin.clear();
           cin.get();
           system("CLS");
           main();
           return 0;
          }else if(hosts >= 15 && hosts <= 30)
           {
            cout << "Subnet mask: 255.255.255.224" << endl;
            cin.ignore(1000, '\n');
            cout << "\n" << endl;
            cin.clear();
            cin.get();
            system("CLS");
            main();
            return 0;
           }else if(hosts >= 31 && hosts <= 62)
           {
            cout << "Subnet mask: 255.255.255.192" << endl;
            cin.ignore(1000, '\n');
            cout << "\n" << endl;
            cin.clear();
            cin.get();
            system("CLS");
            main();
            return 0;
           }else if(hosts >= 63 && hosts <= 126)
           {
            cout << "Subnet mask: 255.255.255.128" << endl;
            cin.ignore(1000, '\n');
            cout << "\n" << endl;
            cin.clear();
            cin.get();
            system("CLS");
            main();
            return 0;
           }else if(hosts >= 127 && hosts <= 254)
           {
            cout << "Subnet mask: 255.255.255.0" << endl;
            cin.ignore(1000, '\n');
            cout << "\n" << endl;
            cin.clear();
            cin.get();
            system("CLS");
            main();
            return 0;
           }else if(hosts >= 255 && hosts <= 510)
           {
            cout << "Subnet mask: 255.255.254.0" << endl;
            cin.ignore(1000, '\n');
            cout << "\n" << endl;
            cin.clear();
            cin.get();
            system("CLS");
            main();
            return 0;
           }else if(hosts >= 511 && hosts <= 1022)
           {
            cout << "Subnet mask: 255.255.252.0" << endl;
            cin.ignore(1000, '\n');
            cout << "\n" << endl;
            cin.clear();
            cin.get();
            system("CLS");
            main();
            return 0;
           }else if(hosts >= 1023 && hosts <= 2046)
           {
            cout << "Subnet mask: 255.255.248.0" << endl;
            cin.ignore(1000, '\n');
            cout << "\n" << endl;
            cin.clear();
            cin.get();
            system("CLS");
            main();
            return 0;
           }else if(hosts >= 2047 && hosts <= 4094)
           {
            cout << "Subnet mask: 255.255.240.0" << endl;
            cin.ignore(1000, '\n');
            cout << "\n" << endl;
            cin.clear();
            cin.get();
            system("CLS");
            main();
            return 0;
           }else if(hosts >= 4095 && hosts <= 8190)
           {
            cout << "Subnet mask: 255.255.224.0" << endl;
            cin.ignore(1000, '\n');
            cout << "\n" << endl;
            cin.clear();
            cin.get();
            system("CLS");
            main();
            return 0;
           }else if(hosts >= 8191 && hosts <= 16382)
           {
            cout << "Subnet mask: 255.255.192.0" << endl;
            cin.ignore(1000, '\n');
            cout << "\n" << endl;
            cin.clear();
            cin.get();
            system("CLS");
            main();
            return 0;
           }else if(hosts >= 16383 && hosts <= 32766)
           {
            cout << "Subnet mask: 255.255.128.0" << endl;
            cin.ignore(1000, '\n');
            cout << "\n" << endl;
            cin.clear();
            cin.get();
            system("CLS");
            main();
            return 0;
           }else if(hosts >= 32767 && hosts <= 65534)
           {
            cout << "Subnet mask: 255.255.0.0" << endl;
            cin.ignore(1000, '\n');
            cout << "\n" << endl;
            cin.clear();
            cin.get();
            system("CLS");
            main();
            return 0;
           }else if(hosts >= 65535 && hosts <= 131070)
           {
            cout << "Subnet mask: 255.254.0.0" << endl;
            cin.ignore(1000, '\n');
            cout << "\n" << endl;
            cin.clear();
            cin.get();
            system("CLS");
            main();
            return 0;
           }else if(hosts >= 131071 && hosts <= 262142)
           {
            cout << "Subnet mask: 255.252.0.0" << endl;
            cin.ignore(1000, '\n');
            cout << "\n" << endl;
            cin.clear();
            cin.get();
            system("CLS");
            main();
            return 0;
           }else if(hosts >= 262143 && hosts <= 524286)
           {
            cout << "Subnet mask: 255.248.0.0" << endl;
            cin.ignore(1000, '\n');
            cout << "\n" << endl;
            cin.clear();
            cin.get();
            system("CLS");
            main();
            return 0;
           }else if(hosts >= 524287 && hosts <= 1048574)
           {
            cout << "Subnet mask: 255.240.0.0" << endl;
            cin.ignore(1000, '\n');
            cout << "\n" << endl;
            cin.clear();
            cin.get();
            system("CLS");
            main();
            return 0;
           }else if(hosts >= 1048575 && hosts <= 2097150)
           {
            cout << "Subnet mask: 255.224.0.0" << endl;
            cin.ignore(1000, '\n');
            cout << "\n" << endl;
            cin.clear();
            cin.get();
            system("CLS");
            main();
            return 0;
           }else if(hosts >= 2097151 && hosts <= 4194302)
           {
            cout << "Subnet mask: 255.192.0.0" << endl;
            cin.ignore(1000, '\n');
            cout << "\n" << endl;
            cin.clear();
            cin.get();
            system("CLS");
            main();
            return 0;
           }else if(hosts >= 4194303 && hosts <= 8388606)
           {
            cout << "Subnet mask: 255.128.0.0" << endl;
            cin.ignore(1000, '\n');
            cout << "\n" << endl;
            cin.clear();
            cin.get();
            system("CLS");
            main();
            return 0;
           }else if(hosts >= 8388607 && hosts <= 16777214)
           {
            cout << "Subnet mask: 255.0.0.0" << endl;
            cin.ignore(1000, '\n');
            cout << "\n" << endl;
            cin.clear();
            cin.get();
            system("CLS");
            main();
            return 0;
           }else
           {
            cout << "Invalid input" << endl;
            cin.ignore(1000, '\n');
            cout << "\n" << endl;
            cin.clear();
            cin.get();
            system("CLS");
            main();
            return 0;
           }
          }else if(classes == "B" || classes == "B." || classes == "b" || classes == "b.")
          {
           cout << "Max hosts: 65534" << endl;
           cout << "Amount of subnets you need per subnet: ";
           cin >> hosts;
           
           if(hosts == 1 || hosts == 2)
           {
            cout << "Subnet mask: 255.255.255.252" << endl;
            cin.ignore(1000, '\n');
            cout << "\n" << endl;
            cin.clear();
            cin.get();
            system("CLS");
            main();
            return 0;
           }else if(hosts >= 3 && hosts <= 6)
           {
            cout << "Subnet mask: 255.255.255.248" << endl;
            cin.ignore(1000, '\n');
            cout << "\n" << endl;
            cin.clear();
            cin.get();
            system("CLS");
            main();
            return 0;
           }else if(hosts >= 7 && hosts <= 14)
           {
            cout << "Subnet mask: 255.255.255.240" << endl;
            cin.ignore(1000, '\n');
            cout << "\n" << endl;
            cin.clear();
            cin.get();
            system("CLS");
            main();
            return 0;
           }else if(hosts >= 15 && hosts <= 30)
           {
            cout << "Subnet mask: 255.255.255.224" << endl;
            cin.ignore(1000, '\n');
            cout << "\n" << endl;
            cin.clear();
            cin.get();
            system("CLS");
            main();
            return 0;
           }else if(hosts >= 31 && hosts <= 62)
           {
            cout << "Subnet mask: 255.255.255.192" << endl;
            cin.ignore(1000, '\n');
            cout << "\n" << endl;
            cin.clear();
            cin.get();
            system("CLS");
            main();
            return 0;
           }else if(hosts >= 63 && hosts <= 126)
           {
            cout << "Subnet mask: 255.255.255.128" << endl;
            cin.ignore(1000, '\n');
            cout << "\n" << endl;
            cin.clear();
            cin.get();
            system("CLS");
            main();
            return 0;
           }else if(hosts >= 127 && hosts <= 254)
           {
            cout << "Subnet mask: 255.255.255.0" << endl;
            cin.ignore(1000, '\n');
            cout << "\n" << endl;
            cin.clear();
            cin.get();
            system("CLS");
            main();
            return 0;
           }else if(hosts >= 255 && hosts <= 510)
           {
            cout << "Subnet mask: 255.255.254.0" << endl;
            cin.ignore(1000, '\n');
            cout << "\n" << endl;
            cin.clear();
            cin.get();
            system("CLS");
            main();
            return 0;
           }else if(hosts >= 511 && hosts <= 1022)
           {
            cout << "Subnet mask: 255.255.252.0" << endl;
            cin.ignore(1000, '\n');
            cout << "\n" << endl;
            cin.clear();
            cin.get();
            system("CLS");
            main();
            return 0;
           }else if(hosts >= 1023 && hosts <= 2046)
           {
            cout << "Subnet mask: 255.255.248.0" << endl;
            cin.ignore(1000, '\n');
            cout << "\n" << endl;
            cin.clear();
            cin.get();
            system("CLS");
            main();
            return 0;
           }else if(hosts >= 2047 && hosts <= 4094)
           {
            cout << "Subnet mask: 255.255.240.0" << endl;
            cin.ignore(1000, '\n');
            cout << "\n" << endl;
            cin.clear();
            cin.get();
            system("CLS");
            main();
            return 0;
           }else if(hosts >= 4095 && hosts <= 8190)
           {
            cout << "Subnet mask: 255.255.224.0" << endl;
            cin.ignore(1000, '\n');
            cout << "\n" << endl;
            cin.clear();
            cin.get();
            system("CLS");
            main();
            return 0;
           }else if(hosts >= 8190 && hosts <= 16382)
           {
            cout << "Subnet mask: 255.255.192.0" << endl;
            cin.ignore(1000, '\n');
            cout << "\n" << endl;
            cin.clear();
            cin.get();
            system("CLS");
            main();
            return 0;
           }else if(hosts >= 16383 && hosts <= 32766)
           {
            cout << "Subnet mask: 255.255.128.0" << endl;
            cin.ignore(1000, '\n');
            cout << "\n" << endl;
            cin.clear();
            cin.get();
            system("CLS");
            main();
            return 0;
           }else if(hosts >= 32767 && hosts <= 65534)
           {
            cout << "Subnet mask: 255.255.0.0" << endl;
            cin.ignore(1000, '\n');
            cout << "\n" << endl;
            cin.clear();
            cin.get();
            system("CLS");
            main();
            return 0;
           }else
           {
            cout << "Invalid input" << endl;
            cin.ignore(1000, '\n');
            cout << "\n" << endl;
            cin.clear();
            cin.get();
            system("CLS");
            main();
            return 0;
           }
          }else if(classes == "C" || classes == "C." || classes == "c" || classes == "c.")
          {
           cout << "Max hosts: 254" << endl;
           cout << "Amount of subnets you need per subnet: ";
           cin >> hosts; 
           
           if(hosts == 1 || hosts == 2)
           {
            cout << "Subnet mask: 255.255.255.252" << endl;
            cin.ignore(1000, '\n');
            cout << "\n" << endl;
            cin.clear();
            cin.get();
            system("CLS");
            main();
            return 0;
           }else if(hosts >= 3 && hosts <= 6)
           {
            cout << "Subnet mask: 255.255.255.248" << endl;
            cin.ignore(1000, '\n');
            cout << "\n" << endl;
            cin.clear();
            cin.get();
            system("CLS");
            main();
            return 0;
           }else if(hosts >= 7 && hosts <=14)
           {
            cout << "Subnet mask: 255.255.255.240" << endl;
            cin.ignore(1000, '\n');
            cout << "\n" << endl;
            cin.clear();
            cin.get();
            system("CLS");
            main();
            return 0;
           }else if(hosts >= 15 && hosts <= 30)
           {
            cout << "Subnet mask: 255.255.255.224" << endl;
            cin.ignore(1000, '\n');
            cout << "\n" << endl;
            cin.clear();
            cin.get();
            system("CLS");
            main();
            return 0;
           }else if(hosts >= 31 && hosts <= 62)
           {
            cout << "Subnet mask: 255.255.255.192" << endl;
            cin.ignore(1000, '\n');
            cout << "\n" << endl;
            cin.clear();
            cin.get();
            system("CLS");
            main();
            return 0;
           }else if(hosts >= 63 && hosts <= 126)
           {
            cout << "Subnet mask: 255.255.255.128" << endl;
            cin.ignore(1000, '\n');
            cout << "\n" << endl;
            cin.clear();
            cin.get();
            system("CLS");
            main();
            return 0;
           }else if(hosts >= 127 && hosts <= 254)
           {
            cout << "Subnet mask: 255.255.255.0" << endl;
            cin.ignore(1000, '\n');
            cout << "\n" << endl;
            cin.clear();
            cin.get();
            system("CLS");
            main();
            return 0;
           }else
           {
            cout << "Invalid input" << endl;
            cin.ignore(1000, '\n');
            cout << "\n" << endl;
            cin.clear();
            cin.get();
            system("CLS");
            main();
            return 0;
           }
          }else
          {
           cout << "Invalid input" << endl;
           cin.ignore(1000, '\n');
           cout << "\n" << endl;
           cin.clear();
           cin.get();
           system("CLS");
           main();
           return 0;
          }
                       
              } else if (Menu == "4" || Menu == "4.")
                     {
                              string line;
                              ifstream myfile ("History.log");
                              if (myfile.is_open())
                              {
                                 while ( myfile.good() )
                                 {
                                       getline (myfile, line);
                                       cout << line << endl;
                                 }
                                 myfile.close();
                              }
                              else
                                  {
                                                cout << "Unable to open file" << endl;
                                                Sleep(5000);
                                                main();
                                                return 0;
                                  }
                              cin.clear();
                              cin.get();
                              system("CLS");
                              main();
                              return 0;
                     }else
                          {
                              system("CLS");
                              main();
                              return 0;
                          }
}
