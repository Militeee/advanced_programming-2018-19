#include <iostream>

namespace Date
{

  enum month_l{January, February, March, April, May,
		June, July, August, September, October,
                November, December};
  class Date
  {
    public:

    int day() const {return _day;}
    int year() const {return _year;}
    month_l month() const {return _month;}
    void add_days(const unsigned int n) {
      for(int i = 0; i < n; i++)
	this->add_day();
    }
    Date(int day = 0, month_l month = January,
	       int year = 0)
      :_day{day}, _month{month}, _year{year}
    {}
    
    private:
    void add_day();
    int control_nday() const;
    void add_month();
    int _day;
    month_l _month;
    int _year;
  };


  bool is_leap(const int yea)
  {
    return (yea % 4 == 0 && yea % 400 != 0 ? true : false);
  }
  
  int Date::control_nday() const
  {
    switch(_month)
    {
    case 2:
      return is_leap(_year) ? 29 : 28;
    case 4 : case 6 : case 9 : case 11:
      return 30;
    default:
      return 31;
    }
  }
  void Date::add_month()
     {
       int mon = _month;
       if(mon > 12)
       {
	 _year++; _month = January;
       }
       else
       {
	 mon++;
	 _month = static_cast<month_l>(mon);}
       }
	 
 
  void Date::add_day()
  {
    _day++;
    if(_day > this->control_nday())
      {
	this->add_month();
	_day = 0;
      }
  }
  
  bool operator==(const Date& lhs, const Date& rhs)
  {
    if(lhs.day() == rhs.day() && lhs.month() == rhs.month()
       && lhs.year() == rhs.year())
      return true;
    return false;

    return false;
  }

  bool operator!=(const Date& lhs, const Date& rhs)
  {
    return !(lhs == rhs);
  }

  std::ostream& operator<<(std::ostream& os, const
			   Date& date)
  {
    os << date.day() << "/" << date.month() + 1 << "/" <<date.year() << std::endl;
    return os;
  }
    
}


int main(int argc, char* argv[])
{
 Date::Date d1{};
 Date::month_l dec = Date::December;
 Date::Date d2{14, dec , 2019};
 std::cout << d1 << std::endl << d2 << std::endl;
 d2.add_days(99);
 std::cout << (d1 != d2) << std::endl << d2 << std::endl;


}
