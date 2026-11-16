/*
main
backend/
ui/
*/
pub mod backend;
pub mod frontend;
use crate::backend::RWops::*;

fn main() {
let test = EntryRead {
    parent: "test".into(),
    name: "testread".into(),
};

println!("{}", read(test));
}
