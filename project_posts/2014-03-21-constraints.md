After re-reading yesterday’s post, I am thinking about how to make a more seamless merger of the slow and fast pan/zoom mechanisms.  What if there was a magnifier window that moved around and got bigger and smaller.  If the participant is looking mostly in the magnifier window for some period of time, the window expands to cover the whole frame and a new magnifier opens up at the current eye gaze position. 

A problem with yesterday’s idea is that the image is always moving (even though slowly), which could be uncomfortable.  In this version, so long as you are looking inside the magnifier window, everything stays put, only the magnifier window grows bigger.  After a couple of fixations outside the window it should move to the new place, the question is how.  I smooth movement is going to disrupt what you are looking at.  Maybe the window shrinks and new one opens at the new location slowly enough that center of gaze is always pointing at the same part of the gigapixel image during the process.

Another way to pose the problem would be to list a set of constraints or desired properties that characterize a good solution.  Here is an attempt to do that:

Perceptual comfort for central vision:
The image around the current center of gaze should either not change at all, or should change smoothly for a short period of time.

Perceptual distraction:
The image outside of central vision should not change suddenly.


Perception of agency:
The image should respond to changes in eye position with a low latency.

Responsive to desired level of detail:
The user knows when they would like to zoom in, zoom out or stay at the current zoom.  This is an important and real psychological variable.
There is a function of recent eye position history (and the image itself, or eye position histories from other people) that best predicts this variable.

Inhibition of return:
Once the user has looked at an area at the current zoom or any zoom out from the current zoom, they are less likely to want to return to that area.


This is a first attempt at making up some constraints, and I think I could refine this a lot.  I like this approach because it keeps me from jumping into the algorithm and confusing the goals with the means to achieve them.

I know there has been research into determining which image positions are most likely to be at the center of gaze, although I have some doubts about using purely mathematical methods.  Some salient eye positions will depend on the semantic and/or emotional content or meaning of the image.  Also things like faces have a specific scan path and points of interest.  






