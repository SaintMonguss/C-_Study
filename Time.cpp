#include <iostream>
#include <string>



class Time
{
	unsigned int hour;
	unsigned int min;
	unsigned int sec;
	unsigned int t_sec;
public:
	Time()
	{
		hour = 0;
		min = 0;
		sec = 0;
		t_sec = 0;
	}

	Time(int hour, int min, int sec): hour(hour), min(min), sec(sec) {};
	
	unsigned int calSecond()
	{
		t_sec = (hour * 60 * 60) + (min * 60) + sec;
		return t_sec;
	};

	void setHour(unsigned int hour)
	{
		this->hour = hour;
	}
	
	void setMin(unsigned int min) 
	{
		this->min = min;
	};
	
	void setSec(unsigned int sec)
	{
		this->sec = sec;
	};
	
	unsigned int getHour()
	{
		return hour;
	};
	
	unsigned int getMin() 
	{
		return min;
	};
	
	unsigned int getSec()
	{
		return sec;
	};
	
	std::string showTime()
	{
		//std::cout << hour << "시 " << min << "분 " << sec << "초" << std::endl;
		return std::to_string(hour) + "시 " + std::to_string(min) + "분 " + std::to_string(sec) + "초";
	};

	bool operator<=(Time timeObj)
	{
		return (this->calSecond() == timeObj.calSecond()) ? true : false;
	}
};

int main()
{
	Time time(1, 30, 12);
	std::cout << time.showTime() << std::endl;
	std::cout << time.calSecond() << "초" << std::endl;
	time.setMin(10);
	std::cout << time.showTime() << std::endl;
	std::cout << time.calSecond() << "초" << std::endl;
	return 0;
}


