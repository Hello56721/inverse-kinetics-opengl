#ifndef INCLUDED_window_h
#define INCLUDED_window_h

namespace window
{
	// Creates the window
	void create();

	// Is the window open?
	bool is_open();

	// Update the window.
	void update();

	// Destroy the window.
	void destroy();
}

#endif