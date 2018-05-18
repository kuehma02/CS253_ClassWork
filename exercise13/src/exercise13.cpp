#include "exercise13.hpp"


map<string, Team> createteams(string filename){ 
    ifstream infile(filename);

    string firstline; 
    getline(infile, firstline); 

    map <string, Team> teamMap; 
 
    while (!infile.eof()) {
        string tyear, winner, result, loser;
        int year;
        getline(infile, tyear, '\t');
        getline(infile, winner, '\t');
        getline(infile, result, '\t');
        getline(infile, loser, '\n');
        year = stoi(tyear);

        if (teamMap.find(winner) == teamMap.end()){ 
            teamMap[winner].name = winner;
            teamMap[winner].wins +=1; 
            teamMap[winner].appearances +=1;
            teamMap[winner].winyears.push_back(year);
            teamMap[winner].appearyears.push_back(year); 
        } else {
            teamMap[winner].name = winner;
            teamMap[winner].wins +=1; 
            teamMap[winner].appearances +=1;
            teamMap[winner].winyears.push_back(year);
            teamMap[winner].appearyears.push_back(year); 
        }
        if (teamMap.find(loser) == teamMap.end()){ 
            teamMap[loser].name = loser;
            teamMap[loser].losses +=1; 
            teamMap[loser].appearances +=1;
            teamMap[loser].loseyears.push_back(year);
            teamMap[loser].appearyears.push_back(year); 
        } else {
            teamMap[loser].name = loser;
            teamMap[loser].losses +=1; 
            teamMap[loser].appearances +=1;
            teamMap[loser].loseyears.push_back(year);
            teamMap[loser].appearyears.push_back(year); 
        }
        
    }
    
    return teamMap;
}



bool CompareByName(const Team &team1, const Team &team2){
    return team1.name < team2.name;
}
bool CompareByAppearances(const Team &team1, const Team &team2){
    if (team1.appearances == team2.appearances){
        return CompareByName(team1, team2);
    }
    return team1.appearances < team2.appearances; 
}
bool CompareByWins(const Team &team1, const Team &team2){
    if (team1.wins == team2.wins){
        return CompareByAppearances(team1, team2);
    }
    return team1.wins < team2.wins; 
}
bool CompareByLosses(const Team &team1, const Team &team2){
    if (team1.losses == team2.losses){
        return CompareByAppearances(team1, team2);
    }
    return team1.losses < team2.losses; 
}


