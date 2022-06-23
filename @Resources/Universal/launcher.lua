PROPERTIES = 
{

}

function Initialize()
	filetype = SKIN:GetVariable('LauncherType')
	if (filetype == nil) then
		return
	end
	radius = SKIN:GetVariable('Rad')
	file = SKIN:GetVariable('@').."Universal/"..filetype..".txt"
	apps = {}
	for outer in io.lines(file) do
		table.insert(apps, {})
		for inner in outer:gmatch("[^,]+") do
			innerSub = inner:gsub("^ +","")
			table.insert(apps[#apps], innerSub)
		end
	end

	length=(#apps<=16) and #apps or 16
  
	for k,m in ipairs(apps) do
		if (SKIN:GetVariable('Wheel','0')=='1') then
			SKIN:Bang('!SetOption', 'MeterApp'..k, 'X', '[&MeasureScript:GetX('..k..')]')
			SKIN:Bang('!SetOption', 'MeterApp'..k, 'Y', '[&MeasureScript:GetY('..k..')]')
		end
	end

	for k=length+1,16,1 do
		SKIN:Bang('!SetOption', 'MeterApp'..k, 'W', '0')
		SKIN:Bang('!SetOption', 'MeterApp'..k, 'H', '0')
	end
end

function Update()
	return 1
end

function Get(i)
	return apps[i][2]
end

function GetX(i)
	if (length == 0) then
		length = 16
	end
	return radius + math.floor(radius * math.cos(i*6.28318531/length))
end

function GetY(i)
	if (length == 0) then
		length = 16
	end
	return radius + math.floor(radius * math.sin(i*6.28318531/length))
end