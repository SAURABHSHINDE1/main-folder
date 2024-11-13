var array = [
    {
        cardname: "Hair spa and style",
        price: "Rs899",
        duration: "60min",
        discription: "description",
        Servicesimg: "img"
    },
    {
        cardname: "Hair spa and style",
        price: "Rs899",
        duration: "60min",
        discription: "description",
        Servicesimg: "img"
    },
    {
        cardname: "Hair spa and style",
        price: "Rs899",
        duration: "60min",
        discription: "description",
        Servicesimg: "img"
    },
    
];

let result = document.getElementById("card-container");
console.log(result);

var data = array.forEach(arr => {
    var service_card = document.createElement("div");
    service_card.className ="service-card"
    result.appendChild(service_card);

    var left_container = document.createElement("div");
    left_container.className ="left-container";
    service_card.appendChild(left_container);

    var h3 = document.createElement("h3");
    h3.textContent =arr.cardname;
    left_container.appendChild(h3);

    var p = document.createElement("p");
    p.innerHTML = arr.price +"<s> Rs549</s>"
    left_container.appendChild(p);

    var h4 = document.createElement("h4");
    h4.textContent =arr.duration ;
    left_container.appendChild(h4);

    var h5 = document.createElement("h5");
    h5.textContent =arr.discription ;
    left_container.appendChild(h5);

    var button = document.createElement("button");
    button.textContent = "Book Now";
    button.id="book_button";
    left_container.appendChild(button);

    var right_container = document.createElement("div");
    right_container.className ="right-container";
    service_card.appendChild(right_container);

    var img = document.createElement("img");
    img.src = arr.Servicesimg;
    right_container.appendChild(img);

});