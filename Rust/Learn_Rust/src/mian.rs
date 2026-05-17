const MAX_SCORE: u32 = 100_000;

pub fn varlen() {
    println!("hellow uwu");
    let x = 5;
    println!("x is: {x}");
    // x = 6; // ERROR: cannot assign twice

    let mut y = 5;
    println!("y is: {y}");
    y = 10;
    println!("y is now: {y}");

    println!("Max score: {MAX_SCORE}");

    let spaces = "   "; // &str
    let spaces = spaces.len(); // usize — different type!
    println!("spaces: {spaces}");

    let a: i32 = -42;
    let b: u64 = 1_000_000;
    let pi: f64 = 3.14159;
    let is_cool: bool = true;
    let letter: char = 'z';
    let emoji: char = '🦀';

    println!("{a}{b}{pi}{is_cool}{letter}{emoji}");
    let tup: (i32, f64, char) = (42, 3.14, 'R');
    let (x, y, z) = tup;
    println!("{x}, {y}, {z}");
    println!("{}", tup.0); // 42

    let months = ["Jan", "Feb", "Mar", "Apr"];
    let zeros: [i32; 5] = [0; 5];
    println!("{:?}", zeros);
    println!("{}", months[0]);

    greet("Goga G!");

    let result = add(3, 7);
    println!("3 + 7 = {result}"); // 10
    //
    println!("{}", absolute_value(-5)); // 5

    let number = 7;
    if number < 5 {
        println!("small");
    } else if number < 10 {
        println!("medium");
    } else {
        println!("large");
    }

    let label = if number % 2 == 0 { "even" } else { "odd" };
    println!("{number} is {label}");

    let mut count = 0;
    let result = loop {
        count += 1;
        if count == 5 {
            break count * 2;
        }
    };
    println!("result: {result}"); // 10

    let mut n = 3;
    while n > 0 {
        println!("{n}!");
        n -= 1;
    }

    let fruits = ["apple", "banana", "cherry"];
    for fruit in fruits {
        println!("I like {fruit}");
    }
    for i in 1..=5 {
        println!("{i}");
    }
}

fn greet(a: &str) {
    println!("Hello {a}");
}

fn add(x: i32, y: i32) -> i32 {
    x + y
}

fn absolute_value(n: i32) -> i32 {
    if n < 0 { -n } else { n }
}
