use std::io::{ self, Read };

fn main() {
  let mut input = String::new();
  io::stdin().read_to_string(&mut input).unwrap();

  let mut nums = input.split_whitespace();

  let mut h: i32 = nums.next().unwrap().parse().unwrap();
  let mut m: i32 = nums.next().unwrap().parse().unwrap();
  let mut s: i32 = nums.next().unwrap().parse().unwrap();

  s += 1;

  if s == 60 {
    s = 0;
    m += 1;
  }

  if m == 60 {
    m = 0;
    h += 1;
  }

  if h == 24 {
    h = 0;
  }

  println!("{:02}:{:02}:{:02}", h, m , s);
}
