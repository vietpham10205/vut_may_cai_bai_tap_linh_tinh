
/*
+--------------- MO PHONG THUAT TOAN DUYET CAY NHI PHAN ---------------+
+     DUYET CAY NHI PHAN THEO THU TU SAU SU DUNG STACK KHONG DE QUY    +
+                       ************************                       +
+		   Copyright@ Trinh Van Dung                       +
+              											   			   +
+----------------------#Created on: 03/09/2015 ------------------------+
*/
#include <conio.h>
#include <graphics.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define MAX_SIZE 100
int i=500;
// Khai bao cau truc Node
struct Node
{
    char data;
    struct Node *P_L, *P_R;
};


// Khai bao cau truc Stack
struct Stack
{
    int size;
    int top;
    struct Node**array;
};

// Ham tao cau truc Node moi
struct Node* newNode(char data)
{
    struct Node* node = (struct Node*) malloc(sizeof(struct Node));
    node->data = data;
    node->P_L = node->P_R = NULL;
    return node;
}

// Ham tao cau truc Stack moi
struct Stack* createStack(int size)
{
    struct Stack* stack = (struct Stack*) malloc(sizeof(struct Stack));
    stack->size = size;
    stack->top = -1;
    stack->array = (struct Node**) malloc(stack->size * sizeof(struct Node*));
    return stack;
}

// Hoat dong cua Stack
int isFull(struct Stack* stack)
{
    return stack->top - 1 == stack->size;
}

int isEmpty(struct Stack* stack)
{
    return stack->top == -1;
}

void push(struct Stack* stack, struct Node* node)
{
    if (isFull(stack))
        return;
    stack->array[++stack->top] = node;
}

struct Node* pop(struct Stack* stack)
{
    if (isEmpty(stack))
        return NULL;
    return stack->array[stack->top--];
}

struct Node* peek(struct Stack* stack)
{
    if (isEmpty(stack))
        return NULL;
    return stack->array[stack->top];
}


// Khoi tao ham ve Hinh tron
int Ve_HT(int x, int y, int r,int color)
{
    setcolor(color);
    circle(x,y,r);
}
// Khoi tao ham ve doan thang
int Ve_DT(int x1, int y1, int x2, int y2, int color)
{
    setcolor(color);
    line(x1,y1,x2,y2);
}
//Khoi tao ham in ky tu
int In_Text(int x, int y, char *s, int color)
{
    setcolor(color);
    outtextxy(x,y,s);
}
void To_mau(int x, int y, int r,int m, int n, int color,char *k)
{
    setcolor(color);
    circle(x,y,r);
    settextstyle(0,HORIZ_DIR,3);
    In_Text(x,y+5,k,color);

    Beep(i,500);
    i+=50;
    setcolor(color);
    Ve_HT(m,n,30, color);
    settextstyle(0,HORIZ_DIR,3);
    settextjustify(1,1);
    In_Text(m,n+5,k,color);
    delay(1500);
}

void postOrderIterative(struct Node* root)
{
    int d =500;
    int count=0;
    char s1[1];
    char* ret = NULL;
    // Kiem tra cay rong ?
    if (root == NULL)
        return;

    struct Stack* stack = createStack(MAX_SIZE);
    do
    {
        // Di chuyen den node ngoai cung ben trai
        while (root)
        {
            // Dat goc con ben phai va cho goc vao ngan xep Stack
            if (root->P_R)
                push(stack, root->P_R);
           	    push(stack, root);

            // Dat goc la goc con ben trai
            root = root->P_L;
        }

        // Lay ra khoi ngan xep va dat lam goc
        root = pop(stack);

        // Neu lay ra node con ben phai va no chua duoc xu ly
        // thi node con ben phai phai duoc xu ly truoc goc root
        if (root->P_R && peek(stack) == root->P_R)
        {
            pop(stack);  // lay goc con ben phai ra khoi Stack
            push(stack, root);  // dat goc root vao ngan xep Stack
            root = root->P_R; // thay doi goc den node con ben phai xu ly tiep theo

        }
        else  // Nguoc lai in ra gia tri cua goc root va dat goc root la trong NULL
        {
            strncpy(s1,&root->data ,1);
            ret = new char[1];
            ret[0] = s1[0];
         	count = count+1;
            switch (count)
            {
            case 1:
                To_mau(500,600,25,400,280,RED,ret);
                break;
            case 2:
                To_mau(580,600,25,500,450,BLUE,ret);
                break;
            case 3:
                To_mau(660,600,25,600,280,YELLOW,ret);
                break;
            case 4:
                To_mau(740,600,25,500,120,GREEN,ret);
                break;
            case 5:
                To_mau(820,600,25,766,280,CYAN,ret);
                break;
            case 6:
                To_mau(900,600,25,1066,450,LIGHTRED,ret);
                break;
            case 7:
                To_mau(980,600,25,966,280,LIGHTBLUE,ret);
                break;
            case 8:
                To_mau(1060,600,25,866,120,LIGHTMAGENTA,ret);
                break;
            case 9:
                To_mau(1140,600,25,683,50,DARKGRAY,ret);
                break;
            }

         root = NULL;

        }
    }
    while (!isEmpty(stack));
}

