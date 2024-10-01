var images = [];

function add() {
  var imageUrl = document.getElementById("input").value;

  images.push(imageUrl);
  console.log(images);

  window.alert("Image added successfully");

  var wrapper = document.querySelector(".img_container");

  
  images.forEach((imageUrl) => {
    var box = document.createElement("div");
    box.className = "box";
    wrapper.appendChild(box);

    var img = document.createElement("img");
    img.src = imageUrl;
    box.appendChild(img);
  });
}