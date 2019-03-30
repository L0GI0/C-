#pragma once

#include <set>
#include <algorithm>
#include <iterator>

class Team
{
public:
	Team() {}
	void add(Member added) { _team.insert(added); }
	const std::set<Member, Compare>& operator () () { return _team; }
	const std::set<Member, Compare>& getTeam() const { return _team; }
	Team operator - (const Team& second) const {
		Team team;
		std::set_difference(_team.begin(), _team.end(), second._team.begin(), second._team.end(), std::inserter(team._team, team._team.begin()));
		return team;	
	}
	Team operator + (const Team& second) const {
		Team team;
		team._team = this->_team;
		team._team.insert(second._team.begin(), second._team.end());
		return team;
	}

	template <typename T>
	void kill(T&& lambda) {
		std::vector<Member> dest;
		std::copy(_team.begin(), _team.end(), std::back_inserter(dest));
		dest.erase(std::remove_if(dest.begin(), dest.end(), lambda), dest.end());
		_team.clear();
		_team = std::set<Member, Compare> (dest.begin(), dest.end());
	}
private:
	std::set<Member, Compare> _team;	
};

std::ostream& operator << (std::ostream& o, const Team& team) {
	std::copy(team.getTeam().begin(), team.getTeam().end(), std::ostream_iterator<Member>(o, ""));
	return o;
}