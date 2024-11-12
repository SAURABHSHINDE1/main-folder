const userdata=[
    {
        Id:"",
        phone:"",
        password:"",
    }
];

function validateForm() {
    
    var id =document.getElementById("id1").value;
    var phone = document.getElementById("phone").value;
    var password = document.getElementById("pass").value;

    let userinfo ={
        Id:id,
        phone:phone,
        password:password
    }
    
    userdata.push(userinfo);
    
    alert("login successfull");
    console.log(userdata);
    window.open("../main.html");
    
}