function examplePositionText(position)
{
	return format("%.2f, %.2f, %.2f", position.x, position.y, position.z);
}

function exampleColorText(color)
{
	return rgbToHex(color.r, color.g, color.b);
}
