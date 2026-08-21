from PIL import Image, ImageEnhance

ASCII_CHARS = "@$#*+=-:. "


def image_to_ascii(
    image_path,
    output_width=120,
    contrast=1.5
):
    image = Image.open(image_path).convert("L")

    width, height = image.size

    aspect_ratio = height / width

    output_height = int(
        output_width * aspect_ratio * 0.50
    )

    image = image.resize(
        (output_width, output_height)
    )

    image = ImageEnhance.Contrast(image).enhance(contrast)

    pixels = list(image.getdata())

    chars = []

    for pixel in pixels:
        index = int(
            pixel / 256 * len(ASCII_CHARS)
        )

        index = min(
            index,
            len(ASCII_CHARS) - 1
        )

        chars.append(ASCII_CHARS[index])

    ascii_image = []

    for y in range(output_height):
        start = y * output_width
        end = start + output_width

        ascii_image.append(
            "".join(chars[start:end])
        )

    return "\n".join(ascii_image)

ascii_art = image_to_ascii(
    "rahat.jpg",
    output_width=120,
    contrast=1.5
)

print(ascii_art)

with open("ascii_art.txt", "w", encoding="utf-8") as file:
    file.write(ascii_art)

print("\nASCII saved to ascii_art.txt")