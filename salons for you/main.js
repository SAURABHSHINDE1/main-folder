
// creating a hidden menu item;
function toggleDiv() {
    const secondDiv = document.getElementById('secondDiv');
    if (secondDiv.style.display === '' || secondDiv.style.display === 'none')
         {
        secondDiv.style.display = 'flex'; 
    } else {
        secondDiv.style.display = 'none'; 
    }
}




// services divs 
const services =[
    {
        service_img:"women gromming.png",
        service_title:"saurabh",
        link:"text.html"
    },

    {
        service_img:"",
        service_title:"saurabh",
         link:"text.html"
    },

    {
        service_img:"",
        service_title:"saurabh",
         link:"text.html"
    },

    {
        service_img:"",
        service_title:"saurabh",
         link:"text.html"
    },

    {
        service_img:"",
        service_title:"saurabh",
         link:"text.html"
    },
    {
        service_img:"",
        service_title:"saurabh",
         link:"text.html"
    }
 
]

let servicesDiv =document.getElementById('top_service');

services.forEach( service =>
{
    var service_type = document.createElement('div');
    service_type.className = "service-type";
    servicesDiv.appendChild(service_type);

   let service_img = document.createElement("div");
    service_img.className = "service_img";
    service_type.appendChild(service_img);

    let img = document.createElement("img");
    img.src = service.service_img;
    service_img.appendChild(img);

    let service_title = document.createElement("div");
    service_title.className = "service_title";
    service_title.innerHTML = service.service_title;
    service_type.appendChild(service_title);

    service_type.addEventListener("click", () => {
        window.location.href = services.link; 
    });

});


// top salon banners

const topSalonBanners = [
    {
        banner_img:"banner1.jpg",
        link:"text.html"
    },

    {
        banner_img:"banner1.jpg",
         link:"text.html"
    },

    {
        banner_img:"banner1.jpg",
        link:"text.html"
    },

    {
        banner_img:"banner1.jpg",
        link:"text.html"

    },
    {
        banner_img:"banner1.jpg",
        link:"text.html"
    },
    {
        banner_img:"banner1.jpg",
        link:"text.html"
    },
    {
        banner_img:"banner1.jpg",
        link:"text.html"
    },
    {
        banner_img:"banner1.jpg",
        link:"text.html"
    },
    {
        banner_img:"banner1.jpg",
        link:"text.html"
    },

   
];

let card_container =document.getElementById("card_container");

topSalonBanners.forEach( banner =>
{
   
    var card = document.createElement("div");
    card.className = "card";
    card_container.appendChild(card);

    let cardimg = document.createElement("img");
    cardimg.src = banner.banner_img;
    card.appendChild(cardimg);

    card.addEventListener("click", () => {
        window.location.href = topSalonBanners.link; 
    });
});


document.getElementById("hideen-button").addEventListener("click", function() {
    const secondDiv = document.getElementById('toggleDiv1');
    secondDiv.style.display = 'none';
    const toggleDiv = document.getElementById("toggleDiv");
    // toggleDiv.classList.toggle("hidden");
    // toggleDiv.classList.toggle("visible");
    toggleDiv.style.display = 'none';
    toggleDiv.style.display = 'flex';
});

document.getElementById("close").addEventListener("click", function() {
    const secondDiv = document.getElementById('toggleDiv');
    secondDiv.style.display = 'none';
});



// login information

const userdata=[
    {
        Email:"",
        phone:"",
        password:"",
    }
];

document.getElementById("loginbutton").addEventListener("click",function () {
    
    var Email =document.getElementById("id1").value;
    var phone = document.getElementById("phone").value;
    var password = document.getElementById("pass").value;
   

    let userinfo ={
        Email:Email,
        phone:phone,
        password:password
    }
    
    userdata.push(userinfo);
    alert("login successfull");
   
    console.log(userdata);
    // window.open("main.html", '_self');

     //  div.classList.toggle("hidden1");
    // var secondDiv = document.getElementById('secondDiv');
    // secondDiv.classList.toggle("hiddent");

    
    var seconddiv = document.getElementById('secondDiv');
    seconddiv.style.display = "none";

    var seconddiv1 = document.getElementById('toggleDiv');
    seconddiv1.style.display = "none";

    let anchor = document.createElement("a");
    anchor.id="hideen-button";

});


// sign up function

 var first=document.querySelector(".toggle_signup").addEventListener("click",function()
{
    const secondDiv = document.getElementById('toggleDiv');
    secondDiv.style.display = 'none';
     const div=document.getElementById("toggleDiv1");
    //  div.classList.toggle("hidden1");
    //  div.classList.toggle("visible1");
    div.style.display = 'none';
    div.style.display = 'flex';
   
});

