use std::io::{self, Read};

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();

    let nums: Vec<i32> = input
        .split_whitespace()
        .map(|x| x.parse().unwrap())
        .collect();

    let euros = nums[0];
    let cents = nums[1];

    let mut total = euros * 100 + cents;

    let values = [
        50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100, 50, 20, 10, 5, 2, 1,
    ];

    let names = [
        "Banknotes of 500 euros",
        "Banknotes of 200 euros",
        "Banknotes of 100 euros",
        "Banknotes of 50 euros",
        "Banknotes of 20 euros",
        "Banknotes of 10 euros",
        "Banknotes of 5 euros",
        "Coins of 2 euros",
        "Coins of 1 euro",
        "Coins of 50 cents",
        "Coins of 20 cents",
        "Coins of 10 cents",
        "Coins of 5 cents",
        "Coins of 2 cents",
        "Coins of 1 cent",
    ];

    for i in 0..values.len() {
        let count = total / values[i];
        total %= values[i];

        println!("{}: {}", names[i], count);
    }
}
