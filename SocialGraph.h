#pragma once

#include <iostream>

using namespace std;

#define SIZE 10
#define VERYBIGINT 10000

class SocialGraph
{
public:
    SocialGraph();
    void addUser(string user);
    void addFriendship(string user1, string user2);
    void findMinDistancesFloyd();
    void printUsers();

private:
    int matrix[SIZE][SIZE];
    string users[SIZE];
    int usersCount;

    int getUserIndex(string user);
};