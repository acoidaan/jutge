use std::io::{ self, Read };

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();

    let n: u64 = input.trim().parse().unwrap();

    let hex = format!("{:X}", n);

    let reversed: String = hex.chars().rev().collect();

    println!("{}", reversed);
}
