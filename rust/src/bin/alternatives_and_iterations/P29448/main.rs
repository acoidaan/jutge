use std::io::{ self, Read };

fn is_leap_year(year: i32) -> bool {
    (year % 4 == 0 && year % 100 != 0) || year % 400 == 0
}

fn is_correct_date(day: i32, month: i32, year: i32) -> bool {
    if month < 1 || month > 12 || day < 1 {
        return false;
    }

    let days_in_month = match month {
        1 | 3 | 5 | 7 | 8 | 10 | 12 => 31,
        4 | 6 | 9 | 11 => 30,
        2 => {
            if is_leap_year(year) { 29 } else { 28 }
        }
        _ => 0,
    };

    day <= days_in_month
}

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();

    let nums: Vec<i32> = input
        .split_whitespace()
        .map(|x| x.parse().unwrap())
        .collect();

    for chunk in nums.chunks(3) {
        let day = chunk[0];
        let month = chunk[1];
        let year = chunk[2];

        if is_correct_date(day, month, year) {
            println!("Correct Date");
        } else {
            println!("Incorrect Date");
        }
    }
}
