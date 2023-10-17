#include "main.h"

/**
 * jack_bauer - print every minute of a day
 *
 * Return: void
 */

void jack_bauer(void)
{
	int hours, hour, minutes, minute;

	for (hours = 0; hours <= 2; hours++)
	{
		for (hour = 0; hour <= 9; hour++)
		{
			if (hours >= 2 && hour > 3)
				break;

			for (minutes = 0; minutes <= 5; minutes++)
			{
				for (minute = 0; minute <= 9; minute++)
				{
					_putchar(48 + hours);
					_putchar(48 + hour);
					_putchar(':');
					_putchar(48 + minutes);
					_putchar(48 + minute);
					_putchar('\n');
				}
			}
		}
	}
}
