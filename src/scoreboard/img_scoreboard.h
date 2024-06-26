#ifndef IMG_SCOREBOARD_H
#define IMG_SCOREBOARD_H

#include "scoreboard_interface.h"

// A scoreboard using graphical images
class ImgScoreboard : public IScoreboard
{
	friend class ScoreboardFactory;
public:

	void DeleteInstance();

	void Invalidate();

	bool RepaintIfNeeded();

	bool ChangeVisibility(bool bVisible);

	bool set_digit(unsigned int uValue, WhichDigit which);

	bool is_repaint_needed();

	bool get_digit(unsigned int &uValue, WhichDigit which);

private:
	ImgScoreboard();

	static IScoreboard *GetInstance(bool bThayers);

	// is the current game Thayer's Quest? if so, we need to draw the scoreboard differently
	bool m_bThayers;

};

#endif // IMG_SCOREBOARD_H
