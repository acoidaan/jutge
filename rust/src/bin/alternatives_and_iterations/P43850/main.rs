use std::io::{ self, Read };

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();

    for value in input.split_whitespace() {
        let result: i64 = value.parse().unwrap();
        let original = (result - 165) / 100;

        println!("{}", original);
    }
}
