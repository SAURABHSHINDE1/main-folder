const properties = [
    {
      image: "download 11.jfif",
      name: "Sunny Villa",
      city: "New York",
      price: 500000,
      discountedPrice: 475000,
    },
    {
      image: "download 2.jfif",
      name: "Oceanfront Condo",
      city: "Miami",
      price: 750000,
      discountedPrice: 700000,
    },
    {
      image: "download 3.jfif",
      name: "Mountain Retreat",
      city: "Denver",
      price: 600000,
      discountedPrice: 570000,
    },
    {
      image: "download 4.jfif",
      name: "Urban Apartment",
      city: "Chicago",
      price: 450000,
      discountedPrice: 430000,
    },
    {
      image: "download 5.jfif",
      name: "Cozy Cottage",
      city: "Portland",
      price: 300000,
      discountedPrice: 285000,
    },
    {
      image: "download 6.jfif",
      name: "Lakeside Mansion",
      city: "Orlando",
      price: 900000,
      discountedPrice: 850000,
    },
    {
      image: "download 7.jfif",
      name: "Downtown Loft",
      city: "Los Angeles",
      price: 700000,
      discountedPrice: 665000,
    },
    {
      image: "download 8.jfif",
      name: "Suburban Home",
      city: "Houston",
      price: 350000,
      discountedPrice: 335000,
    },
    {
      image: "download 9.jfif",
      name: "Penthouse Suite",
      city: "San Francisco",
      price: 1000000,
      discountedPrice: 950000,
    },
    {
      image: "download 10.jfif",
      name: "Luxury Farmhouse",
      city: "Austin",
      price: 800000,
      discountedPrice: 760000,
    }
  ];

    
    var totaldiscount =properties.price - properties.discountedPrice;
    var percentdicount =(totaldiscount/properties.price) * 100 ; 
    console.log(percentdicount);

 properties.forEach(discount =>
 {
    var card = document.createElement("div");
    card.className = "card";
    var body = document.getElementById("saurabh");
    body.appendChild(card);

    var posterimg = document.createElement("div");
    posterimg.className = "posterimg";
    card.appendChild(posterimg);

    var discountdiv = document.createElement("div");
    discountdiv.className = "discount-div";
    posterimg.appendChild(discountdiv);

    var discountlogo = document.createElement("h2");
    discountlogo.textContent = "%";
    discountdiv.appendChild(discountlogo);

    var banner =document.createElement("img");
    banner.src = discount.image;
    posterimg.appendChild(banner);

    var info =document.createElement("div");
    info.className = "info";
    card.appendChild(info);

    var villaname =document.createElement("h1");
    villaname.textContent = discount.name;
    info.appendChild(villaname);

    var location =document.createElement("div");
    location.className="div-location";
    info.appendChild(location);

    var locationicon = document.createElement("i");
    locationicon.className = "ri-map-pin-fill";
    location.appendChild(locationicon);

    var address = document.createElement("p");
    address.textContent = discount.city;
    info.appendChild(address);

    var h4 = document.createElement("h4");
    h4.innerHTML = "Upto 20 Guestes" + "<i class='ri-shining-fill'>"+" 6 Rooms"+ "<i class='ri-shining-fill'>"+ "7 Baths";
    info.appendChild(h4);

    var price = document.createElement("div");
    price.className = "price";
    info.appendChild(price);

    var mainprice = document.createElement("h2");
    mainprice.textContent = "₹" + discount.discountedPrice;
    price.appendChild(mainprice);

    var detail = document.createElement("p");
    detail.textContent = "For Per Night + Taxes";
    price.appendChild(detail);

    var arrow = document.createElement("div")
    arrow.className="arrow";
    price.appendChild(arrow);

    var arrowlogo = document.createElement("i");
    arrowlogo.className = "ri-arrow-right-line";
    arrow.appendChild(arrowlogo);
 }
 );