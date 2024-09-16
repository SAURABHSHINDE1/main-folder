var array =[

    {
        username:"",
        fname:"",
        lname:"",
        gmail:"",
        password:"",
    }
];

function data(){

    var user=document.getElementById("username").value ;
    var fname=document.getElementById("fnmae").value ;
    var lname=document.getElementById("lname").value ;
    var gmail=document.getElementById("gmail").value ;
    var password=document.getElementById("pass").value;



    var USER_DATA=
    {
        username: user,
        fname:fname,
        lname:lname,
        gmail:gmail,
        password:password
    }

    array.push(USER_DATA);

    console.log(array);
     window.alert("Account created successfully");

}


console.log("saurabh");
