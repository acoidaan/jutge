use std::io::{ self, Read };

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();

    let nums: Vec<f64> = input
        .split_whitespace()
        .map(|x| x.parse().unwrap())
        .collect();

    let sum: f64 = nums.iter().sum();
    let average: f64 = sum / (nums.len() as f64);

    println!("{:.2}", average);
}
