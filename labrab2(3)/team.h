#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <vector>
#include <iostream>
//#include "field_player.h"
//#include "goalkeeper.h"
//class goalkeeper;
//class field_player;
class league;
class team
{
private:
	char name[50];
	int wins;
	int defeats;
	int draws;
	int value_of_field_players;
	int value_of_goalkeepers;
	char location[50];
	//std::vector<field_player*> m_field_player;
	//std::vector<goalkeeper*> m_goalkeeper;
	std::vector<league*> lg;
	//////////////////////////func
public:
	void AddLeague(league* a) 
	{
		lg.push_back(a);
	};
	/*void AddGoalkeeper(goalkeeper* gp) 
	{
		m_goalkeeper.push_back(gp);
	};
	void AddFieldPlayer(field_player* fp)
	{
		m_field_player.push_back(fp);
	};*/
	team() {};
	team(const char* name1, int wins1, int defeats1, int draws1, int val_of_fp, int val_of_gk, const char* location1) 
	{

		strcpy(name, name1);
		wins = wins1;
		defeats = defeats1;
		draws = draws1;
		value_of_field_players = val_of_fp;
		value_of_goalkeepers = val_of_gk;
		strcpy(location, location1);
	};
	void change_name(char* name1)
	{
		strcpy(name, name1);
	};
	void change_defeats(int defeats1)
	{
		defeats = defeats1;
	};
	void change_draws(int draws1)
	{
		draws = draws1;
	};
	void change_value_of_field_players(int value_of_field_players1)
	{
		value_of_field_players = value_of_field_players1;
	};
	void change_value_of_goalkeepers(int value_of_goalkeepers1)
	{
		value_of_goalkeepers = value_of_goalkeepers1;
	};
	void change_wins(int wins1)
	{
		wins = wins1;
	};
	void change_location(char* location1)
	{
		strcpy(location, location1);
	};
	char* return_name() { return name; };
	int return_defeats() { return defeats; };
	int return_wins() { return wins; };
	int return_draws() { return draws; };
	int return_value_of_field_players() { return value_of_field_players; };
	int return_value_of_goalkeepers() { return value_of_goalkeepers; };
	char* return_location() { return location; };
	//~team();
	void vivod() { printf("%s %d %d %d %d %d %s",name,defeats,wins,draws,value_of_field_players,value_of_goalkeepers,location); };
};

