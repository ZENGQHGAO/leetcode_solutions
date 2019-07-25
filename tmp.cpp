#include<iostream>
#include<string>
#include<map>
using namespace std;

#define ISLEAP(x) (x % 4 == 0 && x % 100 != 0) || (x % 400 == 0)

int day_of_month[13][2] = {
    0,0,
    31,31,
    28,29,
    31,31,
    30,30,
    31,31,
    30,30,
    31,31,
    31,31,
    30,30,
    31,31,
    30,30,
    31,31,
};

struct Date{
    int y, m, d;
    void next(){
        d++;
        if(d > day_of_month[m][ISLEAP(y)]){
            d = 1;
            m++;
            if(m > 12){
                m = 1;
                y++;
            }
        }
    }
};
int hashing[3001][13][32];

map<string, int> month_str_to_num = {
    {"January", 1},
    {"Februray", 2},
    {"March", 3},
    {"April", 4},
    {"May", 5},
    {"June", 6},
    {"July", 7},
    {"August", 8},
    {"September", 9},
    {"October", 10},
    {"November", 11},
    {"December", 12},
};

map<int, string> week_num_to_str = {
    {0, "Sunday"},
    {1, "Monday"},
    {2, "Tuesday"},
    {3, "Wednesday"},
    {4, "Thursday"},
    {5, "Friday"},
    {6, "Saturday"},
};

int main(){
    Date tmp_day;
    tmp_day.y = 0;
    tmp_day.m = 1;
    tmp_day.d = 1;
    int count = 0;
    while(tmp_day.y < 3001){
        hashing[tmp_day.y][tmp_day.m][tmp_day.d] = count;
        count++;
        tmp_day.next();
    }

    int y, m, d;
    string m_str;
    while(cin >> d >> m_str >> y){
        m = month_str_to_num[m_str];
        int diff = hashing[y][m][d] - hashing[2019][7][28];
        cout << week_num_to_str[(diff % 7 + 7) % 7] << endl;
    }
    return 0;
}