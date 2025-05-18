#include <iostream>
#include <string>
using namespace std;

// Khai báo cấu trúc dữ liệu cho sinh viên
struct SinhVien {
    string MSSV;
    string TEN;
    float DTB;
};

// Khai báo cấu trúc cho một nút trong danh sách liên kết đơn
struct Node {
    SinhVien data;
    Node* next;
};

// Lớp quản lý danh sách sinh viên
class StudentList {
private:
    Node* head; // Con trỏ đầu danh sách
public:
    StudentList() : head(nullptr) {} // Khởi tạo danh sách rỗng

    // Thêm sinh viên vào đầu danh sách
    void insertStudent(SinhVien sv) {
        Node* newNode = new Node;
        newNode->data = sv;
        newNode->next = head;
        head = newNode;
    }

    // Tìm sinh viên theo tên
    bool searchStudent(string name) {
        Node* current = head;
        while (current != nullptr) {
            if (current->data.TEN == name) {
                return true;
            }
            current = current->next;
        }
        return false;
    }

    // Xoá sinh viên theo MSSV
    void deleteStudent(string mssv) {
        Node* current = head;
        Node* prev = nullptr;
        while (current != nullptr) {
            if (current->data.MSSV == mssv) {
                if (prev == nullptr) {
                    head = current->next;
                } else {
                    prev->next = current->next;
                }
                delete current;
                return;
            }
            prev = current;
            current = current->next;
        }
    }

    // Liệt kê sinh viên có ĐTB >= 5
    void listStudentsAboveFive() {
        Node* current = head;
        while (current != nullptr) {
            if (current->data.DTB >= 5) {
                cout << current->data.MSSV << " - " << current->data.TEN << endl;
            }
            current = current->next;
        }
    }

    // Xếp loại và in ra thông tin của từng sinh viên
    void classifyAndPrintStudents() {
        Node* current = head;
        while (current != nullptr) {
            string classification;
            if (current->data.DTB <= 3.6) {
                classification = "Loại yếu";
            } else if (current->data.DTB < 6.5) {
                classification = "Loại trung bình";
            } else if (current->data.DTB < 7.0) {
                classification = "Loại trung bình khá";
            } else if (current->data.DTB < 8.0) {
                classification = "Loại khá";
            } else if (current->data.DTB < 9.0) {
                classification = "Loại giỏi";
            } else {
                classification = "Loại xuất sắc";
            }
            cout << current->data.MSSV << " - " << current->data.TEN << " - " << classification << endl;
            current = current->next;
        }
    }

    // Sắp xếp danh sách sinh viên theo ĐTB tăng dần
    void sortStudentsByDTB() {
        // Implement sorting algorithm (e.g., bubble sort, quicksort, etc.)
        // ...
    }

    // Chèn sinh viên vào danh sách đã sắp xếp
    void insertStudentSorted(SinhVien sv) {
        // Implement insertion while maintaining sorted order
        // ...
    }
};

int main() {
    StudentList students;

    

    return 0;
}
