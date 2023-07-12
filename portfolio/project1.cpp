#include <iostream>
using namespace std;
int main()
{
    char startValue, selectAgain;
    float converter(void);
start:
    cout << "********welcome to currency converter application*******" << endl;
    cout << "********please follow the instructions*******" << endl;
    cout << "you can have currencies dollar, rupees, euro, pound" << endl;
    cout << "you  can type a,b,c,d respectively" << endl;
    cout << "enter currency1 which u want to convert" << endl;
    cout << "enter value for currency1 " << endl;
    cout << "enter currency2 in which u want to convert currency1" << endl;
    cout << "(a) dollar (b) rupees (c) euro (d) pound" << endl;
    cout << "please press s to start" << endl;
selectChoice:
    cin >> startValue;
    if (startValue == 's' || startValue == 'S')
    {
        float finalValue = converter();
        cout << "result is:        " << finalValue << endl;
        cout << "Do you want to use the appplication again? y or n" << endl;
    again:
        cin >> selectAgain;
        if (selectAgain == 'y' || selectAgain == 'Y')
        {
            goto start;
        }
        else if (selectAgain == 'n' || selectAgain == 'N')
        {
            cout << "thank you for using our application!" << endl;
        }
        else
        {
            cout << "you have enetered worng value, please type again -_-" << endl;
            goto again;
        }
    }
    else
    {
        cout << "you have entered wrong value, please type s" << endl;
        goto selectChoice;
    }
}
float converter()
{
    char currname1;
    char currname2;
    float currency1, currency2;
currlevel:
    cout << "enter currency1 name" << endl;
    cin >> currname1;
    cout << "enter currency1 value" << endl;
    cin >> currency1;
    switch (currname1)
    {
    case 'a':
    currlevel1:
        cout << "enter currency2 name" << endl;
        cin >> currname2;
        if (currname2 == 'a' || currname2 == 'A')
        {
            currency2 = currency1 * 1;
        }
        else if (currname2 == 'b' || currname2 == 'B')
        {
            currency2 = currency1 * 73.84;
        }
        else if (currname2 == 'c' || currname2 == 'C')
        {
            currency2 = currency1 * 0.85;
        }
        else if (currname2 == 'd' || currname2 == 'D')
        {
            currency2 = currency1 * 0.72;
        }
        else
        {
            cout << "You have entered wrong value, please type again" << endl;
            goto currlevel1;
        }
        break;
    case 'b':
    currlevel2:
        cout << "enter currency2 name" << endl;
        cin >> currname2;
        if (currname2 == 'a' || currname2 == 'A')
        {
            currency2 = currency1 * 0.013;
        }
        else if (currname2 == 'b' || currname2 == 'B')
        {
            currency2 = currency1 * 1;
        }
        else if (currname2 == 'c' || currname2 == 'C')
        {
            currency2 = currency1 * 0.01;
        }
        else if (currname2 == 'd' || currname2 == 'D')
        {
            currency2 = currency1 * 0.009;
        }
        else
        {
            cout << "You have entered wrong value, please type again" << endl;
            goto currlevel2;
        }
        break;
    case 'c':
    currlevel3:
        cout << "enter currency2 name" << endl;
        cin >> currname2;
        if (currname2 == 'a' || currname2 == 'A')
        {
            currency2 = currency1 * 1.16;
        }
        else if (currname2 == 'b' || currname2 == 'B')
        {
            currency2 = currency1 * 86.37;
        }
        else if (currname2 == 'c' || currname2 == 'C')
        {
            currency2 = currency1 * 1;
        }
        else if (currname2 == 'd' || currname2 == 'D')
        {
            currency2 = currency1 * 0.85;
        }
        else
        {
            cout << "You have entered wrong value, please type again" << endl;
            goto currlevel3;
        }
        break;
    case 'd':
    currlevel4:
        cout << "enter currency2 name" << endl;
        cin >> currname2;
        if (currname2 == 'a' || currname2 == 'A')
        {
            currency2 = currency1 * 1.37;
        }
        else if (currname2 == 'b' || currname2 == 'B')
        {
            currency2 = currency1 * 101.30;
        }
        else if (currname2 == 'c' || currname2 == 'C')
        {
            currency2 = currency1 * 1.17;
        }
        else if (currname2 == 'd' || currname2 == 'D')
        {
            currency2 = currency1 * 1;
        }
        else
        {
            cout << "You have entered wrong value, please type again" << endl;
            goto currlevel4;
        }
        break;

    default:
    {
        cout << "You have entered wrong value, please type again" << endl;
        goto currlevel;
        break;
    }
    }
    return currency2;
}