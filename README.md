import java.util.ArrayList;
import java.util.Scanner;

class Employee {
    private String name;
    private int age;
    private String department;

    public Employee(String name, int age, String department) {
        this.name = name;
        this.age = age;
        this.department = department;
    }

    public String getName() {
        return name;
    }

    public int getAge() {
        return age;
    }

    public String getDepartment() {
        return department;
    }
}

class EmployeesProgram {
    private ArrayList<Employee> employees;
    private Scanner scanner;

    public EmployeesProgram() {
        employees = new ArrayList<>();
        scanner = new Scanner(System.in);
    }

    public void run() {
        int choice;
        do {
            printMenu();
            choice = scanner.nextInt();
            scanner.nextLine(); // consume the newline character

            switch (choice) {
                case 1:
                    registerData();
                    break;
                case 2:
                    searchRecord();
                    break;
                case 3:
                    deleteRecord();
                    break;
                case 4:
                    updateRecord();
                    break;
                case 5:
                    login();
                    break;
                case 6:
                    System.out.println("Exiting the program...");
                    break;
                default:
                    System.out.println("Invalid choice. Please try again.");
                    break;
            }
        } while (choice != 6);
    }

    private void printMenu() {
        System.out.println("Welcome to the Employees Program!");
        System.out.println("1. Register Data");
        System.out.println("2. Search for a specific record");
        System.out.println("3. Delete a record");
        System.out.println("4. Update a record");
        System.out.println("5. Login");
        System.out.println("6. Exit");
        System.out.print("Enter your choice: ");
    }

    private void registerData() {
        System.out.println("=== Register Data ===");
        System.out.print("Enter employee name: ");
        String name = scanner.nextLine();
        System.out.print("Enter employee age: ");
        int age = scanner.nextInt();
        scanner.nextLine(); // consume the newline character
        System.out.print("Enter employee department: ");
        String department = scanner.nextLine();

        Employee employee = new Employee(name, age, department);
        employees.add(employee);

        System.out.println("Data registered successfully!");
    }

    private void searchRecord() {
        System.out.println("=== Search Record ===");
        System.out.print("Enter employee name to search: ");
        String name = scanner.nextLine();

        boolean found = false;
        for (Employee employee : employees) {
            if (employee.getName().equalsIgnoreCase(name)) {
                System.out.println("Employee found:");
                System.out.println("Name: " + employee.getName());
                System.out.println("Age: " + employee.getAge());
                System.out.println("Department: " + employee.getDepartment());
                found = true;
                break;
            }
        }

        if (!found) {
            System.out.println("Employee not found.");
        }
    }

    private void deleteRecord() {
        System.out.println("=== Delete Record ===");
        System.out.print("Enter employee name to delete: ");
        String name = scanner.nextLine();

        boolean found = false;
        for (int i = 0; i < employees.size(); i++) {
            if (employees.get(i).getName().equalsIgnoreCase(name)) {
                employees.remove(i);
                System.out.println("Employee deleted successfully.");
                found = true;
                break;
            }
        }

        if (!found) {
            System.out.println("Employee not found.");
        }
    }

    private void updateRecord() {
        System.out.println("=== Update Record ===");
        System.out.print("Enter employee name to update: ");
        String name = scanner.nextLine();

        boolean found = false;
        for (Employee employee : employees) {
            if (employee.getName().equalsIgnoreCase(name)) {
                System.out.print("Enter new age: ");
                int age = scanner.nextInt();
                scanner.nextLine(); // consume the newline character
                System.out.print("Enter new department: ");
                String department = scanner.nextLine();

                employee = new Employee(name, age, department);
                System.out.println("Employee updated successfully.");
                found = true;
                break;
            }
        }

        if (!found) {
            System.out.println("Employee not found.");
        }
    }

    private void login() {
        System.out.println("=== Login ===");
        System.out.print("Enter username: ");
        String username = scanner.nextLine();
        System.out.print("Enter password: ");
        String password = scanner.nextLine();

        // Add your login logic here

        if (username.equals("admin") && password.equals("password")) {
            System.out.println("Login successful!");
        } else {
            System.out.println("Invalid username or password.");
        }
    }
}

public class Main {
    public static void main(String[] args) {
        EmployeesProgram program = new EmployeesProgram();
        program.run();
    }
}
```

/*This program uses classes to represent employees and the main program to handle the menu and user interactions. You can add your own logic inside the methods to perform the required functionalities. Note that the login functionality is just a placeholder and you need to implement your own login logic.

Feel free to modify and enhance the program according to your needs. Let me know if you need any further assistance!*/
