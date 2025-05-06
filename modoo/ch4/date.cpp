#include <iostream>

class date {
	private:
		int year_;
		int month_;
		int day_;

	public:
		void set_date(int year, int month, int date);
		void add_day(int inc);
		void add_month(int inc);
		void add_year(int inc);

		int get_current_month_total_days(int year, int month);

		void show_date();
};

void date::set_date(int year, int month, int day)
{
	year_ = year;
	month_ = month;
	day_ = day;
}

int date::get_current_month_total_days(int year, int month)
{
	static int month_day[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	if (month != 2) {
		return month_day[month - 1];
	}
	else if (year % 4 == 0 && year % 100 != 0) {
		return 29;
	}
	else {
		return 28;
	}
}

void date::add_day(int inc) {
	while(true) {
		int current_month_total_days = get_current_month_total_days(year_, month_);

		if (day_ + inc <= current_month_total_days) {
			day_ += inc;
			return;
		}
		else {
			inc -= (current_month_total_days - day_ + 1);
			day_ = 1;
			add_month(1);
		}
	}
}

void date::add_month(int inc) {
	add_year((inc + month_ - 1) / 12);
	month_ = month_ + inc % 12;
	month_ = (month_ == 12 ? 12 : month_ % 12);
}

void date::add_year(int inc) {
	year_ += inc;
}

void date::show_date() {
	std::cout << "Today " << year_ << " " << month_ << " " << day_ << " " << std::endl;
}

int main() {
	date day;
	day.set_date(2025, 3, 30);
	day.show_date();
}
