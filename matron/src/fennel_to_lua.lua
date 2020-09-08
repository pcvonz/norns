function translate_fennel(fennel)
	local f = require("fennel")
	local lua = f.compileString(fennel)
	return lua;
end
