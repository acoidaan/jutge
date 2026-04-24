use std::io::{ self, Read };

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();

    let mut num: i32 = input.trim().parse().unwrap();

    if num == 0 {
        println!("0");
        return;
    }

    let mut result = String::new();
    while num > 0 {
        result.push_str(&(num % 2).to_string());
        num /= 2;
    }

    println!("{}", result)
}
