#include <iostream>
#include <string>
#include <fstream>

using namespace std;


int main() {
    bool quitGame = false;

    ofstream outputFile("project01output.txt");

    if(outputFile.is_open()) {

    cout << "While wandering through an ancient forest," << endl; 
    outputFile << "While wandering through an ancient forest,\n";
    cout << "you stumble upon a magic mirror." << endl;
    outputFile << "you stumble upon a magic mirror.\n";
    cout << "To your astonishment, it greets you with a 'Hello, explorer!'" << endl;
    outputFile << "To your astonishment, it greets you with a 'Hello, explorer!'\n";

     string mirrorDesign =
        "               ooooooooOOOOOOOOOOOooooooo\n"
        "             oooOO                    OOooo\n"
        "          ooOO                          OOoo\n"
        "        ooOO       Hello, Explorer!        OOoo\n"
        "      oOOO                                   OOOo\n"
        "    oOOO           ;;;;;;;;;;;;;;;;;          OOOo\n"
        "   oOOO          ;;;               ;;;         OOOo\n"
        "  oOOOO          ;;    ---  ---     ;;          OOOOo\n"
        " oOOOO           ;;    (@)  (@)     ;;           OOOOo\n"
        " oOOO            ;;                 ;;            OOOo\n"
        " oOO             ;;;      UU       ;;;            OOOo\n"
        " oOO             ;;;               ;;;            OOo\n"
        " oOO              ;;               ;;             OOo\n"
        "  oOO              ;;   '.._..'   ;;             OOo\n"
        "   oOO              ;;           ;;              OOo\n"
        "    oOO               ;;       ;;               OOo\n"
        "      oOO              ''''''''                OOo\n"
        "        oOOOO                                OOOOo\n"
        "           oOOOO                         OOOOo\n"
        "             ooooooOOOOOOooooooOOOOOOoooooo\n";

    cout << mirrorDesign << endl;
    outputFile << mirrorDesign << endl;

    char startSimulation;
    cout << "To start, press 'S' or 'Q' to quit: ";
    cin >> startSimulation;
    outputFile << "User input: " << startSimulation << endl;


    if (startSimulation == 'S' || startSimulation == 's') {
        cout << "Magic Mirror awaits your command..." << endl;
        outputFile << "Magic Mirror awaits your command...\n"; 
 

        while (!quitGame) {
            cout << "\nMagic Mirror: What is your command?" << endl;
            cout << "1. Play a game of riddles" << endl;
            cout << "2. Current Mood Reflection" << endl;
            cout << "3. Transport to a different world!" << endl;
            cout << "4. Secret Surprise!" << endl;
            cout << "5. Exit game" << endl;

            int userChoice;
            cout << "Enter your choice (1-5): ";
            cin >> userChoice;


            if (userChoice == 1) {

                cout << "Welcome to the Magic Mirror's Riddle Game!" << endl;

                int correctAnswers = 0;

                cout << "Riddle 1: I speak without a mouth and hear without ears. I have no body, but I come alive with the wind. What am I?" << endl;
                string answer1;
                cout << "Your answer: ";
                cin >> answer1;

                if (answer1 == "an echo" || answer1 == "echo") {
                    cout << "You're absolutely right! The mirror is impressed." << endl;
                    correctAnswers++;
                } else {
                    cout << "Oops! The correct answer is 'an echo'." << endl;
                }
                cout << "Riddle 2: What has keys but can't open locks?" << endl;
                string answer2;
                cout << "Your answer: ";
                cin >> answer2;

                if (answer2 == "a piano" || answer2 == "piano") {
                    cout << "Correct! The mirror applauds your wit." << endl;
                    correctAnswers++;
                } else {
                cout << "Nice try, but the answer is 'a piano'." << endl;
                }

                cout << "Riddle 3: I'm not alive, but I can grow; I don't have lungs, but I need air; I don't have a mouth, but water kills me. What am I?" << endl;
                string answer3;
                cout << "Your answer: ";
                cin >> answer3;

                if (answer3 == "a fire" || answer3 == "fire") {
                    cout << "You're on fire! The mirror appreciates your skills." << endl;
                    correctAnswers++;
                } else {
                cout << "Oops! The correct answer was 'a fire'." << endl;
                }

                cout << "You answered " << correctAnswers << " out of 3 riddles correctly." << endl;
                outputFile << "You answered " << correctAnswers << " out of 3 riddles correctly." << endl;

                if (correctAnswers >= 2) {
                    cout << "The Magic Mirror is impressed with your cleverness! You're a true riddle master." << endl;
                    outputFile << "The Magic Mirror is impressed with your cleverness! You're a true riddle master." << endl;
                } else {
                    cout << "The Magic Mirror advises, 'Keep practicing!'" << endl;
                    outputFile << "The Magic Mirror advises, 'Keep practicing!'" << endl;
                }
            } else if (userChoice == 2) {
                
                cout << "Magic Mirror wants to know your current mood:" << endl;
                cout << "1. Good (Feeling happy and positive)" << endl;
                cout << "2. Bad (Feeling down or upset)" << endl;
                cout << "3. Okay (Feeling neutral)" << endl;
                int moodChoice;
                cout << "Enter your mood (1-3): ";
                cin >> moodChoice;
                
                switch (moodChoice) {
                    case 1:
                    cout << "The Magic Mirror senses your good mood!" << endl;
                    cout << "           ;;;;;;;;;;;;;;;;;      " << endl;
                    cout << "         ;;;               ;;;    " << endl;
                    cout << "         ;;    ---  ---     ;;    " << endl;
                    cout << "         ;;    (@)  (@)     ;;    " << endl;
                    cout << "         ;;                 ;;    " << endl;
                    cout << "         ;;;      UU       ;;;    " << endl; 
                    cout << "         ;;;               ;;;    " << endl;
                    cout << "          ;;  '.-------;   ;;     " << endl; 
                    cout << "           ;;   '.._..'   ;;      " << endl;
                    cout << "            ;;           ;;       " << endl;
                    cout << "              ;;       ;;         " << endl;
                    cout << "               '''''''''          " << endl;

                    outputFile << "The Magic Mirror senses your good mood!" << endl;
                    outputFile << "           ;;;;;;;;;;;;;;;;;      " << endl;
                    outputFile << "         ;;;               ;;;    " << endl;
                    outputFile << "         ;;    ---  ---     ;;    " << endl;
                    outputFile << "         ;;    (@)  (@)     ;;    " << endl;
                    outputFile << "         ;;                 ;;    " << endl;
                    outputFile << "         ;;;      UU       ;;;    " << endl; 
                    outputFile << "         ;;;               ;;;    " << endl;
                    outputFile << "          ;;  '.-------;   ;;     " << endl; 
                    outputFile << "           ;;   '.._..'   ;;      " << endl;
                    outputFile << "            ;;           ;;       " << endl;
                    outputFile << "              ;;       ;;         " << endl;
                    outputFile << "               '''''''''          " << endl;
                    break;
                    
                    case 2:
                    cout << "The Magic Mirror senses you're having a bad day." << endl;
                    cout << "           ;;;;;;;;;;;;;;;;;      " << endl;
                    cout << "         ;;;               ;;;    " << endl;
                    cout << "         ;;    ---  ---     ;;    " << endl;
                    cout << "         ;;    (@)  (@)     ;;    " << endl;
                    cout << "         ;;                 ;;    " << endl;
                    cout << "         ;;;      UU       ;;;    " << endl; 
                    cout << "         ;;;               ;;;    " << endl;
                    cout << "          ;;               ;;     " << endl; 
                    cout << "           ;;   ,.---.,   ;;      " << endl;
                    cout << "            ;;           ;;       " << endl;
                    cout << "              ;;       ;;         " << endl;
                    cout << "               '''''''''          " << endl;

                    outputFile << "The Magic Mirror senses you're having a bad day." << endl;
                    outputFile << "           ;;;;;;;;;;;;;;;;;      " << endl;
                    outputFile << "         ;;;               ;;;    " << endl;
                    outputFile << "         ;;    ---  ---     ;;    " << endl;
                    outputFile << "         ;;    (@)  (@)     ;;    " << endl;
                    outputFile << "         ;;                 ;;    " << endl;
                    outputFile << "         ;;;      UU       ;;;    " << endl; 
                    outputFile << "         ;;;               ;;;    " << endl;
                    outputFile << "          ;;               ;;     " << endl; 
                    outputFile << "           ;;   ,.---.,   ;;      " << endl;
                    outputFile << "            ;;           ;;       " << endl;
                    outputFile << "              ;;       ;;         " << endl;
                    outputFile << "               '''''''''          " << endl;
                    break;
                    
                    case 3:
                    cout << "The Magic Mirror senses you're feeling neutral." << endl;
                    cout << "           ;;;;;;;;;;;;;;;;;      " << endl;
                    cout << "         ;;;               ;;;    " << endl;
                    cout << "         ;;    ---  ---     ;;    " << endl;
                    cout << "         ;;    (@)  (@)     ;;    " << endl;
                    cout << "         ;;                 ;;    " << endl;
                    cout << "         ;;;      UU       ;;;    " << endl; 
                    cout << "         ;;;               ;;;    " << endl;
                    cout << "          ;;               ;;     " << endl; 
                    cout << "           ;;   -------   ;;      " << endl;
                    cout << "            ;;           ;;       " << endl;
                    cout << "              ;;       ;;         " << endl;
                    cout << "               '''''''''          " << endl;

                    outputFile << "The Magic Mirror senses you're feeling neutral." << endl;
                    outputFile << "           ;;;;;;;;;;;;;;;;;      " << endl;
                    outputFile << "         ;;;               ;;;    " << endl;
                    outputFile << "         ;;    ---  ---     ;;    " << endl;
                    outputFile << "         ;;    (@)  (@)     ;;    " << endl;
                    outputFile << "         ;;                 ;;    " << endl;
                    outputFile << "         ;;;      UU       ;;;    " << endl; 
                    outputFile << "         ;;;               ;;;    " << endl;
                    outputFile << "          ;;               ;;     " << endl; 
                    outputFile << "           ;;   -------   ;;      " << endl;
                    outputFile << "            ;;           ;;       " << endl;
                    outputFile << "              ;;       ;;         " << endl;
                    outputFile << "               '''''''''          " << endl;
                    break;
                    
                    default:
                    cout << "Invalid mood choice! The Magic Mirror is confused." << endl;
                    }
            } else if (userChoice == 3) {

                cout << "Welcome to the Magic Mirror's Fantasy Adventure!" << endl;
                cout << "You stand before the enchanted mirror, which offers you a choice:" << endl;

                string worlds[] = {
                    "The Emerald Seas",
                    "The Celestial Forest",
                    "The Sacred Mountain",
                    "The Eternal Skies" 
                    };

                for (int i = 0; i < 4; i++) {
                    cout << i + 1 << ". " << worlds[i] << endl;
                    }
                
                int worldChoice;

                do {
                    cout << "Enter the number of the world you'd like to explore (1-4): ";
                    cin >> worldChoice;

                    if (worldChoice < 1 || worldChoice > 4) {
                        cout << "Invalid choice. The Magic Mirror says you must choose one of the available worlds (1-4)." << endl;
                    }
                } while (worldChoice < 1 || worldChoice > 4);

                cout << "You step through the mirror and find yourself in " << worlds[worldChoice - 1] << ", where adventure awaits!" << endl;
                outputFile << "You step through the mirror and find yourself in " << worlds[worldChoice - 1] << ", where adventure awaits!" << endl;  
                        
            } else if (userChoice == 4) {
                
                int numberOfGifts;
                    cout << "Magic Mirror says: How many surprise gifts would you like? (1 to 5): ";
                    cin >> numberOfGifts;

                    if (numberOfGifts < 1 || numberOfGifts > 5) {
                        cout << "Invalid input. Please enter a number from 1 to 5." << endl;
                    } else {
                        string giftBox =
    "        .__.      .==========.\n"
    "      .(\\//).  .-[ for you! ]\n"
    "     .(\\()//)./  '=========='\n"
    ".----(\\)\\/(\\)----.\n"
    "|     ///\\\\\\     |\n"
    "|    ///||\\\\\\    |\n"
    "|   //`||||`\\\\   |\n"
    "|      ||||      |\n"
    "|      ||||      |\n"
    "|      ||||      |\n"
    "|      ||||      |\n"
    "|      ||||      |\n"
    "|      ||||      |\n"
    "'------====------'\n";


                        for (int i = 0; i < numberOfGifts; i++) {
                            cout << giftBox << endl;
                            outputFile << giftBox << endl;
                        }
                    }
                    
            } else if (userChoice == 5) { 
                cout << "Exiting Game. Magic Mirror says: Thank you, Goodbye!" << endl;
                outputFile << "Exiting Game. Magic Mirror says: Thank you, Goodbye!\n";
                quitGame = true; 
                break;
                } else {
                    cout << "Invalid choice. Please enter a valid option (1-5)." << endl;
                    }
        }

    outputFile.close();
    cout << "Summary results have been saved to 'project01output.txt' file " << endl;
    } else {
        cout << "Error: unable to open the file for summary." << endl;
    }
    
    return 0;
    
    }
}


    



