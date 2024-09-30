var array=[
    {
        phoneimg:"ihone13jpg",
        phonename:"Apple iPhone 13 (128GB) - Midnight",
        price:"51,999"
    },
    {
        phoneimg: "https://m.media-amazon.com/images/I/71gm8K33ZQL._SX569_.jpg",
        phonename: "Apple iPhone 13 (128GB) - Midnight",
        price: "51,999"
      },
      {
        phoneimg: "https://m.media-amazon.com/images/I/71fJiF4OzIL._SX569_.jpg",
        phonename: "Samsung Galaxy S22 Ultra (128GB) - Phantom Black",
        price: "79,999"
      },
      {
        phoneimg: "https://m.media-amazon.com/images/I/71cQWYVtcBL._SX569_.jpg",
        phonename: "Google Pixel 6 Pro (128GB) - Stormy Black",
        price: "59,999"
      },
      {
        phoneimg: "https://m.media-amazon.com/images/I/71V-0Bj4WKL._SX569_.jpg",
        phonename: "OnePlus 9 Pro (128GB) - Morning Mist",
        price: "69,999"
      },
      {
        phoneimg: "https://m.media-amazon.com/images/I/71h-6ZmKJTL._SX569_.jpg",
        phonename: "Xiaomi Mi 11 Ultra (128GB) - Cosmic Black",
        price: "49,999"
      }
]


 
 var product=array.forEach(
  arr=>{

    var iphonecard=document.createElement("div");
iphonecard.className="iphone-card";

var saurabh=document.getElementById("saurabh1");

saurabh.appendChild(iphonecard);

var imgcontainer=document.createElement("div");
imgcontainer.className="iphone-img-container";
iphonecard.appendChild(imgcontainer);

var img=document.createElement("img");
img.src="iphone13.jpg";
imgcontainer.appendChild(img);


var iphonedetails=document.createElement("div");
iphonedetails.className="iphone-details";
iphonecard.appendChild(iphonedetails);

var iphonename=document.createElement("h1");
iphonename.textContent=arr.phonename;
iphonedetails.appendChild(iphonename);

var ratting1=document.createElement("div");
ratting1.className="ratting";
iphonedetails.appendChild(ratting1);

var stars=document.createElement("i");
stars.className="ri-star-fill";

var stars1=document.createElement("i");
stars1.className="ri-star-fill";

var stars2=document.createElement("i");
stars2.className="ri-star-fill";

var stars3=document.createElement("i");
stars3.className="ri-star-fill";

var stars4=document.createElement("i");
stars4.className="ri-star-half-line";

var stars5=document.createElement("i");
stars5.className="ri-arrow-down-s-line";

ratting1.appendChild(stars);

ratting1.appendChild(stars1);

ratting1.appendChild(stars2);

ratting1.appendChild(stars3);

ratting1.appendChild(stars4);

ratting1.appendChild(stars5);

var rattingcount=document.createElement("p")
rattingcount.textContent="";
ratting1.appendChild(rattingcount);

var k4=document.createElement("p");
k4.className="k4";
k4.textContent="4K+ bought in past month";
iphonedetails.appendChild(k4);

console.log("hello");

var price=document.createElement("h2");
price.innerHTML="<sup>₹</sup>"+"<span>51,999</span>"+ "M.R.P:"+"<s>59,990</s>"+"(13% off)";
iphonedetails.appendChild(price);

var emi=document.createElement("p");
emi.className="emi";
emi.textContent="Save extra with No Cost EMI";
iphonedetails.appendChild(emi);

var prime=document.createElement("div");
prime.className="prime";
iphonedetails.appendChild(prime);

var primeicon=document.createElement("i");
primeicon.className="ri-check-fill";
prime.appendChild(primeicon);

var primetext=document.createElement("h3");
primetext.textContent="Prime";
prime.appendChild(primetext);

var free=document.createElement("p");
free.className="free";
free.textContent="FREE delivery Tue, 3 Sept";
iphonedetails.appendChild(free);

var button=document.createElement("button");
button.className="button";
button.textContent="Add to Cart";

iphonedetails.appendChild(button);


  }
 );






var phonedata=[
  {
    name:"Apple iPhone 13 (128GB) - Midnight",
    price:"51,999",
    image:"iphone13.jpg"
  }
]


 function data(){
  console.log("hello");
  var name=document.getElementById("name") ;
  var value=name.textContent;
  var price=document.getElementById("price");
  var value1=price.textContent;
  var image=document.getElementById("image");
  var valueimg=image.textContent;

  var mobiledata=
  {
    phonename:name,
    price:price,
    image:image
  }

  phonedata.push(mobiledata);
  console.log(phonedata);
  window.alert("added sucessfully!!!!!");

  minicard();

 }



 function minicard(){

 var card=document.createElement("div");
 card.className="card";

 var cardcontainer=document.querySelector(".cart-container");
 cardcontainer.appendChild(card);
 var saurabh=document.getElementById("saurabh1");
 
var imgcontainer=document.createElement("div");
 imgcontainer.className="img-container";
 card.appendChild(imgcontainer);

 var img=document.createElement("img");
 img.src=phonedata.image;
 imgcontainer.appendChild(img);

 var info=document.createElement("div");
 info.className="info-container";
 card.appendChild(info);

 var phonename=document.createElement("h3");
 phonename.textContent=array.phonename;
 info.appendChild(phonename);

 var price=document.createElement("P");
 price.innerHTML=phonedata.price+"<s>₹59,900</s>";
 info.appendChild(price);

 var Qty=document.createElement("p");
 Qty.textContent="Quantity: 1";
 info.appendChild(Qty);

 var color=document.createElement("p");
 color.id="color";
 color.textContent="Color: Black";
 info.appendChild(color); 

 }

