#include "include/Models/Player.hpp"

Player::Player()
{
}

Player::Player(rapidjson::Document& document) {
    id = document["id"].GetString();
    name = document["name"].GetString();
    country = document["country"].GetString();
    avatar = document["avatar"].GetString();

    rank = document["rank"].GetInt();
    countryRank = document["countryRank"].GetInt();
    pp = document["pp"].GetFloat();
}

Player::~Player()
{
}