#include <iostream>
#include <string>

using namespace std;


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


class FillInQuestion : public Question
{
public:

FillInQuestion();
void ChangeQuestion(string question);

private:
};

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



int main() {
    string question = "The winner of the Red River Shootout will be _UT Austin_, obviously."; // a preset example question
    string response;  // variable to store the response from the user

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

