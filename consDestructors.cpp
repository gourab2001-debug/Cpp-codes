#include<iostream>
using namespace std;
//dynamic initialization of objects
class fixedDepo
{
    long long int pA;
    int yr;
    float rate;
    float rVal;
public:
    fixedDepo(){ };
    fixedDepo(long int p ,int y, float r = 0.12);
    fixedDepo(long int p, int y, int r);
    void display();
};
fixedDepo::fixedDepo(long int p, int y, float r)
{
    pA = p;
    yr = y;
    rate = r;
    rVal = pA;
    for(int i = 1; i<=y; i++){
        rVal = rVal * (1.0 + r);
    }
}
fixedDepo::fixedDepo(long int p, int y, int r)
{
    pA = p;
    yr = y;
    rate = r;
    rVal = pA;
    for(int i = 1; i<=y; i++){
        rVal = rVal * (1.0 + float(r)/100);
    }
}
void fixedDepo::display()
{
    cout << "\n"
        << "Principal Amount: " << pA << "\n"
        << "Return value    : " << rVal <<"\n";
}
int main()
{
    fixedDepo fd1, fd2, fd3;
    long int p;
    int y;
    float r;
    int R;

    cout << "\nEnter amount, period, interest rate:(%)";
    cin >> p >> y >> r;
    fd1 = fixedDepo(p, y, r);

    cout << "\nEnter amount, period";
    cin >> p >> y;
    fd2 = fixedDepo(p, y);

    cout << "\nEnter amount, period, interest rate:(decimal)";
    cin >> p >> y >> r;
    fd3 = fixedDepo(p, y, r);

    cout << "\nDeposit 1:\n";
    fd1.display();
    cout << "\nDeposit 2:\n";
    fd2.display();
    cout << "\nDeposit 3:\n";
    fd3.display();

    return 0;
}

