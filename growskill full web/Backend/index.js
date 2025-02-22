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


app.get('/asset',(req,res)=>{
    db.query(`select * from digitalasset`,(err,result)=>{
        console.log(result);
        res.send(result);
    })
});

// app.get('/course/:name', (req, res) => {
//     const name = req.params.name;
//     const query = `
//        SELECT 
//     c.courseID AS course_id,
//     c.courseName AS course_name,
//     c.courseImg AS course_img,
//     c.price,
//     c.mrp,
//     c.lectures,
//     c.level,
//     JSON_ARRAYAGG(l.Language) AS languages, 
//     JSON_ARRAYAGG(
//         JSON_OBJECT(
//             'title', p.title,
//             'video_link', p.videoLink
//         )
//     ) AS videos
// FROM 
//     Courses c
// LEFT JOIN 
//     CoursesLanguages cl ON c.courseID = cl.courseID
// LEFT JOIN 
//     Language l ON cl.languagesID = l.languageID
// LEFT JOIN 
//     Points p ON c.courseID = p.courseID
// WHERE 
//     c.courseID LIKE ?
// GROUP BY 
//     c.courseID;
//     `;

//     db.query(query, [`%${name}%`], (err, result) => {
//         if (err) {
//             console.error('Database query error:', err);
//         }
//         res.send(result);
//     });
// });


app.get('/course/:name', (req, res) => {
    const name = req.params.name;
   db.query(` SELECT 
    c.courseID AS course_id,
    c.courseName AS course_name,
    c.courseImg AS course_img,
    c.price,
    c.mrp,
    c.lectures,
    c.level,
    JSON_ARRAYAGG(l.Language) AS languages, 
    JSON_ARRAYAGG(
        JSON_OBJECT(
            'title', p.title,
            'video_link', p.videoLink
        )
    ) AS videos
FROM 
    Courses c
LEFT JOIN 
    CoursesLanguages cl ON c.courseID = cl.courseID
LEFT JOIN 
    Language l ON cl.languagesID = l.languageID
LEFT JOIN 
    Points p ON c.courseID = p.courseID
WHERE 
    c.courseID LIKE ?
GROUP BY 
    c.courseID;`,[name],(err,result)=>{
        if(err) throw err;
        res.send(result);
    })
});






