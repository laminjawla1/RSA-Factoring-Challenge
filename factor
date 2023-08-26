#!/usr/bin/python3
from sys import argv, exit


def main():
    if len(argv) != 2:
        print("factors <file>")
        exit(-1)
    try:
        with open(argv[1], "r") as f:
            line = f.readline()
            while line:
                number = int(line.strip())
                print_factors(number)
                line = f.readline()
    except:
        pass


def print_factors(number):
    i = 2
    while i <= number:
        if number % i == 0:
            print(f"{number}={number // i}*{i}")
            break
        i += 1


if __name__ == "__main__":
    main()
