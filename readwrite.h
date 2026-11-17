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

char* hon_read(const honRead*);
int hon_write(const honWrite*);
#endif