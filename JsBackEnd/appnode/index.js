const express = require('express');
const app = express();
const cors = require('cors');
const mysql=require('mysql2');

app.use(cors());

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
     const {user} = req.query;
    // var user="rohit"
     var findedusre = users.find(urs => urs.username==user);
     if(findedusre)
     {
        res.send({
            validation:"success",
            user:findedusre
        })
     }
     else{
        res.send({
            validation:"failed",
            message:"user not found"
        })
     }
    })
})