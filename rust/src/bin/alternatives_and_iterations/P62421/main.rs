use std::io::{ self, Read };

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();

    let words: Vec<&str> = input.split_whitespace().collect();

    println!("{} {} {}", words[2], words[1], words[0]);
}
