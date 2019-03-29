/*
Rock Paper Scissors Lizard Spock
(The Big Bang Theory)
*/
#include <iostream>
#include <stdlib.h>


int main(){
srand (time(NULL));
int computer = rand() %3 +1;
int user = 0;
  
std::cout << "====================\n";
std::cout << "rock paper scissors!\n";
std::cout << "====================\n";

std::cout << "1) ✊\n";
std::cout << "2) ✋\n";
std::cout << "3) ✌️\n";

std::cout << "shoot! ";
std::cin >> user;
  
std::cout << "Compare your results to the computer's results\n";
  
std::cout << computer << "\n";
  
if( user == computer){ 
std::cout << "WINNER\n";
 
}

else 
std::cout << "LOOSER\n";
  
  
}
