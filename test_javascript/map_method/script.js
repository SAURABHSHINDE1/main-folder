const orders = [
    { orderId: 1, items: [20, 35, 15] }, 
    { orderId: 2, items: [10, 25, 40] }, 
    { orderId: 3, items: [5, 100] } 
    ];


var finalwithtax=orders.map( cost=>
    {
         var totalcost=0;
         cost.items.forEach(item=>
        {
            totalcost= totalcost+item;

        });

        return(
            {
                orderId:cost.orderId,
                totalcost:totalcost+(totalcost*0.08)
            }
        )
    }
);


console.log(finalwithtax);

const students = [
    { name: 'Alice', grade: 88 },
    { name: 'Bob', grade: 72 },
    { name: 'Charlie', grade: 95 }
    ];

    var studentdata=students.map( stud =>
    {
        var grade='';
        if(stud.grade > 90)
            {
                grade='a';
            }
            else if(stud.grade > 80)
            {
                grade='b';
            }
            else if(stud.grade > 70)
            {
                grade='c';
            }
            else if(stud.grade > 60)
            {
                grade='d';
            }
            else
            {
                grade='f';
            }

        return(
            {
                name:stud.name,
                grade:grade
            }
        )
    }
);

console.log(studentdata);


const employees = [
    { name: 'John', salary: 50000 },
    { name: 'Emma', salary: 60000 },
    { name: 'David', salary: 45000 }
    ];

    var empdata=employees.map( emp =>
    {
        
        return(
            {
                name:emp.name,
                bonous: empbonous=emp.salary + emp.salary * 0.15
            })

    }
    );


    console.log(empdata);