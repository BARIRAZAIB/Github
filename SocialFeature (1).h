#ifndef SOCIALFEATURE_H
#define SOCIALFEATURE_H

#include "UserAccounts.h"

class SocialFeature {
private:
    UserAccounts userAccounts;

public:
   // void addUser(const std::string& username);
    void follow(const std::string& follower, const std::string& followee);
    void unfollow(const std::string& follower, const std::string& followee);
    void displayFollowing(const std::string& username);
};

#endif
