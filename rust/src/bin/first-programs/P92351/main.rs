use std::io::{ self, Read };

fn division(a: i64, b: i64) -> (i64, i64) {
    (a.div_euclid(b), a.rem_euclid(b))
}

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();

    let mut nums = input.split_whitespace();

    let a: i64 = nums.next().unwrap().parse().unwrap();
    let b: i64 = nums.next().unwrap().parse().unwrap();

    let (d, r) = division(a, b);

    println!("{} {}", d, r);
}

#[cfg(test)]
mod tests {
  use super::*;

  #[test]
  fn sample_1() {
    assert_eq!(division(32, 6), (5, 2));
  }

  #[test]
  fn sample_2() {
    assert_eq!(division(-32, 6), (-6, 4));
  }

  #[test]
  fn sample_3() {
    assert_eq!(division(-2147483648 , 10), (-214748365, 2));
  }

}