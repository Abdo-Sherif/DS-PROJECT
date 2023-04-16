#pragma once

#include<map>
#include<string>
#include "player.h"
class user
{
public:
	int budget;
	string username,password;
	int points[36];
	player players[5];
	int players_ids[5];
	int total_points;
	user();
	user(string user, string pass);
	void display();
	void DISPLAY_players();
	void Display_points();
	void ADD_player(map<int,player>,int id, int index);
	void sell_player(int idex);
	void replace_player(int new_player_id, int player_old_index);
	void load_players(map<int, player> player_map);
};

