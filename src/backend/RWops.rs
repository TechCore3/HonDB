use std::fs::File;
use std::io::Read;

#[derive(Debug, Clone)]
enum Value {
    Int(i64),
    Str(String),
}
pub struct EntryWrite {
    pub parent: String,
    pub name: String,
    pub content: Value,
}
pub struct EntryRead {
    pub parent: String,
    pub name: String,
}


pub fn write(entry: EntryWrite) -> i8 { // maybe i shouldve written this in C
    match File::open(format!("{}/{}.hon", entry.parent, entry.name)) {
        Ok(mut file) => {
            todo!();
            return 1; //damn im lazy 
        }
        Err(e) => {
            return 1;
        }
    }
}
pub fn read(entry: EntryRead) -> String {
    match File::open(format!("{}/{}", entry.parent, entry.name)) {
        Ok(mut file) => {
            let mut buf: &mut String = &mut String::new(); //cursed
            file.read_to_string(buf).expect("unable to read entry!");
            return buf.to_owned();
        }
        Err(e) => {
            return "".into();
        }
    }

}