// A team with the most appearances in the final
string mostAppearances(string filename){
    map<string, Team> teamMap = createteams(filename);
    int maxApp = 0; 
    string team;
    for (auto it = teamMap.cbegin(); it !=teamMap.cend(); ++it){
        if ((*it).second.appearances > maxApp){
            maxApp = (*it).second.appearances;
            team = (*it).second.name; 
        }
        if ((*it).second.appearances == maxApp){
            if (CompareByName( teamMap[team], ((*it).second))){
                team = (*it).second.name;   
            }
        }
    } 
    return team;
}
// A team with the fewest appearances in the final
string fewestAppearances(string filename){
    map<string, Team> teamMap = createteams(filename);
    int minApp = 100; 
    string team;
    for (auto it = teamMap.cbegin(); it !=teamMap.cend(); ++it){
        if ((*it).second.appearances < minApp){
            minApp = (*it).second.appearances;
            team = (*it).second.name; 
        }
        if ((*it).second.appearances == minApp){
            if (CompareByName(teamMap[team], ((*it).second))){
                team = teamMap[team].name;   
            }
        }
    } 
    return team;

}
// A team with the most wins in the final
string mostWins(string filename){
    map<string, Team> teamMap = createteams(filename);
    int maxWins = 0; 
    string team;
    for (auto it = teamMap.cbegin(); it !=teamMap.cend(); ++it){
        if ((*it).second.wins > maxWins){
            maxWins = (*it).second.wins;
            team = (*it).second.name; 
        }
        if ((*it).second.wins == maxWins){
            if (CompareByAppearances( teamMap[team], ((*it).second))){
                team = (*it).second.name;   
            }
        }
    } 
    return team;
}
// A team with the fewest wins in the final
string fewestWins(string filename){
    map<string, Team> teamMap = createteams(filename);
    int minWins = 100;  
    string team;
    for (auto it = teamMap.cbegin(); it !=teamMap.cend(); ++it){
        if ((*it).second.wins < minWins){
            minWins = (*it).second.wins;
            team = (*it).second.name; 
        }
        if ((*it).second.wins == minWins){
            if (CompareByAppearances((*it).second, teamMap[team])){ 
                team = (*it).second.name;   
            }
        } 
    } 
    return team;
}
// A team with the most losses in the final
string mostLosses(string filename){
    map<string, Team> teamMap = createteams(filename);
    int maxLoss = 0; 
    string team;
    for (auto it = teamMap.cbegin(); it !=teamMap.cend(); ++it){
        if ((*it).second.losses > maxLoss){
            maxLoss = (*it).second.losses;
            team = (*it).second.name; 
        }
        if ((*it).second.losses == maxLoss){
            if (CompareByAppearances( teamMap[team], ((*it).second))){
                team = (*it).second.name;   
            }
        }
    } 
    return team;
}
// A team with the fewest losses in the final
string fewestLosses(string filename){
    map<string, Team> teamMap = createteams(filename);
    int minLosses = 100;  
    string team;
    for (auto it = teamMap.cbegin(); it !=teamMap.cend(); ++it){
        if ((*it).second.losses < minLosses){
            minLosses = (*it).second.losses;
            team = (*it).second.name; 
        }
        if ((*it).second.losses == minLosses){
            if (CompareByAppearances((*it).second, teamMap[team])){ 
                team = (*it).second.name;   
            }
        } 
    } 
    return team;
}
// A team with the longest sequence of appearances
string longestAppearancesSequence(string filename){
    map<string, Team> teamMap = createteams(filename);
    list<int> test; 
    for (auto it = teamMap.cbegin(); it !=teamMap.cend(); ++it){
        test = (*it).second.appearyears;

        string team;
        int longestseq = 0; 
        int seq = 1;  
        int prev = 0;
        int curr = 0;
        
        for (auto it = test.cbegin(); it != test.cend(); ++it){ 
            curr = *it; 
            if ((prev+1) == curr){
                seq +=1;
            }else {
                if (seq > longestseq) {
                    longestseq = seq;
                }
                seq = 1;
            }
            prev = curr;
        }

        if (seq > longestseq) { longestseq = seq; }

        team = (*it).second.name;
        teamMap[team].appearanceSequence = longestseq; 
    }
    int maxYears = 0; 
    string team;
    for (auto it = teamMap.cbegin(); it !=teamMap.cend(); ++it){

        if ((*it).second.appearanceSequence > maxYears){
            maxYears = (*it).second.appearanceSequence;
            team = (*it).second.name; 
        }
        if ((*it).second.appearanceSequence == maxYears){
            if (CompareByAppearances( teamMap[team], ((*it).second))){
                team = (*it).second.name;   
            }
        }   
    }
    return team;   
}
// A team with the longest sequence of wins
string longestWinningSequence(string filename){
    map<string, Team> teamMap = createteams(filename);
    list<int> test; 
    for (auto it = teamMap.cbegin(); it !=teamMap.cend(); ++it){
        test = (*it).second.winyears;

        string team;
        int longestseq = 0; 
        int seq = 1;  
        int prev = 0;
        int curr = 0;
        
        for (auto it = test.cbegin(); it != test.cend(); ++it){ 
            curr = *it; 
            if ((prev+1) == curr){
                seq +=1;
            }else {
                if (seq > longestseq) {
                    longestseq = seq;
                }
                seq = 1;
            }
            prev = curr;
        }

        if (seq > longestseq) { longestseq = seq; }

        team = (*it).second.name;
        teamMap[team].winningSequence = longestseq; 
    }
    int maxYears = 0; 
    string team;
    for (auto it = teamMap.cbegin(); it !=teamMap.cend(); ++it){

        if ((*it).second.winningSequence > maxYears){
            maxYears = (*it).second.winningSequence;
            team = (*it).second.name; 
        }
        if ((*it).second.winningSequence == maxYears){
            if (CompareByWins( teamMap[team], ((*it).second))){
                team = (*it).second.name;   
            }
        }   
    }
    return team;
}
// A team with the longest sequence of losses
string longestLosingSequence(string filename){
    map<string, Team> teamMap = createteams(filename);
    list<int> test; 
    for (auto it = teamMap.cbegin(); it !=teamMap.cend(); ++it){
        test = (*it).second.loseyears;

        string team;
        int longestseq = 0; 
        int seq = 1;  
        int prev = 0;
        int curr = 0;
        
        for (auto it = test.cbegin(); it != test.cend(); ++it){ 
            curr = *it; 
            if ((prev+1) == curr){
                seq +=1;
            }else {
                if (seq > longestseq) {
                    longestseq = seq;
                }
                seq = 1;
            }
            prev = curr;
        }

        if (seq > longestseq) { longestseq = seq; }

        team = (*it).second.name;
        teamMap[team].losingSequence = longestseq; 
    }
    int maxYears = 0; 
    string team;
    for (auto it = teamMap.cbegin(); it !=teamMap.cend(); ++it){

        if ((*it).second.losingSequence > maxYears){
            maxYears = (*it).second.losingSequence;
            team = (*it).second.name; 
        }
        if ((*it).second.losingSequence == maxYears){
            if (CompareByLosses( teamMap[team], ((*it).second))){
                team = (*it).second.name;   
            }
        }   
    }
    return team;
}
// The 2nd most successful team
string secondBest(string filename){
    map<string, Team> teamMap = createteams(filename);
    string best;
    best = mostWins(filename);
    teamMap.erase(best);

    int maxWins = 0; 
    string team;
    for (auto it = teamMap.cbegin(); it !=teamMap.cend(); ++it){
        if ((*it).second.wins > maxWins){
            maxWins = (*it).second.wins;
            team = (*it).second.name; 
        }
        if ((*it).second.wins == maxWins){
            if (CompareByAppearances( teamMap[team], ((*it).second))){
                team = (*it).second.name;   
            }
        }
    } 
    return team;    
}