use std::io::{self, Read};

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();

    let mut x = 0;
    let mut y = 0;

    for c in input.trim().chars() {
        match c {
            'n' => y -= 1,
            's' => y += 1,
            'e' => x += 1,
            'w' => x -= 1,
            _ => {}
        }
    }

    println!("({}, {})", x, y)
}
