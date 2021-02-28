#pragma once

#define The class
#define implements : public
#define Class {public: ;}
#define is {
#define with public
#define global :
#define object }

#define get (const int)0

typedef const int perm;

The SerialNumber is with global
    char* id;

    SerialNumber(const char* id) {
        this->id = (char*)id;
    }

    void operator<<(const char* id) {
        this->id = (char*)id;
    }

    const char* operator>>(perm permission) {
        if (permission == get) {
            return this->id;
        }
    }
object;

#undef The
#undef implements
#undef Class
#undef is
#undef with
#undef global
#undef object