document.getElementById("close1").addEventListener("click", function() {
    const secondDiv = document.getElementById('toggleDiv1');
    secondDiv.style.display = 'none';
});



document.getElementById('get-location').addEventListener('click', function() {
    if ("geolocation" in navigator) {
        navigator.geolocation.getCurrentPosition(successCallback, errorCallback);
    } else {
        document.getElementById('location').textContent = "Geolocation is not supported by this browser.";
    }
});

function successCallback(position) {
    const latitude = position.coords.latitude;
    const longitude = position.coords.longitude;
    //  const saurabh = document.getElementById('location');
    //  saurabh.textContent = `Latitude: ${latitude} Longitude: ${longitude}`
    // console.log(saurabh);
    console.log(latitude);
    console.log(longitude);
}

function errorCallback(error) {
    switch (error.code) {
        case error.PERMISSION_DENIED:
            document.getElementById('location').textContent = "User denied the request for Geolocation.";
            break;
        case error.POSITION_UNAVAILABLE:
            document.getElementById('location').textContent = "Location information is unavailable.";
            break;
        case error.TIMEOUT:
            document.getElementById('location').textContent = "The request to get user location timed out.";
            break;
        case error.UNKNOWN_ERROR:
            document.getElementById('location').textContent = "An unknown error occurred.";
            break;
    }
}



// 

const data=[
    {
        username:"",
        password:"",
        conform_pass:"",
        email:""
    }
];




document.getElementById('signup').addEventListener("click", function() {
    
    let input1 = document.getElementById("input1").value;
    let input2 = document.getElementById("input2").value;
    let input3 = document.getElementById("input3").value;
    let input4 = document.getElementById("input4").value;
     
    const userdata={
        username:input1,
        password:input2,
        conform_pass:input3,
        email:input4
    }

    data.push(userdata);
    alert("data added")
   
    console.log(data); 
    });


// women section  sevices 

const womem_services = [
    {
        service_img:"women gromming.png",
        service_title:"haricut",
        service_description:"Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nulla facilisi.",
        link:"text.html"
    },
    {
        service_img:"women gromming.png",
        service_title:"haircut",
        service_description:"Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nulla facilisi.",
        link:"text.html"
    },
    {
        service_img:"women gromming.png",
        service_title:"haircut",
        service_description:"Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nulla facilisi.",
        link:"text.html"
    },
    {
        service_img:"women gromming.png",
        service_title:"haicut",
        service_description:"Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nulla facilisi.",
        link:"text.html"
    },
    {
        service_img:"women gromming.png",
        service_title:"haircut",
        service_description:"Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nulla facilisi.",
        link:"text.html"
    },
    {
        service_img:"women gromming.png",
        service_title:"haircut",
        service_description:"Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nulla facilisi.",
        link:"text.html"
    },
];

let women_services_div =document.getElementById('women-section-card');

womem_services.forEach( service =>
{
    let card_for_women = document.createElement("div");
    card_for_women.className = "card-for-women";
    women_services_div.appendChild(card_for_women);

    let upper_div = document.createElement("div");
    upper_div.className = "upper";
    card_for_women.appendChild(upper_div);

    let service_img = document.createElement("img");
    service_img.src = service.service_img;
    upper_div.appendChild(service_img);

    let lower_div = document.createElement("div");
    lower_div.className = "lower";
    card_for_women.appendChild(lower_div);

    let service_title = document.createElement("h2");
    service_title.innerHTML = service.service_title;
    lower_div.appendChild(service_title);

    let service_description = document.createElement("p");
    service_description.innerHTML = service.service_description;
    lower_div.appendChild(service_description);

    card_for_women.addEventListener("click", () => {
        window.location.href = womem_services.link; 
    });
    
}); 

// kids section services 

const kid_services = [
    {
        service_img:"women gromming.png",
        service_title:"haicut",
        service_description:"Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nulla facilisi.",
        link:"text.html"
    },
    {
        service_img:"women gromming.png",
        service_title:"haicut",
        service_description:"Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nulla facilisi.",
        link:"text.html"
    },
    {
        service_img:"women gromming.png",
        service_title:"haicut",
        service_description:"Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nulla facilisi.",
        link:"text.html"
    }
];

let kid_services_div =document.getElementById('kid-section-card');

