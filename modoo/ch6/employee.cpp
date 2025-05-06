#include <iostream>
#include <string>

class Employee {
	private:
		std::string name;
		int age;
		
		std::string position;
		int rank;
	
	public:
		Employee(std::string name, int age, std::string position, int rank)
			: name(name), age(age), position(position), rank(rank) {}
		
		Employee(const Employee& employee) {
			name = employee.name;
			age = employee.age;
			position = employee.position;
			rank = employee.rank;
		}

		Employee() {}

		void print_info() {
			std::cout << name << " (" << position << ", " << age << ") ==> "
				<< calculate_pay() << " Won" << std::endl;
		}

		int calculate_pay() {
			return 200 + rank + 50;
		}
};

class Manager {
	private:
		std::string name;
		int age;

		std::string position;
		int rank;
		int year_of_service;

	public:
		Manager(std::string name, int age, std::string position, int rank, int year_of_service)
			: name(name),
			  age(age),
			  position(position),
			  rank(rank),
			  year_of_service(year_of_service) {}

		Manager(const Manager& manager) {
			name = manager.name;
			age = manager.age;
			position = manager.position;
			rank = manager.rank;
			year_of_service = manager.year_of_service;
		}

		Manager() {}

		int calculate_pay() {
			return 200 + rank * 50 + 5 * year_of_service;
		}

		void print_info() {
			std::cout << name << " (" << position << " , " << age << ", " << year_of_service
				<< ") ==> " << calculate_pay() << " Won " << std::endl;
		}
};

class EmployeeList {
	private:
		int alloc_employee;

		int current_employee;
		int current_manager;

		Employee** employee_list;
		Manager** manager_list;
	
	public:
		EmployeeList(int alloc_employee)
			: alloc_employee(alloc_employee) {
				employee_list = new Employee*[alloc_employee];
				manager_list = new Manager*[alloc_employee];

				current_employee = 0;
				current_manager = 0;
			}

		void add_employee(Employee* employee) {
			employee_list[current_employee] = employee;
			current_employee++;
		}

		void add_manager(Manager* manager) {
			manager_list[current_manager] = manager;
			current_manager++;
		}

		int current_employee_num() {
			return current_employee + current_manager;
		}

		void print_employee_info() {
			int total_pay = 0;
			for (int i = 0; i < current_employee; i++) {
				employee_list[i]->print_info();
				total_pay += employee_list[i]->calculate_pay();
			}

			for (int i = 0; i < current_manager; i++) {
				manager_list[i]->print_info();
				total_pay += manager_list[i]->calculate_pay();
			}

			std::cout << "Total costs : " << total_pay << " Won " << std::endl;
		}

		~EmployeeList() {
			for (int i = 0; i < current_employee; i++) {
				delete employee_list[i];
			}
			for (int i = 0; i < current_manager; i++) {
				delete manager_list[i];
			}

			delete[] employee_list;
			delete[] manager_list;
		}
};

int main() {
	EmployeeList emp_list(10);
	emp_list.add_employee(new Employee("No Hong Chul", 34, "Sawon1", 1));
	emp_list.add_employee(new Employee("HA HA", 34, "Sawon2", 1));

	emp_list.add_manager(new Manager("Yu Jae Suk", 41, "Bujang", 7, 12));
	emp_list.add_manager(new Manager("Jung Jun Ha", 43, "Gwajang", 4, 15));
	emp_list.add_manager(new Manager("Park Myung Su", 43, "Chajang", 5, 13));
	emp_list.add_employee(new Employee("Jung Hyung Don", 36, "Daeri", 2));
	emp_list.add_employee(new Employee("Gil", 36, "Intern", -2));
	emp_list.print_employee_info();

	return 0;
}
