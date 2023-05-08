#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: the name of the file.
 * @text_content:Is the NULL terminated string to add to the end of the file.
 * Return: If the function fails or filename is NULL - -1 else on success
 *         if text_content is NULL do not add anything to the file 1 if file
 *         exists or -1 if it does not exist
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int w, a, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	w = open(filename, O_WRONLY | O_APPEND);
	a = write(w, text_content, len);

	if (w == -1 || a == -1)
		return (-1);

	close(w);

	return (1);
}
