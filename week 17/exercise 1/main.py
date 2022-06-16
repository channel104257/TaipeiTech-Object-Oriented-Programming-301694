url = "https://news.ntut.edu.tw/p/422-1000-1085.php"

def get5news(url):
    page = requests.get(url).text
    doc = soup(page, 'html.parser')
    a = []
    items = [elem for elem in doc.find_all('div', class_='d-txt', limit = 15)]
    
    for item in items: 
        a.append(item.text)
    for aitem in a:
        print(aitem.strip())
                
get5news(url)
