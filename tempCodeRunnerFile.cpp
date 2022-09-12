
         << "\n|________________________________________________________|"
         << "\n|&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&|";

    int choice;
        string vakya = "Welcome to Gideon";
        string cmd = "espeak \"" + vakya + "\"";
        const char *charcmd = cmd.c_str();
        system(charcmd);
    cout << "\n\n1.CREATE ACCOUNT";
    cout << "\n\n2.LOGIN";
    cout << "\n\n3.FORGOT PASSWORD";
    cout << "\n\n4.EXIT";
    cout << "\n\n\nENTER YOUR CHOICE:";
    cin >> choice;
    if (choice == 0 || choice > 4)
    {
        return 0;
    }
    return choice;
}

void CreateAcc()
{
    string user, pass;
    system("cls");
    cout<<"\n[---R E G I S T E R---]";
    cout << "\n\n\nENTER A USERNAME:";
    cin >> user;
    cout << "\nENTER A NEW PASSWORD:";
    cin >> pass;
    ofstream create("db.txt", ios::app);
    create <<' '<< user << ' ' << pass<<' ';
    create.close();
    cout << "\nCONGRATULATIONS, YOUR ACCOUNT IS CREATED";
        string vakya = "Account Registered";
        string cmd = "espeak \"" + vakya + "\"";
        const char *charcmd = cmd.c_str();
        system(charcmd);
    Sleep(1000);
    return;
}

bool Login()
{
    
    string user, pass, u, p;
    system("cls");
    cout<<"\n[---L O G I N---]";
    cout << "\n\n\nENTER A USERNAME:";
        string vakya = "Enter a Username";
        string cmd = "espeak \"" + vakya + "\"";
        const char *charcmd = cmd.c_str();
        system(charcmd);
    cin>>user;
    cout << "\nENTER THE PASSWORD:";
         vakya = "Enter a Password";
         cmd = "espeak \"" + vakya + "\"";
         charcmd = cmd.c_str();
        system(charcmd);
    cin>>pass;
    ifstream input("db.txt");
    while (input >> u >> p)
    {
        if (user == u && pass == p)
        {
            return 1;
            break;
        }
    }
    input.close();
    
    return 0;
}

void forgot()
{
    system("cls");
    string user, u, p;
    bool flag = 0;
    cout << "\nENTER REMEMBERED USERNAME:";
    cin >> user;
    ifstream input("db.txt");
    while (input >> u >> p)
    {
        if (user == u)
        {
            flag = 1;
            break;
        }
    }
    input.close();
    if (flag)
    {
        cout << "\nYOUR PASSWORD IS " << p;
        Sleep(1000);
    }
    else
    {
       return;
    }
}

void loading(){
    cout<<"\n\n\n\t\t\t\t[................................]";
    Sleep(10);
    system("cls");
    cout<<"\n\n\n\t\t\t\t[#...............................]";
    Sleep(10);
    system("cls");
    cout<<"\n\n\n\t\t\t\t[##..............................]";
    Sleep(10);
    system("cls");
    cout<<"\n\n\n\t\t\t\t[###.............................]";
    Sleep(10);
    system("cls");
    cout<<"\n\n\n\t\t\t\t[####............................]";
    Sleep(10);
    system("cls");
    cout<<"\n\n\n\t\t\t\t[#####...........................]";
    Sleep(10);
    system("cls");
    cout<<"\n\n\n\t\t\t\t[######..........................]";
    Sleep(10);
    system("cls");
    cout<<"\n\n\n\t\t\t\t[#######.........................]";
    Sleep(10);
    system("cls");
    cout<<"\n\n\n\t\t\t\t[########........................]";
    Sleep(10);
    system("cls");
    cout<<"\n\n\n\t\t\t\t[#########.......................]";
    Sleep(10);