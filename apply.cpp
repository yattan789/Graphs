#include<bits/stdc++.h>
using namespace std;

int main()
{   
    system("dot -Tpng bipartite_graph.dot -o bipartite_graph.png");
    system("start bipartite_graph.png"); 
    system("create_pdf.py");
    system("my_pdf_with_images.pdf");
    return 0;
}