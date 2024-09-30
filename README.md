# Investment Challenge 🎮💰

Welcome to the **Investment Challenge**, a terminal-based game that helps you simulate investments and understand the power of compound interest. In this game, you'll be tasked with growing your investment over time and achieving your financial goals.

![C Script](https://img.shields.io/badge/C%20Script-007ACC?style=flat&logo=c&logoColor=white)
![Programming](https://img.shields.io/badge/Programming-007ACC?style=flat&logo=python&logoColor=white)
![Computer](https://img.shields.io/badge/Computer-007ACC?style=flat&logo=computer&logoColor=white)
![Matrix](https://img.shields.io/badge/Matrix-007ACC?style=flat&logo=matrix&logoColor=white)
![Library](https://img.shields.io/badge/Library-007ACC?style=flat&logo=book&logoColor=white)

---

## Project Info

- **Author Name**: MD Riad Khan RK
- **Author Brand**: RK Studio
- **GitHub**: [rkstudio585](https://github.com/rkstudio585)
- **Website**: [rkstudio.com](https://rkstudio.com)
- **Nickname**: RK
- **Email**: mdriyadkhan585@gmail.com

## Table of Contents

1. [Features](#features)
2. [How It Works](#how-it-works)
3. [Math Behind the Game](#math-behind-the-game)
4. [How to Use](#how-to-use)
5. [How to Run](#how-to-run)
6. [How to Download](#how-to-download)
7. [License](#license)
8. [Questions](#questions)
9. [Acknowledgments](#acknowledgments)

## Features

- 🏦 Simulates investment growth over time.
- 📈 Calculates future value based on user input.
- 🎯 Allows users to set investment goals.
- 💡 Interactive terminal-based gameplay.

## How It Works

In this game, players start with an initial investment and specify the nominal interest rate and investment duration. The game calculates how much the investment will grow and whether it meets the player's goals.

## Math Behind the Game

The game uses the following financial formulas:

1. **Future Value (FV)**:
   \[
   FV = P \times (1 + r/n)^{nt}
   \]
   Where:
   - \( P \) = Principal amount (initial investment)
   - \( r \) = Nominal annual interest rate (as a decimal)
   - \( n \) = Number of compounding periods per year
   - \( t \) = Number of years

2. **Effective Annual Rate (EAR)** (if needed for further extensions):
   \[
   EAR = (1 + r/n)^{n} - 1
   \]
   This formula helps in understanding the real return on an investment, considering the effect of compounding.

## How to Use

1. Clone this repository:
   ```bash
   git clone https://github.com/rkstudio585/investment-challenge.git
   cd investment-challenge
   ```

2. Compile the program using:
   ```bash
   gcc investment_game.c interest_calculations.c -o investment_game -lm
   ```

3. Run the game:
   ```bash
   ./investment_game
   ```

## How to Run

1. Make sure you have GCC installed on your machine. If not, install it using:
   - **Ubuntu**: `sudo apt install build-essential`
   - **Mac**: `xcode-select --install`
   - **Windows**: Install MinGW or use WSL.

2. Follow the steps in the **How to Use** section to compile and run the game.

## How to Download

To download the project from GitHub, you can use the following command in your terminal:
```bash
git clone https://github.com/rkstudio585/investment-challenge.git
```
This command clones the repository to your local machine, allowing you to run and modify the game.

## Questions

If you have any questions about the project or need assistance, feel free to reach out:

- **How to work?**
- **How I Use?**
- **Etc..**

## Acknowledgments

- Thanks to the open-source community for their valuable contributions.
- Special thanks to all who provide feedback to improve this project.

---

### 🌈 Colorful Glowing Animation

```plaintext
       .        .    .   .        .      .        .    .     .
 .       .    .    .    .     .   .      .  .      .  .     .    .
        .       .   .    .    .  .  .   .     .  .     .      .  .
 .  .     . .       .   .      .      .  . .       .      .   .  .
        .    .   .    .  .      .  .     .    .   .  .  .    .   .
   .     .       .   .      .      .       .      .  .      . . .
```

---

Enjoy the game and happy investing! 🚀💵

---
