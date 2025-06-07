#include<iostream>
#include<string>
using namespace std;
void userChoice(int userInt) {
    string user_name, user_password, verify_password;
    string userName, userPassword;
    
    if(userInt == 1){
        cout << "********************************************";
        cout << "\n * Account Creator *" << endl;
        cout << "Create user name: ";
        cin >> user_name;
        cout << "Create password: ";
        cin >> user_password;
        cout << "Verify password: ";
        cin >> verify_password;
        if (user_password != verify_password){
        cout << "Your password don't match!" << endl;
        exit(0);
        }
        cout << "* Account successfully created! *" << "\n";
        cout << "********************************************";
    }else if (userInt == 2){
        cout << endl;
        cout << "Thank you! Exited" << endl;
        exit(0);
    }else{
        cout << endl;
        cout << "Invalid Input!" << endl;
        exit(0);
    }
    
    while (true) {
        cout << "\n Enter your User Name: ";
        cin >> userName;
        cout << "Enter your Password: ";
        cin >> userPassword;
        if (user_name != userName) {
            cout << "Invalid User Name 🙁";
            if (user_password != userPassword) {
                cout << " , Invalid Password 🙁";
            }
        }else if (user_password != userPassword) {
            cout << "Invalid Password 🙁";
        }
        else{
            cout << "Successfully logged in! 😉" << endl;
            cout << "********************************************";
            break;
        }
    }
};

void userStats(string n, string ready){
    while (true) {
        cout << "! Are you ready to take the Quiz? (Type \"Yes\" or \"No\"): ";
        cin >> ready;
        if (ready == "Yes") {
        cout << "Nice " << n << " You may now proceed!" << "\n \n";
        }else if(ready == "No") {
            cout << "Ok " << n <<" I understand, please come back if you're ready!";
            exit(0);
        }else{
            cout << "Invalid Answer!";
        }
        break;
    }
};
    
void startTheQuiz(string k) {
    int chances = 3;
    while (true) {
        cout << "Type \"OK \" :";
        cin >> k;
        if (k != "OK"){
            cout << "!!! Invalid answer,Instructions must be \"FOLLOW\".You have " << chances << " chance to correct your answer !!!" << endl;
            chances--;
            if (chances == 0){
                cout << "Sorry You lose your chances, You cannot take the Quiz!";
                exit(0);
            }
        }
        break;
    }
};

void nextLevel(string k) {
    int chances = 3;
    while (true){
        cout << "Type \"OK\" :";
        cin >> k;
        if (k != "OK"){
            cout << "Invalid answer,Instructions must be \" FOLLOW \". You have " << chances << " chance to  correct your answer!" << endl;
            chances--;
            if (chances == 0){
                cout << "Your answers are all invalid, Sorry! you lose the game!";
                exit(0);
            }
        }
        else {
            break;
        }
    }
};

void endOfTheQuiz(string d) {
    int chances = 3;
    while (d != "Done"){
        cout << "Type \"Done\" :";
        cin >> d;
        if (d != "Done"){
            cout << "!!! Invalid answer,\"FOLLOW\" the instruction or else your score will not be recorded.You have " << chances << " chance to correct your answer !!!" << endl;
            chances--;
            if (chances == 0){
                cout << "Opps! You lose your chances, Your record has been deleted,Good Bye!";
                exit(0);
            }
        }
    }
};

