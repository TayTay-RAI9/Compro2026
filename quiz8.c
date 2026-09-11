#include <stdio.h>

struct address {
    int houseNumber;
    int moo;
    char road[50];
    char district[50];
    char province[50];
};

struct student {
    char fullname[100];
    int ID;
    struct address Address;
    char phone[20];
};

int main(void) {
    struct student Student = {
        "Poom Konghuayrob",
        69011014,
        {3, 2, "ChalongKrung Rd.", "Ladkrabang", "Bangkok"},
        "088 888 8888"
    };

    printf("full name: %s, ID: %d\n",Student.fullname, Student.ID);
    printf("Address: %d moo %d, %s\n", Student.Address.houseNumber, Student.Address.moo, Student.Address.road);

    printf("%s, %s\n\n", Student.Address.district, Student.Address.province);
    printf("tel. %s\n", Student.phone);

    return 0;


}