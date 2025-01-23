const express = require('express');
const app = express();
const mysql=require('mysql2');

const connection=mysql.createConnection({
    host:"localhost",
    user:"root",
    password:"system",
    database:"user"
})

connection.connect(()=>{
    console.log("connected to database....!!");
})



app.listen(3000,()=>{
    console.log("server is running...!");
})

app.get('/user',(req , res)=>{
    connection.query('select * from users',(err,users)=>{
        console.log(users);
        res.send(users);
    })
})