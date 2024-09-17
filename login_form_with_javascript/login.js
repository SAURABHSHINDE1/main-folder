var userdata1=[

    {
         username:"saurabh1",
         password:"saurabh123"
    }

];

function login()
{

  

    var userinput=document.getElementById("username").value;
    var passinput=document.getElementById("pass").value;
    console.log("saurabh");

    if(userinput=="saurabh1" && passinput=="saurabh123")
    {
        window.alert("Login sucessfull!!!");
        window.open("https://www.youtube.com/");
    }
    else{
        window.alert("Invalid username or password");
    }
}
