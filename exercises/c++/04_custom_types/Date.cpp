/*
  A simple class to store the date
  @author Salvatore Milie
  @version 11 November 2018
 */

#include <iostream>

namespace Date
{
  // enum that stores the months
  enum month_l{January, February, March, April, May,
		June, July, August, September, October,
                November, December};
/* 
   @class Date
   @brief  or representing a date with year, month, day precision
*/

  class Date
  {
    public:

    int day() const {return _day;} // day of the year
    int year() const {return _year;} // year 
    month_l month() const {return _month;} // month expressed in number
    /*
      @class Date
      @brief a function for adding days
      @details the function is a wrapper for multiple calls of add_days
      @param n number of days to be added
      @param[in] the date object that is gonna be modified
     */
    void add_days(const unsigned int n) {
      for(int i = 0; i < n; i++)
	this->add_day();
    }
    /*
      @class Date
      @brief constructor for the class
      @details the constructor does not check for correctness
      of the numbers, it also serves as default constructor
     */
    
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

  /*
    @brief controll if a year is leap
    @param year the year as an int
    @return a boolean value, True for a leap year, false otherwise
   */
  
  bool is_leap(const int yea)
  {
    return (yea % 4 == 0 && yea % 400 != 0 ? true : false);
  }

  /*
    @class Date
    @brief a function that returns how many date are in a month
    @param _month the month expressed ad an initially defined enumerator's element
    @return the number of days of that month
   */

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

  /*
    @class Month
    @brief a function that add a month to a Date object
    @param[in] the Date object to be updated
  */
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
	 
  /*
    @class Month
    @brief add a day to the Date object
    @details calls add_month if the _day parameter is > of the one returned by control_nday()
   */
  void Date::add_day()
  {
    _day++;
    if(_day > this->control_nday())
      {
	this->add_month();
	_day = 0;
      }
  }
  /*
    @class Date
    @brief overload of == operator for the class Date
    @details two date objects are equal if they have all the 3 variables equal
   */
  bool operator==(const Date& lhs, const Date& rhs)
  {
    if(lhs.day() == rhs.day() && lhs.month() == rhs.month()
       && lhs.year() == rhs.year())
      return true;
    return false;

    return false;
  }
  /*
    @class Date
    @brief overload of != operator for the class Date
    @details two date objects are not equal if they have all the 3 variables not equal
   */ 
  bool operator!=(const Date& lhs, const Date& rhs)
  {
    return !(lhs == rhs);
  }

  /*
    @class Date
    @brief overload of << operator for the class Date
   */
  
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
