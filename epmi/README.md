# EPMI: An statistical energy function for protein 3D structure. (Internal use only)

## 1. Introduction:

This package provides a neural network model and preprosess scripts to compute an energy function of a given protein sequence.

## 2. Input

* a3m file : multi sequence alignment file of the given sequence
* tgt file : a feature file generated in our group
* seq file : a text file contains only sequence.

In the folder test/, there are examples of these files.

## 3. Output

* .epad.prob file : The probability of discretized distance for each pair of amino acids. 

Each row of the .epad.prob file is in the following format:

    [Amino Acid 1] [Amino acid 2] [Probability of distance category 1],... [probability of distance category 13]

See test/1b4bA.epad.prob for example.

The distance category is defined as 
* Category 1: 3.5A - 4.5A
* Category 2: 4A - 5A
* Category 3: 5A - 6A
...
* Category 13: 15A - +oo

## 4. Run and test cases

Run the program with the following command.

    bin/run-epadmi-general.sh [a3m file] [tgt file] [sequence file]

To test the installation, please run the test with the following commands.

    cd test/
    bash runbat.test.sh

The result will be 1b4bA.epad.prob in the current path.

## 5. Contact

zywang@ttic.edu
