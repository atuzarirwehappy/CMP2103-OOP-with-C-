Suppose there are eight students and ten questions, and the answers are stored in a twodimensional
list. Each row records a student’s answers to the questions, as shown in the
following illustration

## Students’ Answers to the Questions

| Student   | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 |
|-----------|---|---|---|---|---|---|---|---|---|---|
| Student 0 | A | B | A | C | C | D | E | E | A | D |
| Student 1 | D | B | A | B | C | A | E | E | A | D |
| Student 2 | E | D | D | A | C | B | E | E | A | D |
| Student 3 | C | B | A | E | D | C | E | E | A | D |
| Student 4 | A | B | D | C | C | D | E | E | A | D |
| Student 5 | B | B | E | C | C | D | E | E | A | D |
| Student 6 | B | B | A | C | C | D | E | E | A | D |
| Student 7 | E | B | E | C | C | D | E | E | A | D |


The key is stored in a one-dimensional list:
### Key to the Questions

| Key   | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 |
|-------|---|---|---|---|---|---|---|---|---|---|
| Answer| D | B | D | C | C | D | A | E | A | D |

Write a program that grades the test and displays the result. To do this, the program compares each
student’s answers with the key, counts the number of correct answers, and displays it.

import std;
using namespace std;
//Get the correct answers of each question and store in a vector, key is like get_Answers

vector<char> key() {
vector<char> answers;
char answer;
int question = 1;
cout << "Enter answers (enter X to finish) " << endl;
while (true) {// repeats till sthg in the loop stops it
cout << "Question " << question <<" : " ;
cin >> answer;
if(answer == 'X' || answer == 'x') break;//stop
answers.push_back(answer);
question++;
}
return answers;
}
// get one students answers and calculate the score
int getScore(const vector<char>& key){
int score = 0;
char studentAnswer;
int question = 0;
while(question < key.size()){
cout << "Question "<< question + 1 << ":";
cin >> studentAnswer;
if(studentAnswer == key[question]) score++;//key[0...] uses array indexing
question++;
}
return score;
}
 

// print function taking scores and total(size) as parameters
void printReport(const vector<int> scores, int size){
cout << "RESULTS" << endl;
for(int i = 0; i < scores.size(); i++){
    cout << "Student " << i <<" : "<< scores[i] << "/" << size << endl; 
}

}
int main(){
    //get the key, store it, give it to getScore
vector<char> answers = key();//returns vector<char> and main() stores it in answers(where answer key is stored)

int students;
cout << "Enter the number of students : ";
cin >> students;
vector<int> scores;//create an empty vector
for(int i = 0; i < students; i++){
    cout << "Student" << i << ": ";
    scores.push_back(getScore(answers));//answer key is given to getScore
}
printReport(scores, answers.size());

return 0;
}
