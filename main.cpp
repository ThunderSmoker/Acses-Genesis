#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

int menu()
{
    system("cls");
    cout << "\n_________________________________________________________"
         << "\n|&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&|"
         << "\n|                                                        |"
         << "\n|          W E L C O M E   T O   G I D E O N             |"
         << "\n|                                                        |"
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
    int k=0;
    while(user[k]!='\0'){
        user[k++]+=46;
    }
    k=0;
    while(pass[k]!='\0'){
        pass[k++]+=46;
    }
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
    int k=0;
    while(user[k]!='\0'){
        user[k++]+=46;
    }
    k=0;
    while(pass[k]!='\0'){
        pass[k++]+=46;
    }
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
    system("cls");
    cout<<"\n\n\n\t\t\t\t[##########......................]";
    Sleep(10);
    system("cls");
    cout<<"\n\n\n\t\t\t\t[###########.....................]";
    Sleep(10);
    system("cls");
    cout<<"\n\n\n\t\t\t\t[############....................]";
    Sleep(10);
    system("cls");
    cout<<"\n\n\n\t\t\t\t[#############...................]";
    Sleep(10);
    system("cls");
    cout<<"\n\n\n\t\t\t\t[##############..................]";
    Sleep(10);
    system("cls");
    cout<<"\n\n\n\t\t\t\t[###############.................]";
    Sleep(10);
    system("cls");
    cout<<"\n\n\n\t\t\t\t[################................]";
    Sleep(10);
    system("cls");
    cout<<"\n\n\n\t\t\t\t[#################...............]";
    Sleep(10);
    system("cls");
    cout<<"\n\n\n\t\t\t\t[##################..............]";
    Sleep(10);
    system("cls");
    cout<<"\n\n\n\t\t\t\t[###################.............]";
    Sleep(10);
    system("cls");
    cout<<"\n\n\n\t\t\t\t[####################............]";
    Sleep(10);
    system("cls");
    cout<<"\n\n\n\t\t\t\t[#####################...........]";
    Sleep(10);;
    system("cls");
    cout<<"\n\n\n\t\t\t\t[######################..........]";
    Sleep(10);
    system("cls");
    cout<<"\n\n\n\t\t\t\t[#######################.........]";
    Sleep(10);
    system("cls");
    cout<<"\n\n\n\t\t\t\t[########################........]";
    Sleep(10);
    system("cls");
    cout<<"\n\n\n\t\t\t\t[#########################.......]";
    Sleep(10);
    system("cls");
    cout<<"\n\n\n\t\t\t\t[##########################......]";
    Sleep(10);
    system("cls");
    cout<<"\n\n\n\t\t\t\t[###########################.....]";
    Sleep(10);
    system("cls");
    cout<<"\n\n\n\t\t\t\t[############################....]";
    Sleep(10);
    system("cls");
    cout<<"\n\n\n\t\t\t\t[#############################...]";
    Sleep(10);
    system("cls");
    cout<<"\n\n\n\t\t\t\t[##############################..]";
    Sleep(10);
    system("cls");
    cout<<"\n\n\n\t\t\t\t[###############################.]";
    Sleep(10);
    system("cls");
    cout<<"\n\n\n\t\t\t\t[################################]";
    Sleep(10);
    system("cls");
    cout<<"\n\n\n\t\t\t\t[################################]";
    Sleep(10);
    system("cls");
    return;
    
}

void greet()
{
    // current date  and time based on your system timezone
    time_t ata = time(0);
    tm *time = localtime(&ata);

    if (time->tm_hour < 12)
    {
        cout << "Good Morning !!" << endl;
        string vakya = "Good Morning ";
        string cmd = "espeak \"" + vakya + "\"";
        const char *charcmd = cmd.c_str();
        system(charcmd);
    }

    else if (time->tm_hour >= 12 && time->tm_hour <= 16)
    {
        cout << "Good Afternoon !!" << endl;
        string vakya = "Good Afternoon";
        string cmd = "espeak \"" + vakya + "\"";
        const char *charcmd = cmd.c_str();
        system(charcmd);
    }

    else if (time->tm_hour > 16 && time->tm_hour < 24)
    {
        cout << "Good Evening !!" << endl;
        string vakya = "Good Evening";
        string cmd = "espeak \"" + vakya + "\"";
        const char *charcmd = cmd.c_str();
        system(charcmd);
    }
}

