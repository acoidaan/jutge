use std::io::{ self, Read };

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();

    let n: i32 = input.trim().parse().unwrap();

    let mut sum: f64 = 0.0;

    for i in 1..=n {
      sum += 1.0 / i as f64;
    }

    println!("{:.4}", sum);
}
