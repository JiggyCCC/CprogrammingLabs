/*this code will use structures and functions to fill out a form for airlines*/
// Charlie Casey Carney 
// 14/04/26

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define AIRLINE_NAME 30
#define FLIGHT_NUMBER 25
#define PASSENGER_SURNAME 21
#define DESTINATION 40
#define SEAT_NUMBER 10


struct passenger_information
{
    char airline_name[AIRLINE_NAME];
    char flight_number[FLIGHT_NUMBER];
    char passenger_surname[PASSENGER_SURNAME];
    char seat_number[SEAT_NUMBER];
    char destination[DESTINATION];
    char No_of_bags[SEAT_NUMBER];
};

void fnx1(struct passenger_information * p1, struct passenger_information * p2);
void display(struct passenger_information p1, struct passenger_information p2);

int main()
{   
    struct passenger_information passenger1, passenger2;
    fnx1(& passenger1, & passenger2);

    display(passenger1, passenger2);

    return 0;
}

void fnx1(struct passenger_information *ptr1, struct passenger_information *ptr2)
{
     // Passenger one information 
    printf("Please enter the name of your airline:\n");
    fgets(ptr1 -> airline_name, AIRLINE_NAME, stdin);
    ptr1->airline_name[strcspn(ptr1->airline_name, "\n")] = '\0';

    printf("Please enter your flight number:\n");
    fgets(ptr1 -> flight_number, FLIGHT_NUMBER, stdin);
    ptr1->flight_number[strcspn(ptr1->flight_number, "\n")] = '\0';
   

    printf("please enter your surname:\n");
    fgets(ptr1 -> passenger_surname, PASSENGER_SURNAME, stdin);
    ptr1->passenger_surname[strcspn(ptr1->passenger_surname, "\n")] = '\0';
   

    printf("please enter your seat number\n");
    fgets(ptr1 -> seat_number, SEAT_NUMBER, stdin);
    ptr1->seat_number[strcspn(ptr1->seat_number, "\n")] = '\0';
   

    printf("please enter your destination:\n");
    fgets(ptr1 -> destination, DESTINATION, stdin);
    ptr1->destination[strcspn(ptr1->destination, "\n")] = '\0';

    printf("please enter the number of bags you are bringing:\n");
    fgets(ptr1 -> No_of_bags, SEAT_NUMBER, stdin);
    ptr1->No_of_bags[strcspn(ptr1->seat_number, "\n")] = '\0';

    // end of passenger one information 

    // Passenger two information 
    printf("Please enter the name of your airline:\n");
    fgets(ptr2 -> airline_name, AIRLINE_NAME, stdin);
    ptr2->airline_name[strcspn(ptr2->airline_name, "\n")] = '\0';

    printf("Please enter your flight number:\n");
    fgets(ptr2 -> flight_number, FLIGHT_NUMBER, stdin);
    ptr2->flight_number[strcspn(ptr2->flight_number, "\n")] = '\0';
   

    printf("please enter your surname:\n");
    fgets(ptr2 -> passenger_surname, PASSENGER_SURNAME, stdin);
    ptr2->passenger_surname[strcspn(ptr2->passenger_surname, "\n")] = '\0';
   

    printf("please enter your seat number\n");
    fgets(ptr2 -> seat_number, SEAT_NUMBER, stdin);
    ptr2->seat_number[strcspn(ptr2->seat_number, "\n")] = '\0';
   

    printf("please enter your destination:\n");
    fgets(ptr2 -> destination, DESTINATION, stdin);
    ptr2->destination[strcspn(ptr2->destination, "\n")] = '\0';

    printf("please enter the number of bags you are bringing:\n");
    fgets(ptr2 -> No_of_bags, SEAT_NUMBER, stdin);
    ptr2->No_of_bags[strcspn(ptr2->seat_number, "\n")] = '\0';
    

    
    // end of passenger two information 
    
}

void display(struct passenger_information pas1, struct passenger_information pas2)
{
    // Display passenger 1's information 
    printf("\n--- Passenger one Details ---\n");
    printf("Airline: %s\n", pas1.airline_name);
    printf("Flight Number: %s\n", pas1.flight_number);
    printf("Surname: %s\n", pas1.passenger_surname);
    printf("Seat Number: %s\n", pas1.seat_number);
    printf("Destination: %s\n", pas1.destination);
    printf("Bags: %s\n", pas1.No_of_bags);

    //display passenger 2's information 
    printf("\n--- Passenger two Details ---\n");
    printf("Airline: %s\n", pas2.airline_name);
    printf("Flight Number: %s\n", pas2.flight_number);
    printf("Surname: %s\n", pas2.passenger_surname);
    printf("Seat Number: %s\n", pas2.seat_number);
    printf("Destination: %s\n", pas2.destination);
    printf("Bags: %s\n", pas2.No_of_bags);
}

