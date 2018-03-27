#include<iostream>
#include<fstream>
#include<array>

using namespace std;

int main(){
    int numTeams = 29;
    ifstream teams;
    ifstream winners;
    teams.open("Teams.txt");
    winners.open("WorldSeriesWinners.txt"); 
    string listT[numTeams];
    int teamW[numTeams];
    int i = 0;
    for(int i = 0; i < numTeams; i++){
        string team;
        getline(teams, team);
        listT[i] = team;
        cout << team << endl;
    }
    teams.close();
    string query;
    for(int i = 0; i < numTeams; i++){
        string currentTeam = listT[i];
        string won;
        getline(winners, won);
        while(!winners.eof()){
            if(currentTeam == won){
                
            }
        }
    }
    cout << "Enter one of the teams listed above to see how many times they won the world series: " << endl;
    getline(cin, query);
    
    printf("The %s won %d WorldSeries",query.c_str(), teamW[]);
    cout << endl;
    winners.close();
}