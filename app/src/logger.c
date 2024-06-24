#include <zephyr/kernel.h>
#include <zephyr/logging/log.h>

LOG_MODULE_REGISTER(l, LOG_LEVEL_INF);

void logger_log(const char * msg)
{
	// just print
	// printk("%s\n", msg);

	/* The Golioth logging backend will send this message to the Golioth cloud */
	LOG_INF("%s", msg);
}
