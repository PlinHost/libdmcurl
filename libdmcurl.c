#include <curl/curl.h>

CURL* curl = NULL;

void ldmc_init(int argc, char *argv[1]) {
	curl_easy_cleanup(curl);
	curl = curl_easy_init();
	curl_easy_setopt(curl,CURLOPT_URL,argv[0]);
}

void ldmc_send(int argc, char *argv[1]) {
	curl_easy_setopt(curl,CURLOPT_POSTFIELDS,argv[0]);
	curl_easy_perform(curl);
}

void ldmc_quit() {
	curl_easy_cleanup(curl);
}
