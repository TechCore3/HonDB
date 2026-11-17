#include <stdio.h>
#include <stdlib.h>
#include "readwrite.h"

char* hon_read(const honRead *entry) {
    char fpath[256];
    snprintf(fpath, sizeof(fpath), "%s/%s", entry->parent, entry->name);
    FILE * reader = fopen(fpath, "r");
    if (reader == NULL) {
        return NULL;
    }
    char buf[256];
    fgets(buf, sizeof(buf), reader); // intended to be used as a DB (entries arent supposed to have newlines)
    fclose(reader);
    return buf;
}

int hon_write(const honWrite *entry) {
    char fpath[256];
    snprintf(fpath, sizeof(fpath), "%s/%s.hontemp", entry->parent, entry->name);
    FILE * writer = fopen(fpath, "w");
    if (NULL == writer) {
        return 1;
    }
    if (sprintf(writer, entry->content) < 0) {
        return 2; //content empty or write fail
    }
    fclose(writer);
    return 0;
}