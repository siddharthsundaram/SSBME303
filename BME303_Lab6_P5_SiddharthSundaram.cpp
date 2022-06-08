/*
 * Make sure to add your own code and comment thoroughly.
 */

#include <iostream>
#include <string>

using namespace std;

/*
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Here begins the code for the base class Question.
 * Do not change the following part!
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 */

class Question{
public:
    /**
     * Constructs a question with empty text and answer.
     */
    Question();

    /**
     @param question_text the text of this question
     */
    void set_text(string question_text);

    /**
     * @param correct_response the answer for this question
     */
    void set_answer(string correct_response);

    /**
     * @param response the response to check
     * @return true if the response was correct, false otherwise
     */
    bool check_answer(string response) const;

    /**
     * Displays the question.
     */
    void display() const;

private:
    string text;
    string answer;
};

Question::Question(){
    Question::set_text("Question is empty!");
    Question::set_answer("");
}

void Question::set_text(string question_text) {
    text = question_text;
}

void Question::set_answer(string correct_response) {
    answer = correct_response;
}

bool Question::check_answer(string response) const {
    bool result = (response == answer);
    return result;
}

void Question::display() const
{
    cout << text << endl;
}

/*
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Here ends the code for the base class Question.
 * Do not change the above part!
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 */


/*
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Here begins the code for the inherited class FillInQuestion.
 * Your work begins here till the end of the file.
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 */

class FillInQuestion : public Question
{
public:
    //declare constructor here
FillInQuestion();
void ChangeQuestion(string question);

    //your member functions declared (not defined!) here, if any.

private:
    //your members declared here, if any; remember, members are private by default
};

//build constructor here to initialize the fill-in question.
FillInQuestion::FillInQuestion() = default;

// Function that takes question text and separates question and answer and stores them into variables
void FillInQuestion::ChangeQuestion(string question) {
    int length = question.length();
    int first = question.find("_") + 1;
    string temp = question.substr(first, length - first - 1);
    int second = temp.find("_");
    string answer = question.substr(first, second);
    string q = question.substr(0, first) + question.substr(first + second);
    this ->set_text(q);
    this ->set_answer(answer);
}
//your member functions here, if any


int main() {
    string question = "The winner of the Red River Shootout will be _UT Austin_, obviously."; // a preset example question
    string response;  // variable to store the response from the user
    // your code here to ask the user this question, prompt the user to enter their response, and tell them if they got the answer right

    // Create FillInQuestion object q and call ChangeQuestion function to separate question and answer
    FillInQuestion q = FillInQuestion();
    q.ChangeQuestion(question);
    q.display();

    // Initialize answer variable and store user input into answer
    string ans;
    getline(cin, ans);

    // Call check_answer function to return if user input is correct or not
    if (q.check_answer(ans)) {
        cout << "Correct!" << endl;
    }
    else {
        cout << "Not Really." << endl;
    }

    return 0;
}

