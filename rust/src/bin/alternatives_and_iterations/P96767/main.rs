use std::io::{self, Read};

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();

    let nums: Vec<f64> = input
        .split_whitespace()
        .map(|x| x.parse().unwrap())
        .collect();

    let x = nums[0];

    let mut result = 0.0;
    let mut power = 1.0;

    for coef in &nums[1..] {
        result += coef * power;
        power *= x;
    }

    println!("{:.4}", result);
}
