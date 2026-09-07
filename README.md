Individual Project Report 
Last name: Dhillon
Fist name: Simran
ID: 300211810


1.	Summary: Write a summary of your program design.
Program Summary of Magic Mirror Interactive Game:
My program is an interactive magic mirror game that allows users to engage in an imaginative experience where they interact with a magic mirror that can perform various functions through elements of textual interaction and graphical representation.
The key elements of my program's design and functionality include:
-	Introduction and Setup: Upon initiation, program welcomes user to the world of the magic mirror. It provides introductory textual content, including an ASCII art representation of the magic mirror, and then proceeds to prompt user to either start the game or quit.
-	Game Menu: When user chooses to start the game, a menu of interactive options for the user to choose from is presented to the user. These options include:
o	Game of Riddles: User can engage in a riddle-solving challenge presented by the magic mirror.
o	Current Mood Reflection: User can express their mood, and the mirror provides graphical representations reflecting the chosen mood by modifying the original magic mirror design to fit with that of the chosen user’s current mood. 
o	Transporting to a Different World: User can select from a list of four fantasy worlds for exploration.
o	Secret Surprise: User can command magic mirror to give them a chosen number of surprise gifts which the program proceeds to output through ASCII art of gift boxes. 
o	Exit the Game: User can choose to exit the game at any time.
-	User Interactions: The program handles user interactions and provides feedback as well. For instance, during the riddle game, the program evaluates user responses and provides feedback based on the correctness of answers. Additionally, the program outputs custom graphical and textual responses to mood reflections and world selection.
-	Data Output to Txt File: The program notes all the user interactions and responses in a designated file, 'project01output.txt.' The program records the user's interactions with the magic mirror and a summary of it is transferred to the ‘txt file’.
-	Conclusion and Exit: Once the user decides to quit the game, the program conveys a ‘goodbye’ message from the magic mirror and informs the user that summary results have been saved to 'txt' file. 


2.	Output: Attach screenshot images of your entire C++ program running output (not the source code) with a short description.
 
Screenshot 1. The first screenshot shows the initial welcome message and the backstory of the magic mirror game. It then asks user to select whether to start game or quit. If the game is started, a menu is shown from which the user can choose what command the magic mirror should follow.
<img width="397" height="327" alt="image" src="https://github.com/user-attachments/assets/97bcfd5f-c43e-40fc-8adf-061ae51f0696" />

 
Screenshot 2. The first command from the main menu is a game of riddles where program asks user 3 riddles and tests how many the user can guess correctly. It then gives user feedback on which ones they got wrong or right. 
 <img width="493" height="216" alt="image" src="https://github.com/user-attachments/assets/3b55394a-5000-41d6-97a3-0c0774fbc161" />

Screenshot 3. The second command from the main menu of the game is asking the user how they are feeling and then the program outputs the face from the original magic mirror face, but a modified version of that face is shown to user so that they can see the magic mirror reflecting their current mood choice by reshaping itself according to user’s mood.
<img width="374" height="284" alt="image" src="https://github.com/user-attachments/assets/27b848e0-aa04-40e0-9e9a-d4137c72f1a2" />

 
Screenshot 4. Then we have the option of transportation to a different world game from the main menu which offers user four worlds they can transport to. Then, the main menu is shown after the user picks a world (after each command, the program goes back to the main menu until user chooses to quit).
 <img width="473" height="221" alt="image" src="https://github.com/user-attachments/assets/2fa3984f-dae9-4aad-9b20-2be3e804a424" />

Screenshot 5. For the fourth option in the game there is a surprise gift that the user can receive. Multiple copies of the gift are outputted once the user chooses how many they would like to receive. 
<img width="343" height="288" alt="image" src="https://github.com/user-attachments/assets/47956b7e-ea40-4d0b-b79e-2bb33749fd4e" />

 
 
