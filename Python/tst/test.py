import time
import os
from colorama import Fore, Style, init

# Initialize colorama
init(autoreset=True)

def clear():
    os.system('cls' if os.name == 'nt' else 'clear')

def print_array(arr, current=None, comparing=None):
    """Print array with colors highlighting the current and comparing elements"""
    display = []
    for i, val in enumerate(arr):
        if i == current:
            display.append(Fore.YELLOW + f"{val}" + Style.RESET_ALL)
        elif i == comparing:
            display.append(Fore.RED + f"{val}" + Style.RESET_ALL)
        else:
            display.append(Fore.CYAN + f"{val}" + Style.RESET_ALL)
    print("  ".join(display))

def bubble_sort_visual(arr):
    n = len(arr)
    for i in range(n):
        swapped = False
        for j in range(0, n - i - 1):
            clear()
            print(Fore.MAGENTA + f"Pass {i+1}, Comparing index {j} & {j+1}" + Style.RESET_ALL)
            print_array(arr, j, j + 1)
            print(Fore.WHITE + "\nPress Enter to continue..." + Style.RESET_ALL)
            input()

            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
                swapped = True

                clear()
                print(Fore.GREEN + f"Swapped {arr[j]} and {arr[j+1]}" + Style.RESET_ALL)
                print_array(arr, j, j + 1)
                print(Fore.WHITE + "\nPress Enter to continue..." + Style.RESET_ALL)
                input()

        if not swapped:
            break

    clear()
    print(Fore.CYAN + "✨ Sorted Array ✨" + Style.RESET_ALL)
    print_array(arr)
    print(Fore.WHITE + "\nPress Enter to finish..." + Style.RESET_ALL)
    input()

if __name__ == "__main__":
    data = [23, 12, 18, 44, 6, 27, 9]
    bubble_sort_visual(data)