int main()
{
    // TAO CAC NODE MOI CHO CAY
    struct Node* root = NULL;
    root = newNode('A');
    root->P_L = newNode('C');
    root->P_R = newNode('B');
    root->P_L->P_L = newNode('G');
    root->P_L->P_R = newNode('F');
    root->P_L->P_R->P_L = newNode('I');
    root->P_R->P_L = newNode('E');
    root->P_R->P_R = newNode('D');
    root->P_R->P_R->P_R = newNode('H');


    // VE CAY BANG DO HOA
    initwindow(1366,768);

    Ve_HT(683,50,30, WHITE);  //Muc 1
    delay(500);
    settextstyle(0,HORIZ_DIR,3);
    settextjustify(1,1);
    In_Text(683,55,"A",WHITE);

    Ve_DT(652,50,526,105, WHITE);
    Ve_DT(712,50,840,105, WHITE);

    Ve_HT(500,120,30, WHITE);//Muc 2
    delay(500);
    settextstyle(0,HORIZ_DIR,3);
    settextjustify(1,1);
    In_Text(500,125,"C",WHITE);

    Ve_HT(866,120,30, WHITE);
    delay(500);
    settextstyle(0,HORIZ_DIR,3);
    settextjustify(1,1);
    In_Text(866,125,"B",WHITE);

    Ve_DT(475,135,415,255, WHITE);
    Ve_DT(525,135,585,255, WHITE);
    Ve_DT(840,135,776,255, WHITE);
    Ve_DT(892,135,950,255, WHITE);

    Ve_HT(400,280,30, WHITE);//Muc 3
    delay(500);
    settextstyle(0,HORIZ_DIR,3);
    settextjustify(1,1);
    In_Text(400,285,"G",WHITE);

    Ve_HT(600,280,30, WHITE);
    delay(500);
    settextstyle(0,HORIZ_DIR,3);
    settextjustify(1,1);
    In_Text(600,285,"F",WHITE);

    Ve_HT(766,280,30, WHITE);
    delay(500);
    settextstyle(0,HORIZ_DIR,3);
    settextjustify(1,1);
    In_Text(766,285,"E",WHITE);

    Ve_HT(966,280,30, WHITE);
    delay(500);
    settextstyle(0,HORIZ_DIR,3);
    settextjustify(1,1);
    In_Text(966,285,"D",WHITE);

    Ve_DT(575,295,515,425, WHITE);
    Ve_DT(990,295,1055,425, WHITE);

    Ve_HT(500,450,30, WHITE);//Muc 4
    delay(500);
    settextstyle(0,HORIZ_DIR,3);
    settextjustify(1,1);
    settextstyle(0,HORIZ_DIR,3);
    In_Text(500,455,"I",WHITE);

    Ve_HT(1066,450,30, WHITE);
    settextjustify(1,1);
    In_Text(1066,455,"H",WHITE);

    settextstyle(0,HORIZ_DIR,2);
    In_Text(300,600,"Thu tu duyet sau la: ", WHITE);

    system("pause");
    postOrderIterative(root);
    getch();
    return 0;
    closegraph();

}
 
