const booksByCategory = [
   {
       category: "Riqueza",
       books: [
           {
               title: "Os segredos da mente milionária",
               author: "T. Harv Eker",
           },
           {
               title: "O homem mais rico da Babilônia",
               author: "George S. Clason",
           },
           {
               title: "Pai rico, pai pobre",
               author: "Robert T. Kiyosaki e Sharon L. Lechter",
           },
       ],
   },
   {
       category: "Inteligência Emocional",
       books: [
           {
               title: "Você é Insubstituível",
               author: "Augusto Cury",
           },
           {
               title: "Ansiedade – Como enfrentar o mal do século",
               author: "Augusto Cury",
           },
           {
               title: "Os 7 hábitos das pessoas altamente eficazes",
               author: "Stephen R. Covey",
           },
       ],
   },
];

console.log(`Categories:`);
console.log(listCategoryAndBooks());

console.log(`Authors:`);
console.log(listAuthors());

console.log(`Books:`);
console.log(listBooksByAuthor("George S. Clason"));

function listCategoryAndBooks()
{
    for( item of booksByCategory )
    {
        console.log(`${item.category}: ${item.books.length} Books`);
    }
}

function listAuthors()
{
    let authors = [];

    for( item of booksByCategory )
    {
        for( value of item.books )
        {
            if( !authors.includes(value.author))
            {
                console.log(value.author);
                authors.push(value.author);
            }
        }
    }
}

function listBooksByAuthor(author)
{
    for( item of booksByCategory )
    {
        for( value of item.books )
        {
            if( author === value.author )
            {
                console.log(value.title);
            }
        }
    }
}