#include <iostream>
#define maxv 10

using namespace std;

struct vertex{
    int label;
    bool visited;
};


int stack[maxv];
int edges[maxv][maxv];
int vertexcounter = 0;
int top = -1;

struct vertex* vertexlist[maxv];

// Stack methos 
void push(int val){
    stack[++top];
}

int peek(){
    return stack[top];
}

void pop(){
    top--;
}


// Graph methods 

void addVertex(int label){
    struct vertex* item = (struct vertex*) malloc(sizeof(struct verttex));
    item->label = label;
    item->visited = false;
    vertexlist[vertexcounter++] = item;
}

int main(){





    return 0;
}