void pointsEvaluation(int points) {
     if (points > 7){
        cout << "Brilliant!" << "\n\n";
    }else if (points == 7){
        cout << "Average!" << "\n\n";
    }else{
        cout << "Get the Above or Average score!" << "\n\n";
    }
};
int main(){
    int user_select;
    string name, isUserReady;
    string proceed;
    
    cout << "\" Welcome to Free Quiz about Technology, Create you Account to Start! \"" << endl; 
    cout << "1.Create an Account" << endl;
    cout << "2.Exit" << endl;
    cout << "My choice: ";
    cin >> user_select;
    
    userChoice(user_select);
    
    string lightQuestions[10] = {
    "1.___ is the abbreviation for Information Technology? \n Answer: ",
    "2.___ is the number key on the keyboard with a hash symbol? \n Answer: ",
    "3.The exact term for the screen of the computer is called _? \n Answer: ",
    "4.The key on the keyboard used to upper case all the letters is _? \n Answer: ",
    "5.___ is the abbreviation for Computer Science? \n Answer: ",
    "6.___ is the key on the keyboard use to upper case the first letter of the word? \n Answer: ",
    "7.___ is an input device use to type datas to the computer? \n Answer: ",
    "8.___ is the brain of the Computer? \n Answer: ",
    "9.The abbreviation for Data Science is _? \n Answer: ",
    "10.The abbreviation for Random Access Memory is _? \n Answer: "};
    string lightAnswers[10] = {"IT","3","MONITOR","CAPSLOCK","CS","SHIFT","KEYBOARD","CPU","DS","RAM"};
    
    string moderateQuestions[10] = {
    "1.___ device is use to store data inside the computer? \n a.Keyboard  b.Storing  c. Memory  d.Storage \n Answer: ",
    "2.A software used to translate programs into machine language is called _? \n a.Translator  b.Compiler  c.Foreign Language  d.Programming language \n Answer: ",
    "3.The software that manipulates data and turns on the system when your computer is on is called _? \n a.OS  b.Memory  c.Programs  d.System Unit \n Answer: ",
    "4.It is a software that reads one statement from source code,translates it to machine code, and executes right away is called _? \n a.OS  b.Foreign language  c.Programs  d.Interpreter \n Answer: ",
    "5.___ is the computer program that is created by writing instructions in a programming language? \n a.Phyton  b.Software  c.Source Program  d.all of them \n Answer: ",
    "6.The only language that the computer understands is _? \n a.Code  b.Binary Language  c.Phyton  d.Programs \n Answer: ",
    "7.___ is a type of electronic device that can store data and process operations? \n a.Excell  b.Computer  c.Input  d.Output \n Answer: ",
    "8.The following are  OUTPUT devices Except _? \n a.Speaker  b.Printer  c.Camera  d.Monitor \n Answer: ",
    "9.The case of all the controlers of the Computer is called _?. \n a.System Unit  b.Speaker  c.CPU  d.All of them \n Answer: ",
    "10.___ is a kind of written language that directs computer how to perform a specific task? \n a.Instructions  b.Software  c.Memory Command  d.Programming Language \n Answer: "
        
    };
    string moderateAnswers[10] = {"D","B","A","D","C","B","B","C","A","D"};
    
    string hardQuestions[10] = {
    "1.___ Turing developed the TURING MACHINE, a theoretical model of computation.? \n  a.James  b.Williams  c.Alan  d.John \n Answer: ",
    "2.___ Babbage invented the First computer.? \n a.Nicholas  b.Charles  c.Thom  d.Antonio \n Answer: ",
    "3.She developed the first compiler.Her name is _ Hopper.? \n a.Anna  b.Martha  c.Laida  d.Grace \n Answer: ",
    "4.The founder of Apple Computer is _ Jobs.? \n a.Mark  b.Zyrill  c.Michael  d.Steve \n Answer: ",
    "5.___ Lovelace is consider as the First Programmer.? \n a.Ada  b.Anna  c.Monica  d.None of the choices \n Answer: ",
    "6.The following are programming language EXCEPT _?. \n a.Phyton  b.CSS  c.HTML d.C  \n Answer: ",
    "7.___ is a style sheet language that is used to describe the presentation of a web page? \n a.HTML  b.Notepad  c.programming language  d.CSS \n Answer: ",
    "8.The Following are the Web Language EXCEPT _? \n a.HTML  b.CSS  c.Window  d.OS \n Answer: ",
    "9.The Following are a High-Level languages EXCEPT _? \n a.Phyton  b.Machine Code  c.C++  d.Assembly Language \n Answer:",
    "10.The Following are Desktop operating systems EXCEPT _? \n a.Windows  b.Window  c.MacOS  d.Cobol \n Answer: "
    };
    string hardAnswers[10] = {"C","B","D","D","A","BC","AD","CD","BD","BD"};
    
    cout << "\n Type your name: ";
    cin >> name;
    cout  << "Hello " << name;
    userStats(name,isUserReady);
    
    cout << "!!! INSTRUCTIONS !!!" << endl;
    string instructions[5] = {
        "1. This Quiz is compose of three levels (Light,Moderate and Heavy).",
        "2. Each level is compose of 10 Questions(2 Points each).",
        "3. Use CAPSLOCK or CAPITAL LETTERS for all your answers.",
        "4. If your answer is compose of multi-words, Avoid putting a space in between." ,
        "5. Answers will automatically Invalid/Incorrect if not following instructions."
    };
    
    for (int i; i<5; ++i) {
        cout << instructions[i] << endl;
    }
    cout << "Break a leg!" << "\n\n";
    
    string start;   
    startTheQuiz(start);
    
    int lightLevelPoints = 0;
    
    cout << endl;
    cout << ">>> LIGHT QUESTIONS <<<" << endl;
    cout << "Type your Best answer!" << endl;
    while (true){
        for (int i=0;i<10;i++){
            cout << lightQuestions[i];
            string userAnswers;
            cin >> userAnswers;
            if (userAnswers == lightAnswers[i]){
            cout << "Correct Answer!" << endl;
            cout << "********************************************" << endl;
            lightLevelPoints += 2;
            cout << "Points : " << lightLevelPoints << endl;  
            }else{
                cout << "Wrong Answer!" << endl;  
                cout << "********************************************" << endl;
            }
        }
        break;
    }
    cout <<  endl;
    cout << "Easy right? , Cool!" << endl;
    cout << "Your total score for this level is : "  << lightLevelPoints << " Points" << endl;
    pointsEvaluation(lightLevelPoints);
    
    cout << "Now, lets proceed to the next level of this Quiz!" << endl;
    nextLevel(proceed);    
    
    int moderateLevelPoints = 0;
    
    cout << endl;
    cout << ">>> MODERATE QUESTIONS  <<<" << endl;
    cout << "Type only the LETTER of your best answer!"  << endl;
    while (true){
        for (int i=0;i<10;i++){
            cout << moderateQuestions[i];
            string user_answers;
            cin >> user_answers;
            if (user_answers == moderateAnswers[i]){
                cout << "Correct Answer!" << endl;
                cout << "********************************************" << endl;
                moderateLevelPoints += 2;
                cout << "Points : " << moderateLevelPoints << endl;  
            }else{
                cout << "Wrong Answer!" << endl;  
            }
        }
        break;
    }
    cout <<  endl;
    cout << "Sometimes , Quiz is Confusing right? , Cool!" << endl;
    cout << "Your total score for this level is : "  << moderateLevelPoints << " Points" << endl;
    pointsEvaluation(moderateLevelPoints);
 
    cout << "Now, lets proceed to the next level of this Quiz!" << endl;
    nextLevel(proceed);
    
    int hardLevelPoints = 0;
    
    cout << endl;
    cout << ">>> HEAVY QUESTIONS <<<" << endl;
    cout << "Type only the LETTER of your best answer!"  << endl;
    while (true){
        for (int i=0;i<10;i++){
            cout << hardQuestions[i];
            string user_answers;
            cin >> user_answers;
            if (user_answers == hardAnswers[i]){
                cout << "Correct Answer!" << endl;
                cout << "********************************************" << endl;
                hardLevelPoints += 2;
                cout << "Points : " << hardLevelPoints << endl;  
            }else{
                cout << "Wrong Answer!" << endl;
                cout << "********************************************" << endl;
            }
        }
        break;
    }
    
    cout <<  endl;
    cout << "So Challenging right? , Cool!" << endl;
    cout << "Your total score for this level is : "  << hardLevelPoints << " Points" << endl;
    pointsEvaluation(hardLevelPoints);
   
    float totalPoints = lightLevelPoints +  moderateLevelPoints + hardLevelPoints;
    cout << "\n Now, Here's your Record and Status for this Quiz!" << endl;
    cout << "Light Level: " << lightLevelPoints << endl;
    cout << "Moderate Level: " << moderateLevelPoints << endl;
    cout << "Heavy Level: " << hardLevelPoints << endl;
    cout << "__________" << endl;
    cout << "Total Score: " << totalPoints << "/60" "\n\n";
    
    int average = totalPoints / 3;
    float percentage = (totalPoints / 60 ) * 100;
    cout << "Your Average is: " << average << "/20" << endl;
    cout << "Passing is \"70%\" and you got " << percentage << "%" << endl;

    if (average > 21){
        cout << "Congrats " << name << " You're a Brilliant!" << "\n\n";
    }else if (average == 21){
        cout << "Congrats " << name << " You got the Passing Score!" << "\n\n";
    }else{
        cout << "It's ok " << name <<" ,Get the Passing score next time!" << "\n\n";
    }
    
    cout << "Thanks for taking the Free Quiz " << name << " I hope you enjoy!" << endl;
    return 0;
}