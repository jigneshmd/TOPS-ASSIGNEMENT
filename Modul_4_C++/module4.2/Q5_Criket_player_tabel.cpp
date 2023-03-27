/*Assume a class cricketer is declared. Declare a derived class batsman from cricketer. Data member of batsman. Total runs, Average runs and best performance. Member functions input data, calculate average runs, Display data. (Single Inheritance) */
#include <iostream>
#include <iomanip>
using namespace std;
int n;
class cricketer
{
    public :
        int run[5];
        string name;
        void inputrun()
        {
            cout << "\nEnter batsman Name : ";
            getline(cin, name);
            getline(cin, name);
            int j = 0;
            cout << "\n\t*Enter 5 Matches Run :-\n";
            for (int i = 0; i < 5; i++)
            {
                cout << "Enter match Run [" << ++j << "] : ";
                cin >> run[i];
            }
            cout << "\n\t\t:::" << endl;
        }
};
class batsman : public cricketer
{
    public :
        int Totalrun;
        float Averagerun;
        int bestparformance = 0;

        void calculateavrg()
        {
            for (int i = 0; i < 5; i++)
            {
                Totalrun += run[i];
                Averagerun = (float)Totalrun / (float)5;
            }
            for (int i = 0; i < 5; i++)
            {
                if (run[i] > Averagerun)
                {
                    bestparformance++;
                }
                
            }
            
        }
        void displaydata()
        {
            cout << "\nCricketer name :" << name;
            cout << "\nCricket match run : [ ";
            for (int i = 0; i < 5; i++)
            {
                cout << run[i] << ",";
            }
            cout << "]\nTotal run : " << Totalrun << endl;
            cout << "Average run : " << fixed << setprecision(2) << Averagerun << endl;
            cout << "Best parformance : " << bestparformance << endl;
            cout << "\n\t\t::: " << endl;
        }
};
int main()
{
        cout << "\n\n\t\t*Cricket Match Information ::->\n\n";
        cout << "Enter total batsman : ";
        cin >> n;
        batsman s[n];
        cout << "\n\t\t ::- Enter Batsman Information ::->" << endl;
        for (int i = 0; i < n; i++)
        {
            s[i].inputrun();
            s[i].calculateavrg();
        }
        cout << "\n\n\t\t-:: Display Information ::->\n";
        for (int i = 0; i < n; i++)
        {
            s[i].displaydata();
        }
        
        return 0;
}