kid_services.forEach( service_kid =>
{
    let card_for_kid = document.createElement("div");
    card_for_kid.className = "card-for-kid";
    kid_services_div.appendChild(card_for_kid);

    let upper_div = document.createElement("div");
    upper_div.className = "kid-upper";
    card_for_kid.appendChild(upper_div);

    let service_img = document.createElement("img");
    service_img.src = service_kid.service_img;
    upper_div.appendChild(service_img);

    let lower_div = document.createElement("div");
    lower_div.className = "kid-lower";
    card_for_kid.appendChild(lower_div);

    let service_title = document.createElement("h2");
    service_title.innerHTML = service_kid.service_title;
    lower_div.appendChild(service_title);

    let service_description = document.createElement("p");
    service_description.innerHTML = service_kid.service_description;
    lower_div.appendChild(service_description);

    card_for_kid.addEventListener("click", () => {
        window.location.href = womem_services.link; 
    });
    
}); 


const Men_services = [
    {
        service_img:"women gromming.png",
        service_title:"haricut",
        service_description:"Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nulla facilisi.",
        link:"text.html"
    },
    {
        service_img:"women gromming.png",
        service_title:"haircut",
        service_description:"Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nulla facilisi.",
        link:"text.html"
    },
    {
        service_img:"women gromming.png",
        service_title:"haircut",
        service_description:"Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nulla facilisi.",
        link:"text.html"
    },
    {
        service_img:"women gromming.png",
        service_title:"haicut",
        service_description:"Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nulla facilisi.",
        link:"text.html"
    },
    {
        service_img:"women gromming.png",
        service_title:"haircut",
        service_description:"Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nulla facilisi.",
        link:"text.html"
    },
    {
        service_img:"women gromming.png",
        service_title:"haircut",
        service_description:"Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nulla facilisi.",
        link:"text.html"
    },
];

let men_services_div =document.getElementById('men-section-card');

Men_services.forEach( service_men =>
{
    let men_services_card = document.createElement('div');
    men_services_card.className = 'car-for-men';
    men_services_div.appendChild(men_services_card);

    let upper_div = document.createElement('div');
    upper_div.className = 'men-upper';
    men_services_card.appendChild(upper_div);

    let service_img = document.createElement('img');
    service_img.src = service_men.service_img;
    upper_div.appendChild(service_img);

    let lower_div = document.createElement('div');
    lower_div.className = 'men-lower';
    men_services_card.appendChild(lower_div);

    let service_title = document.createElement('h2');
    service_title.innerHTML = service_men.service_title;
    lower_div.appendChild(service_title);

    let service_description = document.createElement('p');
    service_description.innerHTML = service_men.service_description;
    lower_div.appendChild(service_description);

    men_services_card.addEventListener('click', () => {
        window.location.href = Men_services.link; 
    });
    
});


const massage_services = [
    {
        service_img:"women gromming.png",
        service_title:"haicut",
        service_description:"Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nulla facilisi.",
        link:"text.html"
    },
    {
        service_img:"women gromming.png",
        service_title:"haicut",
        service_description:"Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nulla facilisi.",
        link:"text.html"
    },
    {
        service_img:"women gromming.png",
        service_title:"haicut",
        service_description:"Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nulla facilisi.",
        link:"text.html"
    },
    {
        service_img:"women gromming.png",
        service_title:"haicut",
        service_description:"Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nulla facilisi.",
        link:"text.html"
    }
];

let massage_services_div =document.getElementById('massage-section-card');

massage_services.forEach( service_massage =>
{
    let massage_services_card = document.createElement('div');
    massage_services_card.className ='card-for-massage';
    massage_services_div.appendChild(massage_services_card);

    let upper_div = document.createElement('div');
    upper_div.className ='massage-upper';
    massage_services_card.appendChild(upper_div);

    let service_img = document.createElement('img');
    service_img.src = service_massage.service_img;
    upper_div.appendChild(service_img);

    let lower_div = document.createElement('div');
    lower_div.className ='massage-lower';
    massage_services_card.appendChild(lower_div);

    let service_title = document.createElement('h2');
    service_title.innerHTML = service_massage.service_title;
    lower_div.appendChild(service_title);

    let service_description = document.createElement('p');
    service_description.innerHTML = service_massage.service_description;
    lower_div.appendChild(service_description);

    massage_services_card.addEventListener('click', () => {
        window.location.href = massage_services.link; 
    });
});



var location2 = document.getElementById('userloc');
    location2.style.display = "none";
var userinput = document.getElementById('input_location').addEventListener("click", function()
{
    
    var location1 = document.getElementById('userloc');
    location1.style.filter="contrast(100%)";
    location1.style.display = "none";
    location1.style.display = "flex"; 

    var body = document.getElementById('body');
    // body.style.filter ="brightness(0.5)";

    var closediv= document.querySelector('.location_close');
    closediv.addEventListener("click",function (){
        location1.style.display = "none";
        body.style.filter ="none";
    });
});

