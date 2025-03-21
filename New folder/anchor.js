// Define an object with services
const services = [
    {
        id: 1,
        name: "Web Development",
        description: "Build responsive and functional websites.",
        detailsPage: "web-development.html"
    },
    {
        id: 2,
        name: "Mobile App Development",
        description: "Create mobile apps for Android and iOS.",
        detailsPage: "mobile-app-development.html"
    },
    {
        id: 3,
        name: "SEO Optimization",
        description: "Improve your website's ranking on search engines.",
        detailsPage: "seo-optimization.html"
    },
    {
        id: 4,
        name: "Digital Marketing",
        description: "Reach your audience through online marketing strategies.",
        detailsPage: "digital-marketing.html"
    },
    // Add more services here as needed
];

// Function to create the service grid
function createServiceGrid() {
    const gridContainer = document.getElementById("service-grid");

    services.forEach(service => {
        const serviceDiv = document.createElement("div");
        serviceDiv.classList.add("service-item");
        
        // Create the title
        const serviceTitle = document.createElement("div");
        serviceTitle.classList.add("service-title");
        serviceTitle.innerText = service.name;

        // Create the description
        const serviceDescription = document.createElement("div");
        serviceDescription.classList.add("service-description");
        serviceDescription.innerText = service.description;

        // Append title and description to the service item
        serviceDiv.appendChild(serviceTitle);
        serviceDiv.appendChild(serviceDescription);

        // Add an event listener to navigate to the service details page
        serviceDiv.addEventListener("click", () => {
            window.location.href = service.detailsPage; // Navigate to the service details page
        });

        // Append the service item to the grid container
        gridContainer.appendChild(serviceDiv);
    });
}

// Call the function to create the grid
window.onload = createServiceGrid;