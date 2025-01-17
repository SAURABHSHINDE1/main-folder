const array =[
    {
        id:1,
        productname:"water bottel",
        price:200
    },

    {
        id:2,
        productname:"Toy car",
        price:400
    },

    {
        id:2,
        productname:"Doll",
        price:270
    },

    {
        id:3,
        productname:"Rc plane",
        price:900
    },

    {
        id:4,
        productname:"product",
        price:1000
    },
]

var body = document.getElementById("body");

array.forEach(Element=>
{ 
    var card = document.createElement('div');
    card.className="card"
    body.appendChild(card);

    var product = document.createElement('h1')
    product.textContent=Element.productname;  
    card.appendChild(product);

    var price = document.createElement('h3');
    price.textContent=`₹${Element.price}`
    card.appendChild(price);

    var view = document.createElement('div');
    view.className="view";
    card.appendChild(view);
    
    var viewcontent = document.createElement('h3')
    viewcontent.textContent="View Product";
    viewcontent.setAttribute('data-id',Element.id)
    view.appendChild(viewcontent)
    
    
   
}
)
var id;
body.addEventListener('click', (e)=>
{
    console.log(e)
    if(e.target.className == "view")
    {
        id=e.target.dataset.id;
        window.open(url=`index2.html?id${id}`);
    
    }
})