#include<iostream>
using namespace std;
class Date
{
public:
    friend istream& operator >>(istream& cin, Date p);
    friend ostream& operator<<(ostream& cout, Date p);
    Date(int year = 0, int month = 0, int day = 0)
    {
        _year = year;
        _month = month;
        _day = day;
    }
    int GetMonthday(int year, int month)
    {
        int day[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
        int ret = day[month];
        if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0))
        {
            ret += 1;
        }
        return ret;
    }
    Date& Add()
    {
        int day = d;
        _day += day;
        while (_day <= GetMonthday(_year, _month))
        {
            _day -= GetMonthday(_year, _month);
            _month++;
            if (_month > 12)
            {
                _year++;
                _month = 1;
            }
        }
        return *this;
    }
public:
    int _year;
    int _month;
    int _day;
    int d;
};
istream& operator >>(istream& cin, Date p)
{
    cin >> (p._year) >> (p._month) >> (p._day);
    return cin;
}
ostream& operator<<(ostream& cout, Date p)
{
    cout << (p._year) << "-" << (p._month) << "-" << (p._day) << endl;
    return cout;
}
int main()
{
    int n = 0;
    cin >> n;
    Date p[n];
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
        p[i].Add();
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        cout << p[i];
    }

    return 0;
}