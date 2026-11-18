#include "readwrite.h"



query parser(int argc, char** argv){
    query query;
    for (int i = 1 ; i < argc ; i++){
        if (strcmp(argv[i], "SELECT")) {
            query.select = argv[i+1];
        }
        if (strcmp(argv[i], "FROM")) {
            query.from = argv[i+1];
        }
    }
    return query;
}

int main(int argc, char** argv) {
    
}