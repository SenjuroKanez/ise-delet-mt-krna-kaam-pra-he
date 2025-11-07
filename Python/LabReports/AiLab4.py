#Write a Python class named Circle constructed by a radius and two methods which will
#compute the area and the perimeter of a circle.
class Circle:
    def __init__(self, radius):
        self.radius = radius

    def area(self):
        return 3.14159 * (self.radius ** 2)

    def perimeter(self):
        return 2 * 3.14159 * self.radius

Circle1 = Circle(5)
print("Area:", Circle1.area())
print("Perimeter:", Circle1.perimeter())

# Write a Python class to implement pow(x, n). Do not use built-in math.pow() function for
# this code. Also handle this code for all +ve as well as -ve numbers.

class Power:
    def __init__(self, x, n):
        self.x = x
        self.n = n

    def compute(self):
        if self.n >= 0:
            result = 1
            for _ in range(self.n):
                result *= self.x
            return result
        else:
            result = 1
            for _ in range(-self.n):
                result *= self.x
            return 1 / result
    
power1 = Power(2, -3)
print("Result:", power1.compute())


class Item:
    def __init__(self, name, description, price):
        self.name = name
        self.description = description
        self.price = price

    def viewdescription(self):
        return f"Item: {self.name}\nDescription: {self.description}\nPrice: ${self.price:.2f}"

    def addtoshoppingbasket(self, quantity):
        return f"Added {quantity} of {self.name} to the shopping basket."

    def removefromshoppingbasket(self, quantity):
        return f"Removed {quantity} of {self.name} from the shopping basket."


class Mp3(Item):
    def __init__(self, artist, duration, name, description, price):
        super().__init__(name, description, price)
        self.artist = artist
        self.duration = duration

    def play(self):
        return f"Playing {self.name} by {self.artist}, Duration: {self.duration} minutes."

    def download(self):
        return f"Downloading {self.name} by {self.artist}."


class Book(Item):
    def __init__(self, genre, numberofpages, name, description, price):
        super().__init__(name, description, price)
        self.genre = genre
        self.numberofpages = numberofpages

    def previewcontent(self):
        return f"Previewing {self.name}, Genre: {self.genre}."


class DvD(Item):
    def __init__(self, certificate, duration, actors, name, description, price):
        super().__init__(name, description, price)
        self.certificate = certificate
        self.duration = duration
        self.actors = actors

    def viewtrailer(self):
        return f"Viewing trailer of {self.name}, Certificate: {self.certificate}."
        

# Example usage:
mp3_item = Mp3("Artist Name", 4.5, "Song Title", "A great song", 1.29)
print(mp3_item.play())
book_item = Book("Fiction", 300, "Novel", "Book Title", "An interesting book")
print(book_item.previewcontent())
dvd_item = DvD("PG-13", 120, ["Actor1", "Actor2"], "Movie Title", "An exciting movie", 14.99)
print(dvd_item.viewtrailer())
