

function login()
{
    let email=document.getElementById("email").value ;
    let pass=document.getElementById("pass").value ;

    if( !pass || !email){
        alert("Please fill in all fields");
    }
    else if(email=="saurabh123@gamil.com" && pass=="779845"){
        alert("Login Successfull");
        window.open("test.html");
    }
    else{
        alert("Invalid Email or Password");
    }
}


