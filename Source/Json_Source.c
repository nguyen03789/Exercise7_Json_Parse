#include "../Header/Json_Header.h"

void parse_json(char *json_object){
    int i = 0;
    char key[10];
    int index = 0;
    char memory;
    while (*json_object != '}')
    {
        if(*json_object == '{') {
            printf("Key: ");
            json_object++;
        }
        else if(*json_object == '\"') json_object++;
            else if (*json_object == ':'){
                printf(", ");
                printf("Value: ");
                json_object++;
            }
                else if(*json_object == ',') {
                    printf("\n");
                    printf("Key: ");
                    json_object++;
                    }
                    else {
                        printf("%c",*json_object);
                        json_object++;
                    }
    }   
}
  