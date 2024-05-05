#include "SocialFeature.h"


//void SocialFeature::addUser(const std::string& username) {
//    userAccounts.addUser(username);
//}

void SocialFeature::follow(const std::string& follower, const std::string& followee) {
    userAccounts.follow(follower, followee);
}

void SocialFeature::unfollow(const std::string& follower, const std::string& followee) {
    userAccounts.unfollow(follower, followee);
}

void SocialFeature::displayFollowing(const std::string& username) {
    userAccounts.displayFollowing(username);
}
