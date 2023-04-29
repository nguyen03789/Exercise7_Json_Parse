/*
File: Json_Header.h
Author: Phan Trong Nguyen
Date: 
Description:
*/
#ifndef __JSON
#define __JSON

#include <stdio.h>
#include <stdint.h>
#include<stdlib.h>
#include<string.h>

typedef enum {
    JSON_NULL,
    JSON_BOOLEAN,
    JSON_NUMBER,
    JSON_STRING,
    JSON_ARRAY,
    JSON_OBJECT
} JsonType;


typedef struct JsonValue {
    JsonType type;
    union {
        int boolean;
        double number;
        char *string;
        struct {
            struct JsonValue *values;
            size_t count;
        } array;
        struct {
            char **keys;
            struct JsonValue *values;
            size_t count;
        } object;
    } value;
} JsonValue;

void parse_json(char *json_object);

#endif