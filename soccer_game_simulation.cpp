
//
//  Created by Tara Rao-Pandit on 2020-10-30.
//  Copyright © 2020 Tara Rao-Pandit. All rights reserved.
//

#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

void start_soccer_simulation();
// PURPOSE: start the game
// INPUTS: nothing
// OUTPUTS: outputs provided via the console

void start_soccer_simulation () {
// initialize and declare variables
    int num_events = 0;
    int val1 = 0, val2 = 0, val3 = 0;
// variables for team a:
    int team_a_score = 0, shots_on_goal_a = 0, shots_off_goal_a = 0, blocked_shots_a = 0, fouls_a = 0, yellow_card_a = 0, red_card_a = 0;
// variables for team b:
    int team_b_score = 0, shots_on_goal_b = 0, shots_off_goal_b = 0, blocked_shots_b = 0, fouls_b = 0, yellow_card_b = 0, red_card_b = 0;

// declare srand function
    srand((unsigned int) time(0));
    
// generate a number between 1 and 20
    while (num_events == 0) {
    num_events = rand() % 20 + 1;
    }

    cout << num_events << endl;
// split the game in half
        int first_half_end = num_events/2;
        int second_half_start = first_half_end + 1;
    
// start game
    cout << "The match has begun" << endl;
    for (int i = 1; i <= first_half_end; i++) {
        cout << endl;
        val1 = rand() % 6 +1;
        if (val1 == 1) {
        //Team A shot at target
                val2 = rand() % 4;
                    if (val2 == 0) {
                        cout << "Team A has scored a goal! Fantastic shot!" << endl;
                        team_a_score += 1;
                    }
                    else if (val2 == 1) {
                        cout << "Team A tries to make shot but saved by Team B!" << endl;
                        shots_on_goal_a += 1;
                    }
                    else if (val2 == 2) {
                        cout << "Team A makes a shot but it goes off goal!" << endl;
                        shots_off_goal_a += 1;
                    }
                    else if (val2 == 3) {
                        cout << "Team A's shot blocked by Team B!" << endl;
                        blocked_shots_b += 1;
                        shots_off_goal_a +=1;
                }
        }
    
        if (val1 == 2) {
         //Team B shot at target
                val2 = rand() % 4;
                    if (val2 == 0) {
                               cout << "Team B has scored a goal! Fanstastic shot!" << endl;
                               team_b_score += 1;
                           }
                    else if (val2 == 1) {
                               cout << "Shot made on goal but saved by Team A" << endl;
                               shots_on_goal_b += 1;
                           }
                    else if (val2 == 2) {
                               cout << "Team B makes a shot but it goes off goal!" << endl;
                               shots_off_goal_b += 1;
                           }
                    else if (val2 == 3) {
                               cout << "Team B's shot blocked by Team A!" << endl;
                                shots_off_goal_b += 1;
                                blocked_shots_a += 1;
            }
        }
    
        if (val1 == 3) {
                cout << "Team B has committed a foul, Team A awarded a free kick" << endl;
            fouls_b += 1;
                val2 = rand() % 4;
                       if (val2 == 0) {
                           cout << "Team A has scored a goal! Nice shot!" << endl;
                           team_a_score += 1;
                       }
                       else if (val2 == 1) {
                           cout << "Team A's shot made on goal but saved by Team B! Great save!" << endl;
                           shots_on_goal_a += 1;
                       }
                       else if (val2 == 2) {
                           cout << "Team A's shot off goal" << endl;
                           shots_off_goal_a += 1;
                       }
                       else if (val2 == 3) {
                           cout << "Team A tries to score but shot blocked by Team B!" << endl;
                           shots_off_goal_a +=1;
                           blocked_shots_b += 1;
            }
        }
        
        if (val1 == 4) {
                cout << "Team A has committed a foul, Team B awarded a free kick" << endl;
            fouls_a += 1;
            
                val2 = rand() % 4;
                        if (val2 == 0) {
                            cout << "Team B scored a goal" << endl;
                            team_b_score += 1;
                        }
                        else if (val2 == 1) {
                            cout << "Shot made on goal but saved" << endl;
                            shots_on_goal_b += 1;
                        }
                        else if (val2 == 2) {
                            cout << "Team B shoots but shot goes off goal" << endl;
                            shots_off_goal_b += 1;
                        }
                        else if (val2 == 3) {
                            cout << "Team B shoots but shot blocked by Team A" << endl;
                            shots_off_goal_b +=1;
                            blocked_shots_a += 1;
            }
        }
            
        if (val1 == 5) {
                cout << "Team B has committed a foul close to the goal! Team A awarded a penalty kick" << endl;
            fouls_b += 1;
            
                val2 = rand() % 4;
                        if (val2 == 0) {
                            cout << "Team A has scored a goal! Great shot!" << endl;
                            team_a_score += 1;
                        }
                        else if (val2 == 1) {
                            cout << "Shot made on goal but saved by Team B. Nice save!" << endl;
                            shots_on_goal_a += 1;
                        }
                        else if (val2 == 2) {
                            cout << "Team A kicks and its a shot off goal" << endl;
                            shots_off_goal_a += 1;
                        }
                        else if (val2 == 3) {
                            cout << "Team A kicks and shot blocked by Team B!" << endl;
                            shots_off_goal_a +=1;
                            blocked_shots_b += 1;
                            }
                val3 = rand() % 3;
                         if (val3 == 1) {
                              cout << "Yellow card given to Team B" << endl;
                              yellow_card_b += 1;
                          }
                          else if (val3 == 2) {
                              cout << "Red card given to Team B" << endl;
                              red_card_b += 1;
                          }
            }
            
            if (val1 == 6) {
                cout << "Team A has committed a foul close to the goal! Team B awarded a penalty kick" << endl;
                fouls_a += 1;
                        val2 = rand() % 4;
                        if (val2 == 0) {
                            cout << "Team B scored a goal" << endl;
                            team_b_score += 1;
                        }
                        else if (val2 == 1) {
                            cout << "Shot made on goal but saved" << endl;
                            shots_on_goal_b += 1;
                        }
                        else if (val2 == 2) {
                            cout << "Team B shoots, but its a shot off goal" << endl;
                            shots_off_goal_b += 1;
                        }
                        else if (val2 == 3) {
                            cout << "Team B shoots but shot blocked by Team A!" << endl;
                            shots_off_goal_b += 1;
                            blocked_shots_a += 1;
                        }
                val3 = rand() % 3;
                if (val3 == 1) {
                    cout << "Team A given yellow card for their foul" << endl;
                    yellow_card_a += 1;
                }
                else if (val3 == 2) {
                    cout << "Team A given red card for their foul" << endl;
                    red_card_a += 1;
                }
        }
    }
        cout << endl << endl;
        cout << "Half-time! Here's a quick update!" << endl;
        cout << setw(40) << "Team A:" << setw(40) << "Team B: " << endl;
        cout << "Score: " << setw(30) << team_a_score << setw(40) << team_b_score << endl;
        cout << "Shots on Goal: " << setw(22) << shots_on_goal_a << setw(40) << shots_on_goal_b << endl;
        cout << "Shots off Goal: " << setw(21) << shots_off_goal_a << setw(40) << shots_off_goal_b << endl;
        cout << "Blocked Shots: " << setw(22) << blocked_shots_a << setw(40) << blocked_shots_b << endl;
        cout << "Fouls: " << setw(30) << fouls_a << setw(40) << fouls_b << endl;
        cout << "Yellow Cards: " << setw(23) << yellow_card_a << setw(40) << yellow_card_b << endl;
        cout << "Red Cards: " << setw(26) << red_card_a << setw(40) << red_card_b << endl;
        cout << endl << "Match Resumes: " << endl;
        
        for (int i = second_half_start; i <= num_events; i++) {
            cout << endl;
            val1 = rand() % 6 +1;
            if (val1 == 1) {
            //        Team A shot at target
                    val2 = rand() % 4;
                        if (val2 == 0) {
                            cout << "Team A has scored a goal! Fantastic shot!" << endl;
                            team_a_score += 1;
                        }
                        else if (val2 == 1) {
                            cout << "Team A tries to make shot but saved by Team B!" << endl;
                            shots_on_goal_a += 1;
                        }
                        else if (val2 == 2) {
                            cout << "Team A makes a shot but it goes off goal!" << endl;
                            shots_off_goal_a += 1;
                        }
                        else if (val2 == 3) {
                            cout << "Team A's shot blocked by Team B!" << endl;
                            blocked_shots_b += 1;
                            shots_off_goal_a +=1;
                    }
            }
            
            if (val1 == 2) {
             //       Team B shot at target
                    val2 = rand() % 4;
                        if (val2 == 0) {
                                   cout << "Team B has scored a goal! Fanstastic shot!" << endl;
                                   team_b_score += 1;
                               }
                        else if (val2 == 1) {
                                   cout << "Shot made on goal but saved by Team A" << endl;
                                   shots_on_goal_b += 1;
                               }
                        else if (val2 == 2) {
                                   cout << "Team B makes a shot but it goes off goal!" << endl;
                                   shots_off_goal_b += 1;
                               }
                        else if (val2 == 3) {
                                   cout << "Team B's shot blocked by Team A!" << endl;
                                    shots_off_goal_b += 1;
                                    blocked_shots_a += 1;
                }
            }
        
            if (val1 == 3) {
                    cout << "Team B has committed a foul, Team A awarded a free kick" << endl;
                fouls_b += 1;
                
                    val2 = rand() % 4;
                           if (val2 == 0) {
                               cout << "Team A has scored a goal! Nice shot!" << endl;
                               team_a_score += 1;
                           }
                           else if (val2 == 1) {
                               cout << "Team A's shot made on goal but saved by Team B! Great save!" << endl;
                               shots_on_goal_a += 1;
                           }
                           else if (val2 == 2) {
                               cout << "Team A's shot off goal" << endl;
                               shots_off_goal_a += 1;
                           }
                           else if (val2 == 3) {
                               cout << "Team A tries to score but shot blocked by Team B!" << endl;
                               shots_off_goal_a +=1;
                               blocked_shots_b += 1;
                }
            }
                
            
            if (val1 == 4) {
                    cout << "Team A has committed a foul, Team B awarded a free kick" << endl;
                fouls_a += 1;
                
                    val2 = rand() % 4;
                            if (val2 == 0) {
                                cout << "Team B scored a goal" << endl;
                                team_b_score += 1;
                            }
                            else if (val2 == 1) {
                                cout << "Shot made on goal but saved" << endl;
                                shots_on_goal_b += 1;
                            }
                            else if (val2 == 2) {
                                cout << "Team B shoots but shot goes off goal" << endl;
                                shots_off_goal_b += 1;
                            }
                            else if (val2 == 3) {
                                cout << "Team B shoots but shot blocked by Team A" << endl;
                                shots_off_goal_b +=1;
                                blocked_shots_a += 1;
                }
            }
                
            if (val1 == 5) {
                    cout << "Team B has committed a foul close to the goal! Team A awarded a penalty kick" << endl;
                fouls_b += 1;
                
                    val2 = rand() % 4;
                            if (val2 == 0) {
                                cout << "Team A has scored a goal! Great shot!" << endl;
                                team_a_score += 1;
                            }
                            else if (val2 == 1) {
                                cout << "Shot made on goal but saved by Team B. Nice save!" << endl;
                                shots_on_goal_a += 1;
                            }
                            else if (val2 == 2) {
                                cout << "Team A kicks and its a shot off goal" << endl;
                                shots_off_goal_a += 1;
                            }
                            else if (val2 == 3) {
                                cout << "Team A kicks and shot blocked by Team B!" << endl;
                                shots_off_goal_a +=1;
                                blocked_shots_b += 1;
                                }
                    val3 = rand() % 3;
                             if (val3 == 1) {
                                  cout << "Yellow card given to Team B" << endl;
                                  yellow_card_b += 1;
                              }
                              else if (val3 == 2) {
                                  cout << "Red card given to Team B" << endl;
                                  red_card_b += 1;
                              }
                }
                
                if (val1 == 6) {
                    cout << "Team A has committed a foul close to the goal! Team B awarded a penalty kick" << endl;
                    fouls_a += 1;
                            val2 = rand() % 4;
                            if (val2 == 0) {
                                cout << "Team B scored a goal" << endl;
                                team_b_score += 1;
                            }
                            else if (val2 == 1) {
                                cout << "Shot made on goal but saved" << endl;
                                shots_on_goal_b += 1;
                            }
                            else if (val2 == 2) {
                                cout << "Team B shoots, but its a shot off goal" << endl;
                                shots_off_goal_b += 1;
                            }
                            else if (val2 == 3) {
                                cout << "Team B shoots but shot blocked by Team A!" << endl;
                                shots_off_goal_b += 1;
                                blocked_shots_a += 1;
                            }
                    val3 = rand() % 3;
                    if (val3 == 1) {
                        cout << "Team A given yellow card for their foul" << endl;
                        yellow_card_a += 1;
                    }
                    else if (val3 == 2) {
                        cout << "Team A given red card for their foul" << endl;
                        red_card_a += 1;
                    }
            }
    }
    
    cout << endl;
    if (team_a_score > team_b_score)
    cout << "Match ended. Team A won the match!" << endl;
    if (team_b_score > team_a_score)
    cout << "Match ended. Team B won the match!" << endl;
    cout << "End of Game Recap:" << endl;
    cout << setw(40) << "Team A:" << setw(40) << "Team B: " << endl;
    cout << "Score: " << setw(30) << team_a_score << setw(40) << team_b_score << endl;
    cout << "Shots on Goal: " << setw(22) << shots_on_goal_a << setw(40) << shots_on_goal_b << endl;
    cout << "Shots off Goal: " << setw(21) << shots_off_goal_a << setw(40) << shots_off_goal_b << endl;
    cout << "Blocked Shots: " << setw(22) << blocked_shots_a << setw(40) << blocked_shots_b << endl;
    cout << "Fouls: " << setw(30) << fouls_a << setw(40) << fouls_b << endl;
    cout << "Yellow Cards: " << setw(23) << yellow_card_a << setw(40) << yellow_card_b << endl;
    cout << "Red Cards: " << setw(26) << red_card_a << setw(40) << red_card_b << endl;
}
int main () {
    start_soccer_simulation();
}

