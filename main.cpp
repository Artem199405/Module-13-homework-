#include"SocialGraph.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    string user0 = "Олег";
    string user1 = "Никита";
    string user2 = "Настя";
    string user3 = "Ваня";
    string user4 = "Женя";
    string user5 = "Лена";
    string user6 = "Дима";
    string user7 = "Егор";
    string user8 = "Алина";
    string user9 = "Артем";

    SocialGraph g;

    g.addUser(user0);
    g.addUser(user1);
    g.addUser(user2);
    g.addUser(user3);
    g.addUser(user4);
    g.addUser(user5);
    g.addUser(user6);
    g.addUser(user7);
    g.addUser(user8);
    g.addUser(user9);

    cout << "Пользователи:" << endl;
    g.printUsers();
    cout << endl;

    g.addFriendship(user0, user4);
    g.addFriendship(user4, user1);
    g.addFriendship(user1, user5);
    g.addFriendship(user1, user8);
    g.addFriendship(user5, user7);
    g.addFriendship(user5, user2);
    g.addFriendship(user5, user8);
    g.addFriendship(user2, user3);
    g.addFriendship(user3, user6);
    g.addFriendship(user6, user9);

    g.findMinDistancesFloyd();

    return 0;
}