function validUser(data)
{
    return new Promise((res,rej)=>
    {
        if(data.usrename && data.email)
        {
            res("Validation successfully");
        }
        else{
            rej("Validation Failed");
        }
    });
}

function saveToDatabase(data)
{
    return new Promise((res,rej)=>
    {
        setTimeout(()=>res("User saved to database"),1000);
    });
}

function sendWelcomeEmail()
{
    return new Promise((res)=>
    {
        setTimeout(()=>res("Welcome Email sent"),500);
    });
}

const Userdata ={
    username:'johanDoe',
    email:"johan@example.com"
};

validUser(Userdata)

.then(message =>
{
    console.log(message);
    return saveToDatabase(Userdata);
})

.then(message=>
{
    console.log(message);
    return sendWelcomeEmail();
})


.then(message=> console.log(message))

.catch(err=>console.log(err));
