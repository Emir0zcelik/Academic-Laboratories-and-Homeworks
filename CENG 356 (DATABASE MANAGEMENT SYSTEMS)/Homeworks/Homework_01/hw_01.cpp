#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

struct Student {
    std::string name;
    std::string lecture;
    std::string grade;
};

std::vector<Student> readDatabaseFile(const std::string& filename) {
    
    const int nameSize = 15;
    const int lectureSize = 38;
    const int gradeSize = 2;

    std::vector<Student> students;
    std::ifstream file(filename);

    std::string line;

    if(filename == "StudentGrades.db")
    {
        while (getline(file, line)) 
        {
            if (!line.empty()) 
            {
                Student student;
                student.name = line.substr(0, nameSize);
                student.lecture = line.substr(nameSize , lectureSize);
                student.grade = line.substr(nameSize + lectureSize, gradeSize);
                students.push_back(student);
            }
        }
    }

    if(filename == "StudentGrades-delimited-variable-length.db")
    {
        while (getline(file, line)) 
        {
            std::stringstream ss(line);
            std::string field;
            std::vector<std::string> fields;
            
            while (getline(ss, field, ',')) 
            {
                fields.push_back(field);
            }

            if (fields.size() == 3) 
            {
                Student student;
                student.name = fields[0];
                student.lecture = fields[1];
                student.grade = fields[2];
                students.push_back(student);
            }
        }
    }
    file.close();  
    return students;
}

Student searchStudentByName(const std::vector<Student>& students, const std::string& name, const std::string& filetype) {
    for (const Student& student : students) 
    {  
        if(filetype == "StudentGrades.db")
        {
            if (student.name == name + "    ") 
            {            
                return student;
            }
        }

        if(filetype == "StudentGrades-delimited-variable-length.db")
        {
            if (student.name == name) 
            {            
                return student;
            }
        }
    }

    return Student();
}

void print(Student student, const std::string& filetype)
{
    if(filetype == "StudentGrades.db") 
    {
        std::cout << std::endl << std::endl << "FIXED SIZE FIELDS" << std::endl << std::endl;
        std::cout << "File name: " << "StudentGrades.db" << std::endl << std::endl;
    }

    if(filetype == "StudentGrades-delimited-variable-length.db") 
    {
        std::cout << std::endl << "COMMA SEPARATED VALUES" << std::endl << std::endl;
        std::cout << "File name: " << "StudentGrades-delimited-variable-length.db" << std::endl << std::endl;
    }

    if (student.name.empty()) {
        std::cout << "Student not found. Please be sure the both name and surname are correct!" << std::endl << std::endl;
    } else 
    {    
        std::cout << "Student found:" << std::endl;
        std::cout << "Name: " << student.name << std::endl;
        std::cout << "Lecture: " << student.lecture << std::endl;
        std::cout << "Grade: " << student.grade << std::endl << std::endl;
    }
}

int main() {
    std::vector<Student> file1 = readDatabaseFile("StudentGrades.db");
    std::vector<Student> file2 = readDatabaseFile("StudentGrades-delimited-variable-length.db");

    std::string name;

    std::cout << "Enter student name to search: ";
    getline(std::cin, name);

    Student student1 = searchStudentByName(file1, name, "StudentGrades.db");    
    print(student1, "StudentGrades.db");    
    Student student2 = searchStudentByName(file2, name, "StudentGrades-delimited-variable-length.db");  
    print(student2, "StudentGrades-delimited-variable-length.db");      

    return 0;
}