Screenshot 6. The last part of the menu is the exit game option which once chosen by user exits the game and tells user that summary of the game has been stored into a txt file. 
<img width="344" height="315" alt="image" src="https://github.com/user-attachments/assets/4d5c1cf4-5759-4953-b76e-d7b434187157" />
<img width="351" height="208" alt="image" src="https://github.com/user-attachments/assets/c81e7e9e-4e39-47d3-b2a6-0606c2724250" />



3.	Code: Explain a few highlights of your algorithm design in detail including conditional statements (e.g., if, else), loop (while or/and for), randomization, and function definition. You must add images of screen capture or actual code block along with your design approach.
 
Code Screen capture 1. The start of the code is shown here, and the important part is the ‘bool quitGame = false;’ as this initialises the Boolean variable that will manage the game loop, setting it to false so that program does not run on unnecessarily. We also have the ‘ofstream outputFile’ code which opens a txt file for noting the user’s interactions with the game and the ‘if(outputFile.isopen()’ checks if the file was successfully opened and then it enters the conditional block where we see the game logic as well as the starting message for user. 
 <img width="427" height="338" alt="image" src="https://github.com/user-attachments/assets/1f2b4cc4-5699-4a09-93f3-ae136e2ffef6" />

Code Screen capture 2. This part of code shows the graphical representation of the magic mirror which greets user, and it is stored as a string and then printed to the txt file as well. The ‘char startSimulation’ prompts user to start or quit the game and the input is stored in the’ startSimulation’ as well as the user’s choice is logged into the summary txt file.
 <img width="388" height="324" alt="image" src="https://github.com/user-attachments/assets/e2c19829-9357-46fb-8e56-04298cbacdef" />

Code Screen capture 3. If user choses to start the game the program proceeds and the magic mirror menu is shown to user. The program then enters a ‘while’ loop that will continue until ‘quitGame’ becomes ‘true’. This loop allows user to interact with the mirror repeatedly. The program uses conditional statements to handle the user’s choices from the menu, for example if user chooses option 1 then the riddle game block is executed. 
 <img width="404" height="298" alt="image" src="https://github.com/user-attachments/assets/52c70e7a-20c5-4a0f-9d43-dae135240964" />

Code Screen capture 4.This part of the code shows some of the riddle game logic and the ‘correctAnswers’ is basically a counter which is initialized to keep a track of the number of correct answers that user gives to the riddles. 
 <img width="475" height="322" alt="image" src="https://github.com/user-attachments/assets/f65d91de-3105-43b6-a1d5-025ee803f3a4" />

Code Screen capture 5. If user chooses option 2, the mood reflection game starts. A ‘switch’ statement is used to process the user’s mood choice and the program provides graphical representations of the 3 mood choices which are basically modifications of the original magic mirror image mirroring the user’s mood. 
 <img width="452" height="306" alt="image" src="https://github.com/user-attachments/assets/c0da8bc0-d3fb-45ff-9022-7ac8ce8c49d1" />

Code Screen capture 6.This part shows if user picks option 3 the ‘transport to a different world’ part of game will begin. The array ‘string worlds[]’ is used to hold the names of the available worlds and the program uses this array to display the options to the user. A ‘for’ loop is used to go through the ‘worlds’ array and the loop runs for all four worlds. A ‘do-while’ loop is used to validate the user’s input and it ensures that the suer enters a valid option from the available worlds. The ‘worldChoice – 1’ is used to access the correct world name from the array as the array indices start from 0. 
 <img width="473" height="318" alt="image" src="https://github.com/user-attachments/assets/60f10844-b8ad-4ece-a023-25eaa112e885" />

Code Screen capture 7. If user selects option 4, the surprise gift part of game starts. The user can pick how many gifts they want printed out by the program. A ‘for’ loop is used to display the number of gifts the user has requested. 
 <img width="432" height="282" alt="image" src="https://github.com/user-attachments/assets/535eef2a-e09e-419e-8a78-370f39ad26ed" />

Code Screen capture 8. Now the ‘else if’ is used to show the last part of the ‘while’ loop which is the game exiting part of the code. Here we can see that the game loop continues until the ‘quitgame’ becomes ‘true’ once the user decides to exit game, the loop ends and the program proceeds to the close. The program closes the ‘outputFile’ and provides a message that summary results have been saved in the txt file. Then the ‘return 0’ shows that the ‘main’ function has ended, and the program returns 0. 
<img width="401" height="205" alt="image" src="https://github.com/user-attachments/assets/21c751e2-8f64-4fbe-8d8e-38a468521a18" />


4.	User testing: Screen capture of minimum three runs from three users and user feedbacks.
a.	Trial Run One Screenshots:
i.	 <img width="279" height="231" alt="image" src="https://github.com/user-attachments/assets/6189ac8d-5e02-4240-b129-3016b21d7970" />

ii.	 <img width="224" height="226" alt="image" src="https://github.com/user-attachments/assets/c61986ff-1915-48aa-95a1-8e1072f6f61a" />

iii.	<img width="276" height="249" alt="image" src="https://github.com/user-attachments/assets/309c8efb-848c-4be8-9a64-9094f1c9ead9" />
 
iv.	 <img width="318" height="220" alt="image" src="https://github.com/user-attachments/assets/312b5181-9425-425b-bf54-dd7871ae762c" />

v.	 <img width="345" height="81" alt="image" src="https://github.com/user-attachments/assets/e9fce5c0-804f-46c1-8fc6-d9455d72604f" />

b.	Trial Run One User Feedback:
i.	The magic mirror game was quite impressive as it was not hard to navigate since the instructions were pretty clearcut. The part where the program prints out pictures of the graphical representations of gifts and the faces was very appealing to see as only text-based interactions would have been boring. 
c.	Trial Run Two Screenshots:
i.	 <img width="252" height="213" alt="image" src="https://github.com/user-attachments/assets/63f2d307-a634-4b66-b935-2c531939ea7f" />

ii.	 <img width="401" height="206" alt="image" src="https://github.com/user-attachments/assets/88a1a4af-9783-469d-93c5-3369f6ef6ca3" />

iii.	<img width="328" height="287" alt="image" src="https://github.com/user-attachments/assets/4d546f95-18e5-4bdb-b12c-16827ce75aff" />
 
iv.	 <img width="327" height="282" alt="image" src="https://github.com/user-attachments/assets/b3b3dbe5-80be-4ddd-9a3d-4d565d0211c8" />

d.	Trial Run Two User Feedback:
i.	The game was interesting since it was interactive and had visual representations along with a story line as well. Something that could be improved upon is to have more image-based interactions as its more captivating when we see images instead of text-based output but overall, it was appealing.


5.	Add a reference relate to any information about your project (e.g., reference product or image). Please follow APA citation guide.

Mora, Y. (n.d.). Magic Mirror. Pinterest. shrek.fandom.com. Retrieved October 14, 2023, from https://www.pinterest.ca/pin/magic-mirror--691091505332477953/

Johnson, C. (n.d.). Gift Box ASCII Art. Christopher Johnson’s ASCII Art Collection. asciiart.website. Retrieved October 20, 2023, from https://asciiart.website/index.php?art=holiday/christmas/other 

cplusplus.com. (n.d.). Files in C++ - C++ Tutorials. https://cplusplus.com/doc/tutorial/files/

cppreference.com. (n.d.). Increment/decrement operators - C++ Reference. https://en.cppreference.com/w/cpp/language/operator_incdec

cplusplus.com. (n.d.). Character sequences. https://cplusplus.com/doc/tutorial/ntcs/

cplusplus.com. (n.d.). Arrays - C++ Tutorials. https://cplusplus.com/doc/tutorial/arrays/ 


<img width="473" height="649" alt="image" src="https://github.com/user-attachments/assets/01c2d177-7c84-4a2f-b358-5f315070a93c" />
