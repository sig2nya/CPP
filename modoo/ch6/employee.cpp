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

class EmployeeList {
	private:
		int alloc_employee;
		int current_employee;
		Employee** employee_list;
	
	public:
		EmployeeList(int alloc_employee)
			: alloc_employee(alloc_employee) {
				employee_list = new Employee*[alloc_employee];
				current_employee = 0;
			}

		void add_employee(Employee* employee) {
			employee_list[current_employee] = employee;
			current_employee++;
		}

		int current_employee_num() {
			return current_employee;
		}

		void print_employee_info() {
			int total_pay = 0;
			for (int i = 0; i < current_employee; i++) {
				employee_list[i]->print_info();
				total_pay += employee_list[i]->calculate_pay();
			}

			std::cout << "Total costs : " << total_pay << " Won " << std::endl;
		}

		~EmployeeList() {
			for (int i = 0; i < current_employee; i++) {
				delete employee_list[i];
			}

			delete[] employee_list;
		}
};

int main() {
	EmployeeList emp_list(10);
	emp_list.add_employee(new Employee("No Hong Chul", 34, "평사원", 1));
	emp_list.add_employee(new Employee("HA HA", 34, "평사원", 1));

	emp_list.add_employee(new Employee("Yu Jae Suk", 41, "부장", 7));
	emp_list.add_employee(new Employee("Jung Jun Ha", 43, "과장", 4));
	emp_list.add_employee(new Employee("Park Myung Su", 43, "차장", 5));
	emp_list.add_employee(new Employee("Jung Hyung Don", 36, "대리", 2));
	emp_list.add_employee(new Employee("Gil", 36, "인턴", -2));
	emp_list.print_employee_info();

	return 0;
}
