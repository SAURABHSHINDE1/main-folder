var array = [
    {
        cardname: "Hair spa and style",
        price: "Rs899",
        duration: "60 min",
        discription: "description",
        Servicesimg: "img"
    },
    {
        cardname: "Head massage",
        price: "Rs299",
        duration: "30 min",
        discription: "description",
        Servicesimg: "img"
    },
    {
        cardname: "Hair cut",
        price: "Rs199",
        duration: "30 min",
        discription: "description",
        Servicesimg: "img"
    },
    {
        cardname: "Hair colors",
        price: "Rs899",
        duration: "50 min",
        discription: "description",
        Servicesimg: "img"
    },
    {
        cardname: "Hair treatment",
        price: "Rs999",
        duration: "60min",
        discription: "description",
        Servicesimg: "img"
    },
    {
        cardname: "clean hup",
        price: "Rs399",
        duration: "20 min",
        discription: "description",
        Servicesimg: "img"
    },
    {
        cardname: "facial",
        price: "Rs499",
        duration: "25 min",
        discription: "description",
        Servicesimg: "img"
    },
    
];

const productitem =[

];


let result = document.getElementById("card-container");
let cart = document.getElementById('id');
console.log("saurabh");

 array.forEach(arr => {

  
    const service_card = document.createElement("div");
    service_card.className ="service-card"
    result.appendChild(service_card);

    var left_container = document.createElement("div");
    left_container.className ="left-container";
    service_card.appendChild(left_container);

    var h3 = document.createElement("h3");
    h3.textContent =arr.cardname;
    left_container.appendChild(h3);

    var p = document.createElement("p");
    p.innerHTML = arr.price ;
    left_container.appendChild(p);

    var h4 = document.createElement("h4");
    h4.textContent =arr.duration ;
    left_container.appendChild(h4);

    var h5 = document.createElement("h5");
    h5.textContent =arr.discription ;
    left_container.appendChild(h5);

    var button = document.createElement("button");
    button.textContent = "Add to cart";
    button.id="book_button";
    left_container.appendChild(button);
    button.onclick = () => {
            
            productitem.push(this.array);  
            console.log(productitem);

            cart.innerHTML='';
            displaycart();
        };

    var right_container = document.createElement("div");
    right_container.className ="right-container";
    service_card.appendChild(right_container);

    var img = document.createElement("img");
    img.src = arr.Servicesimg;
    right_container.appendChild(img);

    
});





// function sann(){

//     var last=array.pop();
    
//     array.pop();

//     console.log(last)
// }



function displaycart() {


     var cart = document.getElementById('id');

     cart.forEach(item => {
        
        const service_card = document.createElement("div");
        service_card.className ="service-card"
        cart.appendChild(service_card);
    
        var left_container = document.createElement("div");
        left_container.className ="left-container";
        service_card.appendChild(left_container);
    
        var h3 = document.createElement("h3");
        h3.textContent =item.cardname;
        left_container.appendChild(h3);
    
        var p = document.createElement("p");
        p.innerHTML = item.price;
        left_container.appendChild(p);
    
        var h4 = document.createElement("h4");
        h4.textContent =item.duration ;
        left_container.appendChild(h4);
    
        var h5 = document.createElement("h5");
        h5.textContent =item.discription ;
        left_container.appendChild(h5);
    
    
        var right_container = document.createElement("div");
        right_container.className ="right-container";
        service_card.appendChild(right_container);
    
        var  img = document.createElement("img");
        img.src = item.Servicesimg;
        right_container.appendChild(img);
        

   });
}



