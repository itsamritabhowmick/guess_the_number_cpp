# Guess the Number Game 🎯

A simple command-line-based **Guess the Number** game written in C++.

## 🧩 How It Works

The game randomly selects a number based on the difficulty level you choose. Your task is to guess the number within a limited number of attempts. Feedback is provided after each guess to help you narrow down the possibilities.

## 📋 Game Rules

1. **Easy Level:**

   - Range: 1 to 10
   - Attempts: 5

2. **Medium Level:**

   - Range: 1 to 100
   - Attempts: 7

3. **Hard Level:**
   - Range: -500 to 500
   - Attempts: 15

If you guess the correct number within the given attempts, you win! Otherwise, the game will reveal the actual number.

## 🛠️ How to Run the Game

1. Make sure you have a C++ compiler installed (e.g., `g++`).
2. Clone this repository:
   ```bash
   git clone https://github.com/itsamritabhowmick/guess_the_number_cpp.git
   ```
3. Navigate to the project directory:
   ```bash
   cd <project-directory>
   ```
4. Compile the code:
   ```bash
   g++ guess_number.cpp -o guess_number
   ```
5. Run the game:
   ```bash
   ./guess_number
   ```

## 💡 Sample Gameplay

```
1 for easy - 5 attempts
2 for medium - 7 attempts
3 for hard - 15 attempts

Enter the level for this game: 2

Enter your number: 50
Too small number. Try again.

Enter your number: 75
Too large number. Try again.

Enter your number: 62
Your number is right now..
Congratulations!!! You guessed it in 3 attempts.
```

## 🧑‍💻 Code Overview

- **Random Number Generation:** Uses `rand()` with `srand(time(0))` to ensure a new random number is generated each time.
- **Difficulty Levels:** Easy, Medium, and Hard modes control both the range of the random number and the number of attempts allowed.

## 🚀 Future Enhancements

- Add a **play again** option after the game ends.
- Implement a **leaderboard** to track top players.
- Add **input validation** to handle non-integer or invalid inputs.

## 🤝 Contributing

Feel free to submit a pull request or open an issue if you have ideas for improving the game.

## 📄 License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for more details.
