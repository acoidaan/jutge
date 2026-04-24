use std::io::{self, Read};

fn multiply(a: &str, b: &str) -> String {
    if a == "0" || b == "0" {
        return "0".to_string();
    }

    let a_digits: Vec<u32> = a.chars().rev().map(|c| c.to_digit(10).unwrap()).collect();
    let b_digits: Vec<u32> = b.chars().rev().map(|c| c.to_digit(10).unwrap()).collect();

    let mut result = vec![0u32; a.len() + b.len()];

    for i in 0..a_digits.len() {
        for j in 0..b_digits.len() {
            result[i + j] += a_digits[i] * b_digits[j];
        }
    }

    for i in 0..result.len() {
        let carry = result[i] / 10;
        result[i] %= 10;

        if carry > 0 {
            result[i + 1] += carry;
        }
    }

    while result.len() > 1 && *result.last().unwrap() == 0 {
        result.pop();
    }

    result
        .iter()
        .rev()
        .map(|d| char::from_digit(*d, 10).unwrap())
        .collect()
}

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();

    let mut nums = input.split_whitespace();

    let a = nums.next().unwrap();
    let b = nums.next().unwrap();

    println!("{}", multiply(a, b));
}