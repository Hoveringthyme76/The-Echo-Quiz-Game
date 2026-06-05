#include <iostream>
#include <string>
#include <chrono>
#include <thread>
using namespace std::chrono;
using namespace std;

/*
     Independence, the goal to make your own choices without the fear of indecision. Along with the freedom of your actions.  Traits: High risk tolerance, low social compliance, extensitive time management, internal locus of control
     Mastery, the ability to grow yourself on a personal level, to the point where you become more competent as a result.             High self reflection, deliberate practice habits, high level of discipline, high impulsivity control
     Connection, the value in others, as well as the need for validation in the things you do in life.                                High amount of openess, extremely empathetic, collaborative decision making, sacrificial loyalty
     Stability, also related to financial security, or the need to maintain your own safety, in a world full of uncertainty.          Systematic Risk mitigation, dominance oriented, material and structural focused, priotizes tangible assets
     Purpose, the ability to make it so no matter who you are, you act with intent and meaning.                                       Narrative resilience, possibly philosophical, ruthless value filtering
*/

class Quiz
{
    
    private:
        int consistentencyCheck[10][5] = {
            {0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0}};

        char classAnswer;
        string goalAssementType;

        float userScore = 0.0;

    public:
        void gradeGoal()
        {
            int answerChecker;

            if(goalAssementType == "Independence")
            {
                answerChecker = 0;
            }
            else if(goalAssementType == "Growth")
            {
                answerChecker = 1;
            }
            else if(goalAssementType == "Connection")
            {
                answerChecker = 2;
            }
            else if(goalAssementType == "Stability")
            {
                answerChecker = 3;
            }
            else if(goalAssementType == "Purpose")
            {
                answerChecker = 4;
            }

            for(int k = 0; k < 10; k++)
            {
                if(consistentencyCheck[k][answerChecker] == 1)
                {
                    userScore += 8.5;
                }
            }

            cout << "You are " << userScore << "% with your current goal!\n";

            if(goalAssementType == "Independence")
            {
                cout << "Keep soaring to new heights!" << endl;
            }
            else if(goalAssementType == "Growth")
            {
                cout << "Keep on learning and growing!" << endl;
            }
            else if(goalAssementType == "Connection")
            {
                cout << "Keep on cherishing those around you!" << endl;
            }
            else if(goalAssementType == "Stability")
            {
                cout << "Keep up with grounding yourself well!" << endl;
            }
            else if(goalAssementType == "Purpose")
            {
                cout << "Keep up with your dedication!" << endl;
            }
        }
        void currentGoal(char answer)
        {
            switch(answer)
            {
                case 'a':
                case 'A':
                    goalAssementType = "Independence";
                    break;
                case 'b':
                case 'B':
                    goalAssementType = "Growth";
                    break;
                case 'c':
                case 'C':
                    goalAssementType = "Connection";
                    break;
                case 'd':
                case 'D':
                    goalAssementType = "Stability";
                    break;
                case 'e':
                case 'E':
                    goalAssementType = "Purpose";
                    break;
            }

        }
        void answerConfirmation(int answerVerification[], char answer, int i)
        {
            if(answer == 'A' || answer == 'a')
            {
                consistentencyCheck[i][0] = 1;
            }
            else if(answer == 'B' || answer == 'b')
            {
                consistentencyCheck[i][1] = 1;
            }
            else if(answer == 'C' || answer == 'c')
            {
                consistentencyCheck[i][2] = 1;
            }
            else if(answer == 'D' || answer == 'd')
            {
                consistentencyCheck[i][3] = 1;
            }
            else if(answer == 'E' || answer == 'e')
            {
                consistentencyCheck[i][4] = 1;
            }
        }
        char questionNumber(int questionsAvailable[], int i)
        {
            
            
            switch(questionsAvailable[i])
            {
                case 1:
                    cout << "Question 1.\n"
                         << "Which superpower would you use daily, if you have the ability to control it?\n"
                         << "[A] Flight, [B] Super intelligence, [C] life transfer, [D] Super strength, [E] Invisibility\n";
                    break;
                case 2:
                    cout << "Question 2.\n"
                         << "Out of the following items your allowed to pick on a deserted island, what item would you bring?\n"
                         << "[A] A cellphone, [B] Multiple different seeds, [C] A portable water bottle filled with water, [D] A flare gun, [E] A compass\n";
                    break;
                case 3:
                    cout << "Question 3.\n"
                         << "Which of the following planets would you most likely visit?\n"
                         << "[A] Jupiter, [B] Saturn, [C] Venus, [D] Mars, [E] Pluto\n";
                    break;
                case 4:
                    cout << "Question 4\n"
                         << "What is one trait that best describes you?\n"
                         << "[A] Curiosity, [B] Displined, [C] Compassionate, [D] Resilient, [E] Self-Aware\n";
                    break;
                case 5:
                    cout << "Question 5.\n"
                         << "Out of the five colors, what one is your most favorite?\n"
                         << "[A] Yellow, [B] Red, [C] Green, [D] Blue, [E] Violet\n";
                    break;
                case 6:
                    cout << "Question 6.\n"
                         << "If you discovered someone spread a false rumor about you, how would you respond?\n"
                         << "[A] Refuse to let that control you, [B] Reflect on the rumor, [C] Try to understand why this rumor started, [D] Ignore the rumor, [E] Focus on what you can achieve\n";
                    break;
                case 7:
                    cout << "Question 7.\n"
                         << "If you obtained 1 million dollars, what would you use it on?\n"
                         << "[A] traveling to a place of your choice, [B] Hire a master to train you, [C] A donation towards a charity you support, [D] Personal investments, [E] None of the above\n";
                    break;
                case 8:
                    cout << "Question 8.\n"
                         << "What did you eat for lunch today?\n"
                         << "[A] Pasta, [B] Fruits and vegetables, [C] A pizza, [D] Rice, [E] Oatmeal\n";
                    break;
                case 9:
                    cout << "Question 9.\n"
                         << "Which of the following activities do you enjoy in your free-time?\n"
                         << "[A] Jogging at the park, [B] Reading books, [C] Chating with friends or family, [D] Playing board games, [E] Writing poetry\n";
                    break;
                case 10:
                    cout << "Question 10.\n"
                         << "Which of the following words best describes you main goal in life?\n"
                         << "[A] Independence, [B] Growth, [C] Connection, [D] Stability, [E] Purpose\n";
                    break;
            }
            cin >> classAnswer;
            return classAnswer;
        }
};

