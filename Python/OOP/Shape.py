class Point:
    # x, y: positive
    def __init__(self, x=0, y=0):
        self.x = x
        self.y = y

    def setx(self, x):
        if x < 0: return None
        self.x = x

    def getx(self):
        return self.x

    def sety(self, y):
        if y < 0: return None
        self.y = y

    def gety(self):
        return self.y

    def __str__(self):
        return "x = {0}, y = {1}".format(self.x, self.y)


class Rectangle:
    def __init__(self, p=None, w=0, h=0):
        self.p = p
        self.w = w
        self.h = h

    def setp(self, p):
        if isinstance(p, Point):
            self.p = p

    def getp(self):
        return self.p

    def setw(self, w):
        if w < 0: return None
        self.w = w

    def getw(self):
        return self.w

    def seth(self, h):
        if h < 0: return None
        self.h = h

    def geth(self):
        return self.h

    def area(self):
        return self.w * self.h

    def __str__(self):
        return "p:{0}, w:{1}. h:{2}".format(self.p, self.w, self.h)


if __name__ == '__main__':
    rectangle1 = Rectangle(Point(x=1, y=2), 6, 7)
    print(rectangle1)
    print(rectangle1.area()) # the area of rectangle is computed

    # jinseok ordered coffee looking menu list, and told staff what he wanted
    # object
    # 1) coffee
    # 2) staff
    # 3) menu list
    # 4) jinseok (Person)

    # oop: C++, Java
    # Python: 연구 지향 언어 & 문자열 처리 언어 (빅데이터) & 코딩 테스트

    """
    C char[] vs str
    
    char[] arr = {'a', 'b', 'c'} => "abc" // stack
    String str = "abc" // heap
    """