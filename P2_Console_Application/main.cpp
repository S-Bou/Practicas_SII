#include <QCoreApplication>
#include <iostream>
#include <QProcess>
#include <QThread>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int choice=0, number, raiz, i, state;

    do
    {
        choice = 0;
        cout << "Menu:" << endl;
        cout << "1. Know if a number is cousin" << endl;
        cout << "2. Exit" << endl;
        cout << "Select: "; cin >> choice;
        cout << endl;

        if(choice == 1)
        {
            QProcess::execute("cmd /c cls");
            cout << "Insert an integer number for determine if is cousin: " ;
            cin  >> number;
            if(number <= 0)
            {
                cout << endl << "ERROR, insert a number greater than cero" << endl << endl;
                QThread::msleep(1000);
                goto ET1;
            }
            raiz = sqrt(number);
            state=1;
            for(i=2; i<=raiz && state==1; i++)
            {
                if(number%i == 0){state = 0;}
            }
            if(state == 1)
            {
                cout << "The number " << number << " is cousin"    << endl << endl;
            }else{
                cout << "The number " << number << " no is cousin" << endl << endl;
            }

        }
        if(choice != 2 && choice != 1){
            cout << "ERROR, please select 1 or 2" << endl;
        }
    ET1:;
    }while(choice != 2);

    cout << "RETURN = ENTER " << endl << endl;
    QCoreApplication::exit();
    //return a.exec();
}
