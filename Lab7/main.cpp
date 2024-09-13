#include <iostream>
using namespace std;

int main() {
    float score, totalScore = 0, total = 0, scoreAchieved = 0, overallScores = 0;
    string name;
    int numOfStudents = 0;
    int min, max;
    float percent;
    do{
        totalScore = 0;
        total = 0;
        bool repeat = true;
        if(numOfStudents == 0){
            cout << "Enter first student name: ";
            cin >> name;
        }else{
            cout << "Enter next student name (-1 to end): ";
            cin >> name;
        }
        if(name != "-1"){
            while(repeat){
                if(total == 0){
                    cout << "Enter " << name <<"'s first score: ";
                    cin >> score;
                    scoreAchieved = scoreAchieved + score;
                    totalScore = totalScore + score;
                    overallScores = overallScores + 10;
                    total = total + 10;
                    min = score;
                    max = score;
                }else{
                    cout << "Enter score (-1 to end): ";
                    cin >> score;
                    if( score != -1){
                        scoreAchieved = scoreAchieved + score;
                        totalScore = totalScore + score;
                        overallScores = overallScores + 10;
                        total = total + 10;
                        if(score < min){
                            min = score;
                        }
                        if(score > max){
                            max = score;
                        }
                    }else{
                        repeat = false;
                    }
                }
            }
            percent = (totalScore/total)*100;
            cout << endl << name << " earned " << totalScore << " points out of " << total << " for a score of " << percent << " percent" << endl;
            cout << name <<" 's high quiz was " << max << ", and low quiz was " << min << endl << endl;
            numOfStudents++;
        }
    }while(name != "-1");
    percent = (scoreAchieved/overallScores)*100;
    cout << endl << "The whole class earned " << scoreAchieved << " points out of " << overallScores << " for a score of " << percent << " percent." << endl;
    return 0;
}