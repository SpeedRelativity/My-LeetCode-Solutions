/* You are given two positive integers x and y, denoting the number of coins with values 75 and 10 respectively.

Alice and Bob are playing a game. Each turn, starting with Alice, the player must pick up coins with a total value 115. If the player is unable to do so, they lose the game.

Return the name of the player who wins the game if both players play optimally. */

class Solution {
public:
    string losingPlayer(int x, int y) {
    
        bool AliceTurn = false;
        while(x >= 1 && y >=4){
            AliceTurn = !(AliceTurn);
            x -= 1;
            y -= 4;
            
        }
        if(AliceTurn)
        {return "Alice";}
    return "Bob";
    }
};
