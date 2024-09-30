var store=[
    {
        name:"",
        price:"",
        Quantity:""
    }
]

function add_data()
{
    var name1=document.getElementById("name1").value ;
    var price1=document.getElementById("price1").value ;
    var Quantity1=document.getElementById("qty1").value ;

    var storedata=
    {
        name:name1,
        price:price1,
        Quantity:Quantity1
    }

    store.push(storedata);

    console.log(store);

    window.alert("data saved sucessfully");
}

function delete_item()
{
    store.pop(store);

    window.alert("order deleted sucessfully!!");

    console.log(store);
}