proc/discord_init(url)
	ASSERT(istext(url))
	call("libdmcurl.so", "ldmc_init")(url)

proc/discord_send(content, username, avatar_url)
	call("libdmcurl.so", "ldmc_send")("{\"content\":\"[content]\",\"username\":\"[username]\",\"avatar_url\":\"[avatar_url]\"}")

proc/discord_quit()
	call("libdmcurl.so", "ldmc_quit")()