void Apps(){
    system("cls");
    system("Color 4");
    STARTUPINFO startInfo = {0};
    PROCESS_INFORMATION processInfo = {0};
    int c;
    cout<<"\n\t\t\t|***********************  A P P S *******************|\n\n";
    cout<<"\n 1.Notepad     2.Google     3.YouTube    4.Word    5.Excel"
        <<"\n 6.Powerpoint  7.Teams      8.Meet       9.Skype   10.Adobe PS"
        <<"\n 11.VS cosde  12.Instagram 13.Photos    14.This PC 15.Gmail"
        <<"\n\n16.EXIT";
    cout<<"\n\nEnter Your Choice:";
    cin>>c;
    switch (c)
    {
    case 1:
        CreateProcess(TEXT("C:\\Windows\\notepad.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
        Apps();
        break;
    case 2:
        system("start https://www.google.com");
        Apps();
        break;
    case 3:
        system("start https://www.youtube.com/");
        Apps();
        break;
    case 4:
        CreateProcess(TEXT("C:\\Windows\\word.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
        Apps();
        break;
    case 5:
        CreateProcess(TEXT("C:\\Windows\\excel.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
        Apps();
        break;
    case 6:
        CreateProcess(TEXT("C:\\Windows\\powerpoint.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
        Apps();
        break;
    case 7:
        CreateProcess(TEXT("C:\\Windows\\teams.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
        Apps();
        break;
    case 8:
        system("start https://apps.google.com/meet/");	
        Apps();
        break;
    case 9:
        CreateProcess(TEXT("C:\\Windows\\skype.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
        Apps();
        break;
    case 10:
        CreateProcess(TEXT("C:\\Windows\\adobe.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
        Apps();
        break;
    case 11:
        CreateProcess(TEXT("C:\\Windows\\visualstudiocode.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
        Apps();
        break;
    case 12:
        CreateProcess(TEXT("C:\\Windows\\instagram.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
        Apps();
        break;
    case 13:
        CreateProcess(TEXT("C:\\Windows\\photos.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
        Apps();
        break;
    case 14:
        CreateProcess(TEXT("C:\\Windows\\thispc.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
        Apps();
        break;
    case 15:
        system("start https://mail.google.com/");	
        Apps();
        break;
    case 16:
        return;
    default:
        break;
    }
}

void timer(){
    system("cls");
    system("Color 4");
    int hr=0,min=0,sec=0,hor,mon,soc;
    cout<<"\nENTER HOUR,MINUTES AND SECONDS:";
    cin>>hor>>mon>>soc;
        string vakya = "Setting a Timer";
        string cmd = "espeak \"" + vakya + "\"";
        const char *charcmd = cmd.c_str();
        system(charcmd);
    system("cls");
    while(true){
        Sleep(1000);
        system("cls");
        cout<<"\n\n\n\n";
        cout<<"\n|&&&&&&&&&&&&&&&&&&&&&&&&&&&&& T I M E R &&&&&&&&&&&&&&&&&&&&&&&&&&&&&|"
              "\n|                                                                     |"
              "\n|                   "<<hr<<" hours : "<<min<<" minutes : "<<sec<<"seconds"<<"                    |                                                              |"
              "\n|                                                                     |"
              "\n|&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&|";
       
        if(hr==hor && min==mon && sec==soc){
            Beep(1500,1500);
            Sleep(500);
            return;
            break;
        }
        sec++;
        if(sec==60){
            sec=0;
            min++;
            if(min==60){
                min=0;
                hr++;
            }
        }
        
    }
}
char * datetime(){
    time_t now = time(0);
    char *dt = ctime(&now);
    return dt;
}
int newmenu(){
    system("cls");
    cout<<"\n||||||||||||||||||||||||||||||||||||||||||||||||||||||"
          "\n||                                                  ||"
          "\n||                  WELCOME USER                    ||"
          "\n||                                                  ||"
          "\n||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n\n";


    greet();
    int choice;
    cout<<"\t\n\n\t[1].[___ A P P S ___]";
    cout<<"\t\n\n\t[2].[___ M U S I C ___]";
    cout<<"\t\n\n\t[3].[___ T I M E R ___]";
    cout<<"\t\n\n\t[4].[___ G A M E ___]";
    cout<<"\t\n\n\t[5].[___ N O T E S ___]";
    cout<<"\t\n\n\t[6].[___ C H A T B O T ___]";
    cout<<"\t\n\n\t[7].[___ L O G O U T ___]";
    cout<<"\n\n\t\t\t\t\t\t\t\t\t\tLogged in on:"<<datetime()<<"\n";
    cout<<"\n\n\n\n ENTER  THE  CHOICE:";
    cin>>choice;
    if(choice==0 || choice>7) {
    
        return 0;
    }
    return choice;
}
void minimobile(){
    system("cls");
    system("Color B");
    
    int c=newmenu();
    switch (c)
    {
    case 1:
        Apps();
        minimobile();
        break;

    case 2:
    {
        
       
    }
    case 3:
    {
        timer();
        minimobile();
        break;
    }

    case 4:
    {
        // game();
        minimobile();
        break;
    }
    case 5:
    {
        // notes();
        minimobile();
        break;
    }
    case 6:
    {
        // chatbot();
        minimobile();
        break;
    }
    case 7:
    {
        cout<<"\nTHANKYOU!!";
        Sleep(500);
        return;
        break;
    }
    default:
    {
        cout<<"\nENTER A VALID CHOICE, <TRY AGAIN>!!!";
        Sleep(500);
        minimobile();
    }
    }
}

int main()
{
    system("cls");
    system("Color A");
    int c = menu();
    switch (c)
    {
    case 1:
        CreateAcc();
        main();
        break;

    case 2:
    {
        
        if (Login())
        {
                cout << "\nLogin SuccessFULL!!!!";
        
        string vakya = "Login SuccessFULL";
        string cmd = "espeak \"" + vakya + "\"";
        const char *charcmd = cmd.c_str();
        system(charcmd);
                Sleep(1000);
                loading();
                minimobile();
                
        }

            cout<<"\n******* INCORRECT PASSWORD ******\n";
            cout<<"\nPLEASE TRY AGAIN!!\n";
       string vakya = "Incorrect Password";
        string cmd = "espeak \"" + vakya + "\"";
        const char *charcmd = cmd.c_str();
        system(charcmd);
       vakya = "Please Try again";
       cmd = "espeak \"" + vakya + "\"";
        charcmd = cmd.c_str();
        system(charcmd);
            Sleep(800);
            main();
        
        break;
    }
    case 3:
    {
        forgot();
        main();
        break;
    }

    case 4:
    {
        cout<<"\n|*************************************|";
        cout<<" \n!!!THANKYOU FOR USING OUR PROGRAM!!!!";
        cout<<"\n|*************************************|";
        exit(0);
    }
    default:
    {
        cout<<"\nENTER A VALID CHOICE, <TRY AGAIN>!!!";
        Sleep(500);
        main();
        break;
    }
    }
    return 0;
}