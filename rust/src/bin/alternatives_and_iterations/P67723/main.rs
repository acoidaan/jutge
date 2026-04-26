use std::io::{ self, Read };

fn gcd(mut a: i32, mut b: i32) -> i32 {
    while b != 0 {
        let r = a % b;
        a = b;
        b = r;
    }
    a
}

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();

    let mut numbers = input.split_whitespace();

    let a: i32 = numbers.next().unwrap().parse().unwrap();
    let b: i32 = numbers.next().unwrap().parse().unwrap();

    println!("The gcd of {} and {} is {}.", a, b, gcd(a, b));
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn sample_1() {
        assert_eq!(gcd(16104, 3216), 24);
    }

    #[test]
    fn sample_2() {
        assert_eq!(gcd(1107, 15129), 369);
    }
}
