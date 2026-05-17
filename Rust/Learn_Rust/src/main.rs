mod exam1_pf;
mod mian;
fn main() {
    println!("Hello, world!");
    let c = 44;
    let mut s = 3;
    println!("c is {c} and s is {s}");
    s = 4;
    println!("s is now {s}");
    let mut ss = "gummplemented!()";
    println!("{ss}");
    ss = "pigass";
    println!("{ss}");
    let spaces = "   ";
    let spaces = spaces.len();
    println!("spaces are {spaces}");
    let c = 3;
    println!("{c}");
    mian::varlen();
    exam1_pf::moin();
}
