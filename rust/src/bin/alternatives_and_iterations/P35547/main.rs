use std::io::{ self, Read };

fn easter(year: i32) -> (i32, i32) {
    let k = year / 100;
    let x = year % 19;
    let b = year % 4;
    let c = year % 7;
    let q = k / 4;
    let p = (13 + 8 * k) / 25;
    let y = (15 - p + k - q) % 30;
    let z = (19 * x + y) % 30;
    let n = (4 + k - q) % 7;
    let e = (2 * b + 4 * c + 6 * z + n) % 7;

    if z + e <= 9 {
        (22 + z + e, 3)
    } else if z == 29 && e == 6 {
        (19, 4)
    } else if z == 28 && e == 6 && x > 10 {
        (18, 4)
    } else {
        (z + e - 9, 4)
    }
}

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();

    for year in input.split_whitespace() {
        let year: i32 = year.parse().unwrap();
        let (day, month) = easter(year);

        println!("{}/{}", day, month);
    }
}
