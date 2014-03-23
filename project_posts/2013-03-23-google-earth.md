Now I’m really excited!  I was looking around to see what sort of gigapixel images I could find.  I found a website with gigapixel timelapse images developed by a project at CMU/NASA.  From there I noticed the goggle earth time machine.  I can’t believe I didn’t think of that right away!  What is the deepest gigapixel image on the planet?  Google Earth!!  I love the time dimension aspect.  I’m not sure how to control it yet.  It brings in so many things.  The influences of humans on the planet being one of the most interesting to me.

I zoomed over to Iceland and was hoping to be able to see the glaciers retreating.  It was disappointing that there were just not enough time points.  In general the different time points were quite different in contrast, color, etc.   I’m sure someone at Google has figured out how to process these images to make them more photographically consistent.  It shouldn’t be that hard to do.  One could choose reference areas that should not change much in contrast and color and use those to calibrate the rest of the images.   Even better would be an algorithm designed to minimize the difference in the color space histograms between time points.   Piece-wise linear color transfer functions could be optimized using gradient decent or some fancier method.

Then I went over to London.  It is wonderful!  There are lots of time points that are all decent (although some processing will still be required).   This whole thing is so obvious now, I’m sure there are many people (at Google for sure) who realize that the user interface to Google Earth is a major limitation.  They must be looking into eye tracking as a possible solution.  It is funny how you hunt around a space of ideas and suddenly find something that seems like you should have just known that was where you needed to be.

I started searching for “eye tracker” and “google earth” together and started to find some things.  Now I see that I should have been looking at keywords like: gaze controlled zoom pan.  It looks like this may still be an open field since I’m only seeing fairly preliminary experiments.  I tried Google scholar, and I’m not see that much there.  Nothing mathematical, which is shocking.   Whether or not a mathematical model would help to optimize a solution here (and of course, being a mathematician, I would guess that it would), there usually is some work on almost every question of interest.  I’m still thinking there must be a lot of research that is being kept under wraps at this point.  I will need to do a lot more searching around.

I see this paper from 2012:
http://web.ist.utl.pt/~antonio.sousa/Thesis/RelatedWork/Abstracts/Large%20Displays/Investigating%20gaze-supported%20multimodal%20pan%20and%20zoom.pdf


There is a youtube video from 3 days ago:
http://www.youtube.com/watch?v=zNpll95MvnE


Here is my new visualization of this piece:

A 5-foot diameter globe with a glowing back projection of the earth on it.  It needs to be small enough to look into the northern hemisphere.
There are pairs of eye holes at various places over the globe that you can peer into.
When you look in you see that part of the earth and you can zoom deeply and pan based on your eye movements.
For some regions there may be a time lapse loop (if the quality of the images is good enough).

I’m thinking of calling this piece Gaia.

Here is another go at the user interface:

Keep it simple stupid (invocation to the gods of KISS).
The simplest thing would be to have a single rate control.
This one control will adjust the global (forgive pun) rate of change in the image (zoom, pan and time lapse).  With one control, you don’t have to figure out which control to use.  Maybe the principle thing to control is how fast things are changing.

One problem with eye tracking technology is that it isn’t that reliable, and it requires calibration.  I have use several eye tracking systems at work, and they do involve setup time.  Most eye trackers are designed to be able to know where on a display the person is looking.   Can I design an algorithm that is more forgiving of noise and doesn’t require calibration?   Perhaps it could be based on relative eye movement vectors averaged over a period of time.  For example, the change in the image translation would be equal to the change in the average eye movement vector.  The same could be done for zoom, the change in the eye movement length would be equal to the change in zoom level.  An increase in the average eye movement length would cause an increase in the zoom level.


