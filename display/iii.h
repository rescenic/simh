/* iii.c: Triple III display interface.

   Copyright (c) 2020, Richard Cornwell.

   Permission is hereby granted, free of charge, to any person obtaining a
   copy of this software and associated documentation files (the "Software"),
   to deal in the Software without restriction, including without limitation
   the rights to use, copy, modify, merge, publish, distribute, sublicense,
   and/or sell copies of the Software, and to permit persons to whom the
   Software is furnished to do so, subject to the following conditions:

   The above copyright notice and this permission notice shall be included in
   all copies or substantial portions of the Software.

   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
   IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
   FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
   RICHARD CORNWELL BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
   IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
   CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

   Except as contained in this notice, the name of Richard Cornwell shall not be
   used in advertising or otherwise to promote the sale, use or other dealings
   in this Software without prior written authorization from Richard Cornwell

*/

#if defined(__cplusplus)
extern "C" {
#endif

extern int iii_init(void *, int);
extern int iii_cycle(int, int);
extern void iii_point(int, int, int);
extern void iii_draw_line(int x1, int y1, int x2, int y2, int l);

#if defined(__cplusplus)
}
#endif
