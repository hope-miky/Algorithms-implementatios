#include <iostream>
#define maxv 10

using namespace std;

// Defining the node using struct
struct vertex{
    char label;                                                     // The variable to hold the data
    bool visited;                                                   //  Variable to show whether the node is visited or not
};


int stack[maxv];                                                    // Stack array to hold the path
int edges[maxv][maxv];                                              // Array to the edges 
int vertexcounter = 0;                                              // To show how many vertexes are there
int top = -1;                                                           

struct vertex* vertexlist[maxv];                                    // Pointer array of pointers holding the struct

// Stack methos 
//Push 
void push(int val){
    stack[++top] = val;
}

// Peek the top of the stack
int peek(){
    return stack[top];
}

//Pop
void pop(){
    top--;
}

// Check if the stack is empty
bool isEmpty(){
    return top == -1;
}


// Graph methods 
// Add a vertex to the array
void addVertex(char label){
    struct vertex* item = (struct vertex*) malloc(sizeof(struct verttex*));
    item->label = label;
    item->visited = false;
    vertexlist[vertexcounter++] = item;
}

// Add edge from start to end and viseversal
void addEdge(int start, int end){
    edges[start][end] = 1;
    edges[end][start] = 1;
}

// Find the next available unvisited node or vertex
int findNextVertex(int startPos){
    for (int i =0; i<vertexcounter; i++){
        if (edges[startPos][i]==1 && vertexlist[i]->visited==false){
            return i;
        }
    }
    return -1;
}

// Display a certain vertex
void displayVertex(int i){
    cout<<vertexlist[i]->label<<", ";
}

// Mark all nodes unvisited
void resetVisit(){
    for (int i=0; i < vertexcounter; i++){
        vertexlist[i]->visited = false;
    }
}

// Give 0 to all the values in the edges array
void populate(){
    for (int i=0; i< maxv; i++){
        for (int j=0; j<maxv; j++){
            edges[i][j] = 0;
        }
    }
}


// The main Depth first algorithm
void depthFirstSearch(){
    int d = 0;
    vertexlist[d]->visited = true;                                          // Mark the first edge visited
    displayVertex(d);                                                       // Display the first node

    push(d);                                                                // Push the first node to a stack

    while(!isEmpty()){                                                      

        int unvisted = findNextVertex(peek());                              // Grap the next unvisited node

        if(unvisted == -1){                                                 // If there is no unvisted node pop from the stack
            pop();
        }
        else{
            displayVertex(unvisted);                                        // Display the node data
            vertexlist[unvisted]->visited = true;                           // Mark is visited
            push(unvisted);                                                 // Push it to the stack
            
        }
    }

    resetVisit();                                                           // Reset the nodes
}



int main(){
    // Remove all edges
    populate();

    // Add 'A' Node
    addVertex('A');

    // Add 'B' Node
    addVertex('B');

    // Add 'C' Node
    addVertex('C');

    // Add 'D' Node
    addVertex('D');

    // Add 'E' Node
    addVertex('E');


    //addEdge(0, 1);                // Connect  A  and  B
    //addEdge(0, 3);                // Connect  A  and  D
    addEdge(0, 4);                  // Connect  A  and  E
    addEdge(1, 2);                  // Connect  B  and  C
    addEdge(2, 3);                  // Connect  C  and  D
    addEdge(2, 4);                  // Connect  C  and  E
    addEdge(4, 3);                  // Connect  D  and  E


    depthFirstSearch();             // Start the travers algorithm


    return 0;
}