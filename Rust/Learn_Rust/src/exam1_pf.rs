pub fn moin() {
    let c = 33.3;
    let c = celsius_to_fahrenheit(c);
    println!("33.3C is {c} Fahrenheit;");
    fizbiz();
    arraystat();
    numgess();
}
/*Goal: Practice function signatures, arithmetic, and returning values. Write a function named celsius_to_fahrenheit that:
*/
fn celsius_to_fahrenheit(a: f64) -> f64 {
    (a * 1.8) + 32.0
}
/*Goal: Practice for loops and if/else expressions. Write a program that iterates from numbers 1 to 20 (inclusive):
*/
fn fizbiz() {
    let mut count = 0;
    loop {
        count += 1;
        if count % 3 == 0 && count % 5 == 0 {
            println!("FizzBuzz");
        } else if count % 3 == 0 {
            println!("Fizz");
        } else if count % 5 == 0 {
            println!("Buzz");
        } else {
            println!("{count}");
        }
        if count == 20 {
            break;
        }
    }
}

fn arraystat() {
    let array: [usize; 6] = [1, 2, 3, 4, 5, 0];
    let mut num = 0;
    for i in 0..array.len() {
        num += array[i];
    }
    println!("sum of elements in array {num}");
    num = array[0];
    for i in 0..array.len() {
        if array[i] > num {
            num = array[i];
        }
    }
    println!("the largest num in array is {num}");
}

fn numgess() {
    let n = 7;
    match n {
        1 => println!("Higher"),
        2 => println!("Higher"),
        3 => println!("Higher"),
        4 => println!("Higher"),
        5 => println!("Higher"),
        6 => println!("Higher"),
        7 => println!("Luckey number"),
        8 => println!("Lower"),
        9 => println!("Lower"),
        10 => println!("Lower"),
        _ => println!(" Its a small number"),
    }
}
