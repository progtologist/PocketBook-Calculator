#ifndef SCREENBUF_RENDERER_H
#define SCREENBUF_RENDERER_H
#include "screenbuf.hpp"
#include "inkview.h"
#include <utility>

using std::pair;

class ScreenbufRenderer {
public:
	ScreenbufRenderer(Screenbuf* screenbuf, ifont *font) {
		m_screenbuf = screenbuf;
		m_font = font;
		c_line_height = TextRectHeight(20, "A", 0);
		m_sel_pos1 = make_pair(0, 0);
		m_sel_pos2 = make_pair(0, 0);
		m_selection = false;
	}
	
	void render() {
		for(unsigned i = 0; i < m_screenbuf->size(); i++)
			DrawString(
				c_screen_padding, 
				(c_line_height+c_line_spacing)*i + c_screen_padding,
				(*m_screenbuf)[i].c_str()
			);
		FullUpdate();
	}
	
	void selection(pair<unsigned, unsigned> p1, pair<unsigned, unsigned> p2) {
		
	}
	
private:
	const c_screen_padding = 4;
	const c_line_spacing = 2;
	unsigned c_line_height;
	
	Screenbuf* m_screenbuf;
	ifont *m_font;
	
	pair<unsigned, unsigned> m_sel_pos1;
	pair<unsigned, unsigned> m_sel_pos2;
	bool m_selection;
};

#endif