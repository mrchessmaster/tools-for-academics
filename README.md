# Academic tools

Some useful tools for undergraduate mathematics, statistics, biology, economics and more.

*Files may vary in language (R, C++, Java, etc.)*

## Tool 1: RNA to Protein

### Details:
This code takes in an **RNA string**, and produces the **first peptide chain** generated by the ribosome. 

### Usage instructions (Non-Git):
1. `Download ZIP` on top-right corner and unzip.
2. Save the `RNAtoProtein` folder to your `code` folder you create on your `Desktop`.
3. Go to the **Command Line (Windows) / Terminal (Mac)**, and into your `RNAtoProtein` folder using `cd`

In this example, I saved the `RNAtoProtein` folder in my `Desktop`'s `code` folder.
Therefore I would do (on a Mac it would look like):
```
Last login: Sun Feb 28 20:41:02 on ttys000
Davids-MacBook-Pro-3:~ chessmaster$ cd Desktop
Davids-MacBook-Pro-3:Desktop chessmaster$ cd code
Davids-MacBook-Pro-3:code chessmaster$ cd RNAtoProtein
```
What you type should go after the `$` sign.

4. Type the following code to run:
```
Davids-MacBook-Pro-3:RNAtoProtein chessmaster$ g++ protein-translation.cpp -o protein-translation.run
Davids-MacBook-Pro-3:RNAtoProtein chessmaster$ ./protein-translation.run
```

5. It is running! Input your RNA and get your protein! Sample input with start and stop codons:
  `AUGUUCGACCAGUAG`



### Usage instructions (Git):
1. Download and install Git if you have not yet.
2. Go to the **Command Line/Terminal**, and into your `code` folder using `cd`

In this example, I saved the `code` folder in my `Desktop`.
Therefore I would do (on a Mac it would look like):
```
Last login: Sun Feb 28 20:41:02 on ttys000
Davids-MacBook-Pro-3:~ chessmaster$ cd Desktop
Davids-MacBook-Pro-3:Desktop chessmaster$ cd code
```
What you type should go after the `$` sign.

3. Type the following code:
```
Davids-MacBook-Pro-3:code chessmaster$ git clone https://github.com/mrchessmaster/tools-for-academics.git
Davids-MacBook-Pro-3:code chessmaster$ cd tools-for-academics
Davids-MacBook-Pro-3:tools-for-academics chessmaster$ cd RNAtoProtein
```

4. Type the following code to run:
```
Davids-MacBook-Pro-3:RNAtoProtein chessmaster$ g++ protein-translation.cpp -o protein-translation.run
Davids-MacBook-Pro-3:RNAtoProtein chessmaster$ ./protein-translation.run
```

5. It is running! Input your RNA and get your protein! Sample input with start and stop codons:
  `AUGUUCGACCAGUAG`
