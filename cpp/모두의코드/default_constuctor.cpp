#include <iostrea>

using namespace std;

class Date
{
    int year_;
    int month_;
    int day_;

public:
    void ShowDate();

    Date()
    {
        year_ = 2012;
        month_ = 7;
        day_ = 12;
    }
};

void Date::ShowDate()
{
    cout << "오늘은 " << year_ << " 년 " << month_ << " 월 " << day_ << " 일 입니다." << endl;
}

int main(void)
{
    Date day = Date();
    Date day2;
    
    day.ShowDate();
    day2.ShowDate();

    return 0;
}
