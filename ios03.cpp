//typealias
typealias Feet = Int

var distance: Feet = 100
print(distance)

typealias Feett = Float

var dis2: Feett = 100.89
print(dis2)

var div:Bool
div = true
print(div)

var c:Character
c = "a"
print(c)


var s:String = "Godzilla"
var a:Float = 1000.0
print("Value of \(s) is more than \(a) millions")

//optional

var myString:String?
myString = "Swift 4 Programming!"

if myString != nil {
   print( myString! /*Forced Unwrapping*/)
} else {
   print("myString has nil value")
}

//Automatic Unwrapping

var st:String!
st = "Swift 4 Programming!"

if st != nil{
    print(st)
}
else{
    print("Null Value")
}

var inv:Int!
inv = 123
if inv != nil{
    print(inv)
}
else{
  print("Nill value")
}

var error505 = (501,"Not implimented")
print("The error code is \(error505.0) and defination is \(error505.1)")

var orgin = (x:0, y:0)

var xyline = orgin

xyline.x = 3
xyline.y = 5

print(orgin)
print(xyline)

var person = ("sabuj", "sarker")
print("The value is \(person.0) and \(person.1)")

var point = (0,0,0,0,0,0)
point.0 = 10
point.1 = 15
point.2 = 10
point.3 = 10
point.4 = 15
point.5 = 10
var sum = point.0 + point.1 + point.2 + point.3 + point.4 + point.5
print(sum)

var pointt = (xx: 0, yy: 0 )

var orginn = pointt

orginn.xx = 5
orginn.yy = 10

print(pointt)
print(orginn)

//Tupler Function karisma

typealias tuplevar = (String , String )

func tuple_karisma(_ tupler : tuplevar ) -> tuplevar {

    var interchange = tupler
    interchange.0 = "x"
    interchange.1 = "y"
    return interchange
}

var tuplevariable = ("a", "b")

var returnfrom = tuple_karisma(tuplevariable)

print("Before Go To Function \(tuplevariable) After Function Calling \(returnfrom)")

//Swap Two Value Using Tuple
//swap two value by using truple

typealias swp = (Int, Int)

func swapvalue(_ third: swp) -> swp{
    var swphelper = third
    swphelper.0 = third.1
    swphelper.1 = third.0
    return swphelper
}

var val = (x: 5, y: 6)
var vaqlchange = swapvalue(val)
print(val)
print("(x: \(vaqlchange.0), y:\(vaqlchange.1))")









