#include <iostream>
#include <chrono>
#include <thread>
using namespace std::chrono;
using namespace std;

/*
     Ok, so I know for a fact that I wish to uses classes in this program, but I also know I have to pick my answers and questions carefully, just to ensure that I'm definetly getting myself
     this programs main purpose. Self reflection through evaluated consistent responses to 10 questions. It doesn't evaluate a person psychologically, this much I know.
     From what I researched, it takes someone to be 90% consistent with their goal in order to be consistent. So I might consider each response grading at least 9% of their overall consistency.
*/
// completion rate = (actions completed/ total opportunities) * 100

class Question
{
    //It's possible that I can't use a 2d array in a class, but I'll have to confirm later.
    private:
        int questionsAnswer[10][4] = {0, 0, 0, 0},
                                     {0, 0, 0, 0},
                                     {0, 0, 0, 0},
                                     {0, 0, 0, 0},
                                     {0, 0, 0, 0},
                                     {0, 0, 0, 0},
                                     {0, 0, 0, 0},
                                     {0, 0, 0, 0},
                                     {0, 0, 0, 0},
                                     {0, 0, 0, 0};

    public:
        void answerConfirmation()
        {
            cout << questionsAnswer[10][4];
        }
};

int main()
{
    Question currentQuiz;


    currentQuiz.answerConfirmation();
    //How does this program determine how consistent someone is, without even knowing who they are?
    /*
        Question 1: 
        Question 2:
        Question 3:
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
