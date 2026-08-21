-- Language-neutral helpers can be loaded on both sides through type="shared".

function examplePositionText(position)
    return string.format("%.2f, %.2f, %.2f", position.x, position.y, position.z)
end

function exampleColorText(color)
    return rgbToHex(color.r, color.g, color.b)
end
