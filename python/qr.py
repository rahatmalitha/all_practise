import qrcode

data = "01626781528"
qr = qrcode.make(data)

qr.save("qrcode.png")
qr.show()
print("Generated")