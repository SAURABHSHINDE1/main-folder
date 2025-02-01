const express = require('express');
const app = express();
const cors=require('cors');


app.use(cors())

const mysql = require('mysql2');

const db = mysql.createConnection({
    host:"localhost",
    user:"root",
    password:"system",
    database:"growskills"
})

db.connect(()=>{
    console.log("database connected sucessfully...!");
})



app.listen(3000,()=>{
    console.log("server is Running.....!");
})

app.get('/course',(req,res)=>{
    db.query(`select * from courses`,(err,result)=>{
        console.log(result);
        res.send(result);
    })
});