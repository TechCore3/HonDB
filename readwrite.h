#ifndef READWRITEH

#define READWRITEH

typedef struct {
    char* parent;
    char* name;
} honRead;

typedef struct {
    char* parent;
    char* name;
    char* content;
} honWrite;

typedef struct {
    char* select;
    char* from;
} query; //w.i.p.

char* hon_read(const honRead*);

int hon_write(const honWrite*);

#endif