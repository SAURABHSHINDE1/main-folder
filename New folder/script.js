var products = [
    { name: 'shirts',
         price: "9.12" },

    { name: 'shoes',
         price: "8.10" },

         { name: 'pant',
            price: "8.10" },

            { name: 'watch',
                price: "10.1" }
];

var cartItems = [


];


products.forEach(product => {
    var parent = document.querySelector('.parent');
    var card = document.createElement("div");
    card.className = "card";
    var image = document.createElement("div");
    image.className = "image";
    var img = document.createElement("img");
     var info = document.createElement("div");
    info.className = "info";
    var h3 = document.createElement("h3");
     var p = document.createElement("p");
    var button = document.createElement("button");



    parent.appendChild(card);
    card.appendChild(image);
    image.appendChild(img);
    card.appendChild(info);
    info.appendChild(h3);
    info.appendChild(p);
    card.appendChild(button);

    img.src = "img1"; 
    img.alt = product.name;
    h3.textContent = product.name;
    p.textContent = product.price;
    button.textContent = "Add to cart";

    var cart = document.querySelector('.cart');
    button.onclick = () => {
 
        cartItems.push(product);


        cart.innerHTML = "";

        displayCart();
    };
});




function sann(){

    var last=product.pop();
    
    product.pop();

    console.log(last)
}
    
       

        
                
      









 function displayCart() {
    var cart = document.querySelector('.cart');

    cartItems.forEach(item => {
        var card = document.createElement("div");
        card.className = "card";

        var image = document.createElement("div");
        image.className = "image";

        var img = document.createElement("img");
        

        var info = document.createElement("div");
        info.className = "info";

        var h3 = document.createElement("h3");
   

        var p = document.createElement("p");
     

  
        cart.appendChild(card);
        card.appendChild(image);
        image.appendChild(img);
        card.appendChild(info);
        info.appendChild(h3);
        info.appendChild(p);


        img.src = "img1"; 
        img.alt = item.name;
        h3.textContent = item.name;
        p.textContent = item.price;
    });
}