#include <iostream>
#define maxv 10

using namespace std;

struct vertex{
    char label;
    bool visited;
};


int stack[maxv];
int edges[maxv][maxv];
int vertexcounter = 0;
int top = -1;

struct vertex* vertexlist[maxv];

// Stack methos 
void push(int val){
    stack[++top] = val;
}

int peek(){
    return stack[top];
}

void pop(){
    top--;
}

bool isEmpty(){
    return top == -1;
}


// Graph methods 

void addVertex(char label){
    struct vertex* item = (struct vertex*) malloc(sizeof(struct verttex*));
    item->label = label;
    item->visited = false;
    vertexlist[vertexcounter++] = item;
}

void addEdge(int start, int end){
    edges[start][end] = 1;
    edges[end][start] = 1;
}

int findNextVertex(int startPos){
    for (int i =0; i<vertexcounter; i++){
        if (edges[startPos][i]==1 && vertexlist[i]->visited==false){
            return i;
        }
    }
    return -1;
}
void displayVertex(int i){
    cout<<vertexlist[i]->label<<", ";
}

void resetVisit(){
    for (int i=0; i < vertexcounter; i++){
        vertexlist[i]->visited = false;
    }
}

void populate(){
    for (int i=0; i< maxv; i++){
        for (int j=0; j<maxv; j++){
            edges[i][j] = 0;
        }
    }
}

void depthFirstSearch(){
    int d = 0;
    vertexlist[d]->visited = true;
    displayVertex(d);

    push(d);

    

    while(!isEmpty()){

        int unvisted = findNextVertex(peek());

        if(unvisted == -1){
            pop();
        }
        else{
            displayVertex(unvisted);
            vertexlist[unvisted]->visited = true;
            push(unvisted);
            
        }
    }

    resetVisit();
}



int main(){

    populate();

    addVertex('A');

    addVertex('B');

    addVertex('C');

    addVertex('D');

    addVertex('E');


    //addEdge(0, 1);
    //addEdge(0, 3);
    addEdge(0, 4);
    addEdge(1, 2);
    addEdge(2, 3);
    addEdge(2, 4);
    addEdge(4, 3);


    depthFirstSearch();


    return 0;
}