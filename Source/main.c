#include "Json_Source.c"

char *json_object = "{\"Ten\":\"Nguyen A\", \"Tuoi\": 19, \"Dia chi\": \"HCM\"}";

int main(int argc, char const *argv[])
{
    parse_json(json_object);
    return 0;
}
