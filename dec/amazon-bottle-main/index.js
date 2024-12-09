var product = {
    productName: "Boldfit Water Bottles Stainless Steel Water Bottle 1 Litre Steel Water Bottles for School, Office, Home, Gym 1 Litre Water Bottle for Men Leakproof, Rust free Steel Bottle -1000 ml Water Bottle Black",
    brandName: "Visit the Boldfit Store",
    image: "https://m.media-amazon.com/images/I/41Vj17ZKHDL._SX300_SY300_QL70_FMwebp_.jpg",
    rating: 3,
    ratingCount: "4,521 ratings",
    mrp: 799,
    price: 449,
    emiOption: 499,
    offers: [{
        offerTitle: "Bank Offer",
        offerDiscription: "Upto  34.90",
        more: "4 offers"
    },
    {
        offerTitle: "Partner Offers",
        offerDiscription: "Get GST invoice and",
        more: "1 offer"
    },
    {
        offerTitle: "Partner Offers",
        offerDiscription: "Get GST invoice and",
        more: "1 offer"
    }
    ]
}

var productName = document.querySelector('#productName');
// console.log(productName);
productName.textContent = product.productName;


var brandName = document.querySelector('#brandName');
console.log(brandName);
brandName.textContent = product.brandName;


// for (let i = 0; i < 5; i++) {
//     if (i < product.rating) {
//         var star = document.createElement("i");
//         star.className = "ri-star-s-fill";
//         document.getElementById('starRating').appendChild(star);


//     } else {
//         var Emptystar = document.createElement("i");
//         Emptystar.className = "ri-star-s-line";
//         document.getElementById('starRating').appendChild(Emptystar);

//     }
// }


for (let i = 0; i < 5; i++) {
    if (i < product.rating) {
        var star = document.createElement("i");
        star.className = "ri-star-fill";
        document.querySelector('#starRating').appendChild(star);
    }
    else {
        var emptyStar = document.createElement("i");
        emptyStar.className = "ri-star-line";
        document.querySelector('#starRating').appendChild(emptyStar);
    }
}


var dicountPrice = ((product.mrp - product.price) / product.mrp) * 100;
dicountPrice = parseInt(dicountPrice);
console.log(dicountPrice);

var discount = document.querySelector('#discount');
discount.textContent = `-${dicountPrice} % OFF`;


document.querySelector('#price').textContent = `Rs. ${product.price}`;


document.querySelector('#mrp').textContent = `M.R.P. ${product.mrp}`;

document.querySelector('#emi').textContent = `starts at Rs.${product.emiOption} per month.`



var offers = document.querySelector('#allOffers');

product.offers.forEach(offersSelect => {
    var box1 = document.createElement('div');
    box1.className = 'box1';
    offers.appendChild(box1);


    var boxH4 = document.createElement('h4');
    box1.appendChild(boxH4);
    boxH4.textContent = offersSelect.offerTitle;

    var boxH5 = document.createElement('h5');
    box1.appendChild(boxH5);
    boxH5.textContent = offersSelect.offerDiscription;

    var boxP = document.createElement('p');
    box1.appendChild(boxP);
    boxP.textContent = offersSelect.more;


})

document.querySelector('#productPrice').textContent = product.price;

var imageContainer = document.querySelector('#imageContainer');
imageContainer.style.backgroundImage = `url('${product.image}')`;
