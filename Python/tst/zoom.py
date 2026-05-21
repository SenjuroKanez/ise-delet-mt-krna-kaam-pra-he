from moviepy.editor import VideoFileClip, CompositeVideoClip, vfx

# -------------------------
# CONFIG
# -------------------------
INPUT_VIDEO = "Win.mp4"
 # your file
OUTPUT_VIDEO = "final_output.mp4"

START_ZOOM = 8.2       # when zoom begins
PORTRAIT_W = 1080
PORTRAIT_H = 1920      # 9:16 output
# -------------------------

clip = VideoFileClip(INPUT_VIDEO)

# ----- STEP 1: FIT VIDEO INSIDE 9:16 CANVAS (letterbox-style) -----

# Calculate aspect ratios
video_ratio = clip.w / clip.h
target_ratio = PORTRAIT_W / PORTRAIT_H

# Fit video fully inside (no cropping)
if video_ratio > target_ratio:
    # Video is wider → scale by width
    base_scale = PORTRAIT_W / clip.w
else:
    # Video is taller → scale by height
    base_scale = PORTRAIT_H / clip.h

base_clip = clip.resize(base_scale)

# Centered placement
x_center = (PORTRAIT_W - base_clip.w) / 2
y_center = (PORTRAIT_H - base_clip.h) / 2


# ----- STEP 2: ZOOM LOGIC -----

# Calculate final scale needed to completely fill vertical height
final_scale_needed = PORTRAIT_H / (clip.h * base_scale)

def zoom_transform(get_frame, t):
    if t < START_ZOOM:
        # Before 8.2 sec → no zoom, original fitted video
        return base_clip.get_frame(t)
    
    # After 8.2 sec → progress % of zoom
    progress = (t - START_ZOOM) / (clip.duration - START_ZOOM)
    
    # Linear zoom from base_scale → final fill scale
    scale = base_scale + progress * (final_scale_needed - base_scale)
    
    zoomed = clip.resize(scale).get_frame(t)
    return zoomed


zoomed_clip = clip.fl(zoom_transform)

# Reposition zoomed clip into canvas center
final_clip = zoomed_clip.set_position(("center", "center")).on_color(
    size=(PORTRAIT_W, PORTRAIT_H),
    color=(0, 0, 0),
    col_opacity=1
)

# ----- STEP 3: OUTPUT -----
final_clip.write_videofile(
    OUTPUT_VIDEO,
    fps=clip.fps,
    codec="libx264",
    audio_codec="aac"
)

print("DONE. Saved as:", OUTPUT_VIDEO)
