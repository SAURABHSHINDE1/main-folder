const express = require('express');
const app = express();
const mysql=require('mysql2');

const connection=mysql.createConnection({
    host:"localhost",
    user:"root",
    password:"system",
    database:"products"
})

connection.connect(()=>{
    console.log("connected to database....!!");
})



app.listen(3000,()=>{
    console.log("server is running...!");
})

app.get('/user',(req , res)=>{
    connection.query('select * from productdetails',(err,users)=>{
        console.log(users);
        res.send(users);
    })

    app.get('/product',(req,res)=>
    {
        connection.query(`SELECT 
    id,
    product_name,
    original_price,
    discounted_price,
    (original_price - discounted_price) AS discount_amount,
    discounted_price AS final_price_after_discount,
    ((original_price - discounted_price) / original_price * 100) AS discount_percentage
FROM 
    productdetails
WHERE 
    (original_price - discounted_price) / original_price * 100 > 20 -- Discount > 20%
ORDER BY 
    discount_percentage DESC;
`,(err,result)=>{
    console.log(result);
    res.send(result);
})
    })
})