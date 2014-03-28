It has taken the whole 3 weeks that I've been thinking about this to get to the right design.  It has been a strange path.  I will continue to work on the gaze tracker and ganzfeld ideas, but not for this contest.  They have turned into interesting research projects!

Here is the idea, and I'm sticking with it:

It is often said that information and social network technologies have created a global village.  There is a sense that distance is irrelevant and the huge number of people on the planet is likewise irreverent.  The dynamics have returned to that of small groups interacting in a shared living environment.  There is a village focused on anything that can be imagined.  Although people may belong to several villages, the villages themselves often do not interact directly as groups.  Within these wonderful collaborative environments, there is still a level of isolation.

Can I piece of art be made that symbolizes this paradox, and tries in a small way to resolve it?

In a darkened room there is a large (bigger than human scale) glowing earth (as seen from space, spinning, with clouds moving).  As you get closer to the earth you see your own face (in real time) overlay on the earth (becomes larger and more opaque as you watch).  When you say a word, that word appears next to you on the globe.  Words move away from your face and collide with words from other people to generate pictures and videos (using Google image search, and youtube – with filtering!!).  Other words related to the words that are coming together start to appear (words start small and get bigger if they collide with other semantically related words).  Maybe Google+ groups related to these word clusters could be used to bring up other words, images or videos.  The words and faces for people who cause a lot of new words to appear and grow and combine are saved so that they can reappear later even with that person is not present, if triggered by words spoken by people who are there.  The whole thing could also be available as a Google hangout so people could interact with it remotely.

When a word is the name of a place, the globe could spin so that place faces the person, and then images and videos related to that place could come up.

I like this plan for a number of reasons.  One is that I have learned from previous interactive installations is that most people have a big fear of being creative on the spot.  A few people will love it and hang out around the installation to encourage other people.  Most people feel that they can't perform in public or on camera.  It is very important to lower the barrier by making the interaction very simple, limited and structured.  It is easier to come up with one creative word than to make a drawing, an idea, or even a creative sentence.  


The implementation, although not simple, is fairly straight forward (easy to say!).  The globe is a rear projection on a fabric cylinder.  Directional microphones and video cameras point down in all directions from the ceiling at the center of the cylinder.   There is plenty of open source openGL code to make an earth and project textures on it.  I can produce the Google image and youtube searches I need easily enough (if I am allowed to make a few very kind robots).  I have used openCV in several previous installations to find faces and do things with them, record video, make nice looking text, etc.  I even did a sort of similar demo called “powerless-point”.  You would give a talk to a group of people and powerless-point would make you a visual presentation on the fly based on Google image searches on the words you were saying.  One day something like that could maybe seriously work, but my demo caused tons of laughter because of the strange visual puns and interpretations that came up.  (I also used some fancy algorithms to attempt to find a sequence of images that were note only related in meaning due to overlapping search terms, but also visually similar, and then make fluid visual/semantic transitions.)