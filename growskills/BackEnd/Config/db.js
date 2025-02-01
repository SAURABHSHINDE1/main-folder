const mysql =require('mysql2');

const db = mysql.createConnection({
    host:"localhost",
    usre:"root",
    password:"system",
    database:"groeskills"
})

db.connect(()=>{
    console.log("database connected successfully...!");
})

module.exports = { db };