const product_details={
    product_name_details:"Boldfit Water Bottles Stainless Steel Water Bottle 1 Litre Steel Water Bottles for School, Office, Home, Gym 1 Litre Water Bottle for Men Leakproof, Rust free Steel Bottle -1000 ml Water Bottle Black",
    product_img:"",
    store_name:"Visit the Boldfit Store",
    rattings:"4",
    discount_price:"349",
    origin_price:"799",
    emioption:"121",
    offers:[
        {
            offer_title:"Bank offer",
            offer_description:"Upto 34.90discount on select..",
            offer_price:"322"
        },
        {
            offer_title:"Partner Offers",
            offer_description:"Get GST invoice andsave up to 28% on...",
            offer_price:"300"
        },

    ]

}

document.querySelector("#product_details").textContent =product_details.product_name_details;

document.querySelector("#storename").textContent= product_details.store_name;

var rattings = document.querySelector("#ratting");

for( i = 0; i < 5; i++)
{
    if(i < product_details.rattings)
    {
        var star = document.createElement("i");
        star.className="ri-star-fill";
        rattings.appendChild(star);
    }
    else{
        var emptystar = document.createElement("i");
        emptystar.className="ri-star-line";
        rattings.appendChild(emptystar);
    }
}

var discount =((product_details.discount_price - product_details.origin_price) / product_details.origin_price)*100;
discount = parseInt(discount);
console.log(discount);

document.getElementById("discount").textContent = `${discount} % off`;

document.getElementById("original_price").textContent = `M.R.P.:${product_details.original_price}`;

document.querySelector("#emi").textContent = `starts at ₹${product_details.emioption} per month.`;

document.querySelector("#price2").textContent = `₹${product_details.discount_price}`

var img =document.querySelector("#img1");
img.style.backgroundImage = `url('${product_details.product_img}')`;