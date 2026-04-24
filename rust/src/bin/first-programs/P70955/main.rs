use std::io::{ self, Read };

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();

    let mut nums = input.split_whitespace();

    let years: i32 = nums.next().unwrap().parse().unwrap();
    let days: i32 = nums.next().unwrap().parse().unwrap();
    let hours: i32 = nums.next().unwrap().parse().unwrap();
    let minutes: i32 = nums.next().unwrap().parse().unwrap();
    let seconds: i32 = nums.next().unwrap().parse().unwrap();

    let total = seconds + minutes * 60 + hours * 3600 + days * 24 * 3600 + years * 365 * 24 * 3600;

    println!("{}", total)
}
