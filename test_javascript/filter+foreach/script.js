var array=[
    {
        name:"John Doe",
        task:"complete the Wether app",
        status:"completed",
    },
    {
        name:"Jane Doe",
        task:"fix the bug in the app",
        status:"pending",
    },
    {
        name:"David Doe",
        task:"implement the new feature",
        status:"pending",
    },
    {
        name:"Emily Doe",
        task:"test the app",
        status:"completed",
    },
    {
        name:"Michael Doe",
        task:"update the documentation",
        status:"pending",
    },
    {
        name:"Michael Doe",
        task:"update the documentation",
        status:"pending",
    }

]

function task()
{
    var filter_task=array.filter(task=>task.status=="pending");
    console.log(filter_task);


    filter_task.forEach(sort=>
    {
        var wrapper=document.querySelector(".wrapper");

        var container=document.createElement("div");
        container.className="container";
        wrapper.appendChild(container);

        var name=document.createElement("h1");
        name.textContent=sort.name;
        container.appendChild(name);

        var task=document.createElement("h2");
        task.textContent=sort.task;
        container.appendChild(task);
    }
    )
}