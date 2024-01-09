#include <iostream>
#include <string>

class Employee {
protected:
    std::string name;
    int id;
    double salary;

public:
    Employee(const std::string& n, int i, double s) : name(n), id(i), salary(s) {}
    void setName(const std::string& n) { name = n; }
    std::string getName() const { return name; }

    void setId(int i) { id = i; }
    int getId() const { return id; }

    void setSalary(double s) { salary = s; }
    double getSalary() const { return salary; }
};

class Manager : public Employee {
private:
    std::string department;
    double bonus;

public:
    Manager(const std::string& n, int i, double s, const std::string& dept, double bonus)
        : Employee(n, i, s), department(dept), bonus(bonus) {}
    void setDepartment(const std::string& dept) { department = dept; }
    std::string getDepartment() const { return department; }

    void setBonus(double b) { bonus = b; }
    double getBonus() const { return bonus; }
};

class Engineer : public Employee {
private:
    std::string specialty;
    int hours;

public:
    Engineer(const std::string& n, int i, double s, const std::string& spec, int hrs)
        : Employee(n, i, s), specialty(spec), hours(hrs) {}
    void setSpecialty(const std::string& spec) { specialty = spec; }
    std::string getSpecialty() const { return specialty; }

    void setHours(int hrs) { hours = hrs; }
    int getHours() const { return hours; }
};

int main() {
    Manager manager("John Doe", 101, 80000.0, "Marketing", 5000.0);
    Engineer engineer("Jane Smith", 201, 70000.0, "Software Development", 40);
    std::cout << "Manager Information:" << std::endl;
    std::cout << "Name: " << manager.getName() << ", ID: " << manager.getId() << ", Salary: $" << manager.getSalary()
              << ", Department: " << manager.getDepartment() << ", Bonus: $" << manager.getBonus() << std::endl;

    std::cout << "\nEngineer Information:" << std::endl;
    std::cout << "Name: " << engineer.getName() << ", ID: " << engineer.getId() << ", Salary: $" << engineer.getSalary()
              << ", Specialty: " << engineer.getSpecialty() << ", Hours: " << engineer.getHours() << " hours" << std::endl;

    return 0;
}

