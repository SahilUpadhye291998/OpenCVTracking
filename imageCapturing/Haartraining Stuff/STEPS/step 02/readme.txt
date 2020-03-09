ObjectMarker is a tool which lets you easily create an info file from your collection of images that contains your object you want to train.

Source code is attached that you can change everythinbg to your needs.

The image fromat is fixed to BMP and these images have to be in subfolder "rawdata".

Before you start the program backup (rename) your old "info.txt" because it will be overwritten without asking on startup, even if no rectangles have been added to the list.

The following keys are used:
<Enter> save added rectangles and show next image
<ESC> exit program
<Space> add rectangle to current image
any other key clears rectangle drawing only

Currently two draw directions are possible:
From top left to bottom right or vice versa.

Once such a recangle or "bounding box" is available you can press <Space> to add it to a list of recangles. You might arrange the console window to the "HighGUI" with your image to see the imagefile (recntly) opened and it's rectangle(s) coordinates.
Draw and add as often as you want until you press <Enter>. Only after pressing <Enter> this list is saved to the info file.

If you look into the info file, you'll see data in the following format:
rawdata\<bmp_filename> numOfRec x0 y0 width0 height0 x1 y1 width1 height1...