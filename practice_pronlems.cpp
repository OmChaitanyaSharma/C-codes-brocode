#include <iostream>

int main(){
  std::string questions[] = {"1. Are you alive?: ",
                             "2. Why are you alive?: ",
                             "3. Do you breath?: ",
                             "4. Do you sleep?: "};
  
  std:: string options[][4] = {{"A. No", "B. Yes", "C. Maybe", "D. Probably not"},
                              {"A. idk", "B. meri mrzi", "C. just bcoz-", "D. huh"},
                              {"A. No", "B. Yes", "C. Maybe", "D. Probably not"},
                              {"A. No", "B. Yes", "C. Maybe", "D. Probably not"}};
  
  char answerKey[] = {'B', 'B', 'B', 'D'};

  int size = sizeof(questions)/sizeof(questions[0]);
  char guess;
  int score = 0;

  for(int i = 0; i < size; i++){
    std::cout << questions[i] << '\n';
    for (int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++){
      std::cout << options[i][j] << '\n';
    }

    std::cin >> guess;
    guess = toupper(guess);
    
    if(guess == answerKey[i]){
      std::cout << "CORRECT\n";
      score++;
    }
    else{
      std::cout << "WRONG\n";
      std::cout << "Answer: " << answerKey[i] << '\n';
    }
  }

  std::cout << "Results\n";
  std::cout << "Correct guesses: " << score << '\n';
  std::cout << "# of questions: " << size <<  '\n';
  std::cout << "Score: " << (score/(double)size)*100 << "%";



  return 0;
}