void introduction();

int main()
{
    introduction();

    Quiz currentQuiz;
    char answer;
    int questionsAvailable[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, i = 0;

    char consistentGoal;     

    while(i < 10)
    {
        answer = currentQuiz.questionNumber(questionsAvailable, i);

        if((answer >= 'A' && answer <= 'E') || (answer >= 'a' && answer <= 'e'))
        {
            currentQuiz.answerConfirmation(questionsAvailable, answer, i);
            if(i == 0 && ((answer >= 'A' && answer <= 'E') || (answer >= 'a' && answer <= 'e')))
            {
                consistentGoal = answer;
                currentQuiz.currentGoal(answer);
            }
            i++;
        }
        else
        {
            cout << "Answer not found, please try again...\n";
        }
    }

    int consistencyPercent; 

    
    cout << "Consistency check accepted\n";
    currentQuiz.gradeGoal();

    return 0;
}

void introduction()
{
    cout << "Hello and welcome to the echo quiz game!\n";
    this_thread::sleep_for(4s);

    cout << "Before we start, here are a couple of things to know when your taking this quiz.\n";
    this_thread::sleep_for(4s);

    cout << "Although the main purpose of this quiz is to help you understand how consistent you are\n"
         << "with your current goal in life, this quiz should not be treated as a psychological evaluation towards you.\n";
    this_thread::sleep_for(4s);

    cout << "For the sake of simplicity, this program is exclusively designed to measure how consistent you are with only\n"
         << "5 types of goals, ranging from fostering your independence, obtaining your personal growth, establishing connections,\n"
         << "maintaining your own stability, whether financial or personal, and finally finding out your sense of purpose.\n";
    this_thread::sleep_for(8s);
         
    cout << "Also, the ideal maximum to be consistent with your actions, to reach your goal is around 85%.\n"
         << "However, even being only above 40% consistent with your daily actions is still a good milestone to obtain throughout your life.\n";
    this_thread::sleep_for(4s);

    cout << "With that being said, here are the 10 questions you need to answer. Remember to be as honest as possible with your responses and good luck.\n";
    this_thread::sleep_for(4s);
}
