#include <iostream>
#include <chrono>
#include <thread>
using namespace std::chrono;
using namespace std;

/*
     I know for a fact that I wish to use classes in this program, but I also know I have to pick my answers and questions carefully, just to ensure that this programs purpose
     isn't misunderstood. Though self reflection will be evaluated from consistent responses to 10 questions, it doesn't evaluate a person psychologically, this much I know.
     From what I researched, it takes someone to be 90% consistent with their goal in order to be consistent. 
     So I might consider each response grading at least 9% of their overall consistency.
     Then comes the problem of how I can make it so that I understand how the person is being consistent, with just how they answer the questions given. 
     Because people have many different goals, from each other. I may have to limit myself to just 5 motivations for now.

     Independence, the goal to make your own choices without the fear of indecision. Along with the freedom of your actions.
     Mastery, the ability to grow yourself on a personal level, to the point where you become more competent as a result.
     Connection, the value in others, as well as the need for validation in the things you do in life.
     Power, also related to financial security, or the need to maintain your own safety, in a world full of uncertainty.
     Purpose, the ability to make it so no matter who you are, you act with intent and meaning.
*/

class Quiz
{
    //I can definetly use 2d arrays. I'm glad I got that cleared up.
    private:
        int consistentencyCheck[10][4] = {
            {0, 0, 0, 0},
            {0, 0, 0, 0},
            {0, 0, 0, 0},
            {0, 0, 0, 0},
            {0, 0, 0, 0},
            {0, 0, 0, 0},
            {0, 0, 0, 0},
            {0, 0, 0, 0},
            {0, 0, 0, 0},
            {0, 0, 0, 0}};

        char classAnswer;
    public:
        void answerConfirmation(int answerVerification[], char answer)
        {
            
        }
        char questionNumber(int questionsAvailable[])
        {
            cin >> classAnswer;
            return classAnswer;
        }
};

int main()
{
    Quiz currentQuiz;
    char answer;
    int questionsAvailable[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, i = 0;

    while(i < 11)
    {
        answer = currentQuiz.questionNumber(questionsAvailable);
        if(answer >= 'A' && answer <= 'D')
        {
            currentQuiz.answerConfirmation(questionsAvailable, answer);
        }
    }
    //How does this program determine how consistent someone is, without even knowing who they are?
    /*
        Question 1: Something lighthearted
        Question 2: Again something lighthearted
        Question 3: A geographical question, research is required
        Question 4: 
        Question 5:
        Question 6:
        Question 7:
        Question 8:
        Question 9:
        Question 10: How would you best describe your main goal in life, in just one of these 4 words?
    */


    return 0;
}
