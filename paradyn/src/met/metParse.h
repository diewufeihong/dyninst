
/*
 * $Log: metParse.h,v $
 * Revision 1.1  1994/07/07 03:25:26  markc
 * Configuration language parser.
 *
 */

#ifndef _MET_PARSE_H
#define _MET_PARSE_H

#include "util/h/machineType.h"
#include "util/h/list.h"

#include <stdio.h>

typedef struct daemonStruct {
    char *name;
    char *command;
    char *host;
    metArchType flavor;
} daemonStruct;

typedef struct processStruct {
    char *name;
    char *command;
    List<char*> args;
    int args_used;
    char *host;
    char *daemon;
    metArchType flavor;
} processStruct;

typedef struct visiStruct {
    char *name;
    char *command;
    List<char*> args;
    int args_used;
    char *host;
} visiStruct;

typedef struct tunableStruct {
    char *name;
    float value;
} tunableStruct;

struct parseStack {
    char *cp;
    int i;
    float f;
    metArchType flav;
    processStruct ps;
    tunableStruct ts;
    daemonStruct ds;
	visiStruct vs;
    List<char*> sl;
};

extern FILE *yyin;

#endif

