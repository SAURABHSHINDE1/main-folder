const userdata=[
    {
        name:"",
        email:"",
        phone:"",
        password:"",
    }
];

function validateForm() {
    
    var name = document.getElementById("name").value;
    var email = document.getElementById("email").value;
    var phone = document.getElementById("phone").value;
    var password = document.getElementById("pass").value;

    let userinfo ={
        name:name,
        email:email,
        phone:phone,
        password:password
    }
    
    userdata.push(userinfo);
    
    
    alert("login successfull");
    console.log(userdata);
    window.open("main.html");


}