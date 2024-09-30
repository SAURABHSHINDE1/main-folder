var userdeatil=[
    {
        name:"dipak",
        total_payment:2000,
        payment_status:"not paid",
        due_payment:1000,
        last_payment_date:"2022-04-01"
    },
    {
        name:"ravi",
        total_payment:3000,
        payment_status:"not paid",
        due_payment:2000,
        last_payment_date:"2022-04-15"
    },
    {
        name:"ramesh",
        total_payment:1500,
        payment_status:"paid",
        due_payment:0,
        last_payment_date:"2022-04-10"
    },
    {
        name:"ramesh",
        total_payment:1500,
        payment_status:"not paid",
        due_payment:1500,
        last_payment_date:"2022-04-25"
    },

    {
        name:"saurabh",
        total_payment:1500,
        payment_status:"not paid",
        due_payment:1000,
        last_payment_date:"2022-04-25"
    },
    
]

function search()
{
    var userinput=document.getElementById("id").value ;
    var searchdata=userdeatil.filter(detail=>
    {
        return detail.payment_status =="not paid";
        
    }

    );

    console.log(searchdata);

    searchdata.forEach( value =>
    {  
        var wrapper=document.querySelector(".wrapper"); 

        var card=document.createElement("div");
        card.className="card";
        wrapper.appendChild(card);

        var name=document.createElement("h1");
        name.textContent=value.name;
        card.appendChild(name);

        var payment=document.createElement("h2");
        payment.textContent="Total Payment : "+value.total_payment;
        card.appendChild(payment);
        
        var due=document.createElement("h2");
        due.textContent="Due Payment : "+value.due_payment;
        card.appendChild(due);

        var status=document.createElement("h2");
        status.textContent="Payment Staus: "+value.payment_status;
        card.appendChild(status);

        var date=document.createElement("h2");
        date.textContent="Last Payment Date: "+value.last_payment_date;
        card.appendChild(date);

    }
    )
}