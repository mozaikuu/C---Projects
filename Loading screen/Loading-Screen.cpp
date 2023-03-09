#include <iostream>
#include <unistd.h> // for sleep() function
#include <chrono>
#include <thread>

using namespace std;

int main()
{
    std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
    // cout << endl
    //      << endl
    //      << endl
    //      << endl
    //      << endl
    //      << endl
    //      << endl
    //      << endl
    //      << endl;

    cout << "Microsoft Bindows. All Rights Reserved. [Version 69.0.420.666](fu) Micro-soft penis Cockoporation. Disclaimer. this is not a real package you bufoon. you just got loading screened bitch XD " << endl
         << endl;

    cout << "C:\\Users\\User\\Desktop\\This is gonna be funny AF>" << endl;
    cout << endl;

    string x;
    cout << "C:\\Users\\user> ";
    std::getline(std::cin, x);

    cout << endl;

    cout << "Checking for Updates: " << 0 << "%";
    sleep(1);
    cout << "\r";
    cout << "Checking for Updates: " << 23 << "%";
    sleep(1);
    cout << "\r";
    cout << "Checking for Updates: " << 51 << "%";
    sleep(1);
    cout << "\r";
    cout << "Checking for Updates: " << 77 << "%";
    sleep(1);
    cout << "\r";
    cout << "Checking for Updates: " << 69 << "%";
    sleep(1);
    cout << "\r";
    cout << "Checking for Updates: " << 100 << "%" << endl;

    cout << endl;

    int i = 0;
    cout << "Preparing to download packages..." << endl;
    sleep(1);

    while (i <= 200)
    {
        // how to tab in console output in c++? - Stack Overflow https://stackoverflow.com/questions/10673585/how-to-tab-in-console-output-in-c
        cout << "Downloading Packages: " << i << "%";
        cout << "\r"; // \r is the carriage return character which moves the cursor to the beginning of the line and overwrites the previous output.
        i++;

        chrono::milliseconds timespan(100);
        this_thread::sleep_for(timespan);
    }
    cout << endl;
    cout << "Download Complete" << endl;
    sleep(1);
    cout << endl;

    cout << "Allow collection of personal data?( Y / n ): ";
    string S;
    cin >> S;

    cout << endl;

    if (S == "y" || S == "Y")
    {
        cout << "Collecting Personal Data" << endl;
    }
    else
    {
        cout << "Collecting Personal Data Anyway" << endl;
    }
    sleep(1);

    i = 0;
    while (i <= 100)
    {
        cout << "Sending Personal Data: " << i << "%";
        cout << "\r";
        i++;

        chrono::milliseconds timespan(10);
        this_thread::sleep_for(timespan);
    }
    cout << endl;
    cout << "Data Sent..." << endl;

    cout << endl;

    cout << "Verifying Packages" << endl;
    sleep(1);
    cout << "Installing Packages" << endl;
    sleep(1);

    i = 0;
    while (i <= 100)
    {
        cout << "Downloading RAM: " << i << "%";
        cout << "\r";
        i++;

        chrono::milliseconds timespan(10);
        this_thread::sleep_for(timespan);
    }

    cout << endl;

    i = 0;
    while (i <= 500)
    {
        cout << "schwiftyfying Packages: " << i << "%";
        cout << "\r";
        i++;

        chrono::milliseconds timespan(25);
        this_thread::sleep_for(timespan);
    }

    cout << endl;
    cout << "Installation Complete" << endl;
    cout << endl;
    cout << "How long till this dumbass realizes?(press anything bruh) " << endl;
    string y;
    cin >> y;
    chrono::steady_clock::time_point end = chrono::steady_clock::now();
    double TimeDifference = chrono::duration_cast<chrono::microseconds>(end - begin).count();
    cout << TimeDifference / 1000000 << " seconds" << endl;
    string z;
    cin >> z;

    return 0;
}