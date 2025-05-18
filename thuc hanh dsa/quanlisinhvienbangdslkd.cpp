#include <iostream>
#include <string> 
#include <cstring>
using namespace std;

typedef struct SinhVien

{

       int MSSV;

       char HoTen[30];

       float DTB;

} SV;

struct node// tạo node

{

       SV info;

       node* next;

};

typedef struct node NODE;

struct list// tạo list

{

       node* pHead;

       node* pTail;

};

typedef struct list LIST;

void init(list& l)// khởi tạo list

{

       l.pHead = NULL;

       l.pTail = NULL;

} 
node* makenode(SV s)

{

       node* p = new node;

       if (p == NULL)

       {

             cout << "\nKhong du bo nho.";

             return NULL;

       }

       p->info.MSSV = s.MSSV;

       strcpy_s(p->info.HoTen, s.HoTen); 

       p->info.DTB = s.DTB;

       p->next = NULL;

       return p;

}

void AddFirst(list& l, node* p)

{

       if (l.pHead == NULL)

             l.pHead = l.pTail = p;

       else

       {

             p->next = l.pHead;

             l.pHead = p;

       }

}


void nhapDS(list &l,node*sv) {
  
  
  do {
    cout << "Nhap ten: (nhap ' ' de ket thuc): ";
    cin.ignore();
    cin.getline( sv->info.HoTen,30 );
    if(sv->info.HoTen == " ") break;
   
    cout << "Nhap diem trung binh: ";
    cin >> sv->info.DTB;
    cout << "Nhap MSSV  ";
    cin>> sv->info.MSSV;
    
    AddFirst(l, sv);
     
  } while (sv->info.HoTen != " ");
}

bool timKiem(node* ds, int MSSV) {
  node* p = ds;
  while (p != NULL && p->info.MSSV != MSSV) {
    p = p->next;
  }
  return p != NULL;
}
node* xoaSV (node *ds, int MSSV) {
  node* pTruoc = NULL, *p = ds;
  while (p != NULL && p->info.MSSV  !=  MSSV) {
    pTruoc = p;
    p = p->next;
  }
  if (p != NULL) {
    if (pTruoc == NULL) {
      ds = ds->next;
    } else {
      pTruoc->next = p->next;
    }
    delete p;
  }
  return ds;
}

void lietKeDTB(node* ds) {
  for (node* p = ds; p != NULL; p = p->next) {
    if (p->info.DTB >= 5) {
      cout << "MSSV: " << p->info.MSSV << endl;
      cout << "Ten: " << p->info.HoTen<< endl;
      cout << "Diem trung binh: " << p->info.DTB << endl;
    }
  }
}
void xepLoai(node* ds) {
  for (node* p = ds; p != NULL; p = p->next) {
    string loai;
    if (p->info.DTB <= 3.6) {
      loai = "Yeu";
    } else if (p->info.DTB >= 5.0 && p->info.DTB < 6.5) {
      loai = "Trung binh";
    } else if (p->info.DTB >= 6.5 && p->info.DTB < 7.0) {
      loai = "Trung binh kha";
    } else if (p->info.DTB >= 7.0 && p->info.DTB < 8.0) {
      loai = "Kha";
    } else if (p->info.DTB >= 8.0 && p->info.DTB < 9.0) {
      loai = "Gioi";
    } else {
      loai = "Xuat sac";
    }
    cout << "MSSV: " << p->info.MSSV << endl;
    cout << "Ten: " << p->info.HoTen << endl;
    cout << "Diem trung binh: " << p->info.DTB << endl;
    cout << "Xep loai: " << loai << endl;
  }
}
void sapXepDTB  (node* ds) {
 node* p, *q, *pHead = NULL;
  while (ds != NULL) {
    p = ds;
    ds = ds->next;
    q = pHead;
    while (q != NULL && (q->info.DTB < p->info.DTB)) {
      q = q->next;
    }}}

   class Diem
{
	float x;
	float y;
	public:
	Diem();
};
class TamGiac
{
	Diem A, B, C;
	public:
	TamGiac():C(), B(), A() {}
};


int main()
{
  node* sv;
  makenode(sv->info);
  list danhsachsv;
   
   int n;
   cin >>n;
  
  nhapDS(danhsachsv,sv);
  
   
return 0;
}