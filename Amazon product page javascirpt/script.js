var array=[
    {
        phoneimg:"C:\Users\USER\Desktop\dreamsguider.com\Amazon product page javascirpt\assets\iphone13.jpg",
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



console.log("welcome to my web page🙂");

var iphonecard=document.createElement("div");
iphonecard.className="iphone-card";

var saurabh=document.getElementById("saurabh1");

saurabh.appendChild(iphonecard);

var imgcontainer=document.createElement("div");
imgcontainer.className="iphone-img-container";
iphonecard.appendChild(imgcontainer);

var img=document.createElement("img");

img.src=array[0].phoneimg;
imgcontainer.appendChild(img);


var iphonedetails=document.createElement("div");
iphonedetails.className="iphone-details";
iphonecard.appendChild(iphonedetails);

var iphonename=document.createElement("h2");
iphonename.textContent=array[0].phonename;
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
rattingcount.textContent="28,825"
ratting1.appendChild(rattingcount);

var k4=document.createElement("p");
k4.className="k4";
k4.textContent="4K+ bought in past month";
iphonedetails.appendChild(k4);

var price=document.createElement("h2");
price.innerHTML="₹ "<span>51,999 </span>"+ M.R.P(13% off)";
iphonedetails.appendChild(price);




