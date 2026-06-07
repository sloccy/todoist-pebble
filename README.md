# Todoist Mini

An unofficial Pebble watchapp for [Todoist](https://todoist.com). Browse your projects, check off tasks, and add new ones by voice — all from your wrist.

## Download

Grab the latest compiled `.pbw` from the [Releases page](../../releases/latest) and sideload it onto your watch.

## Features

- Browse all your Todoist projects
- View tasks with due dates and sub-task indentation
- Complete tasks with a confirmation animation
- Complete recurring tasks (they disappear without being permanently deleted)
- Add new tasks to any project by voice (mic-capable watches only)
- Inbox sorted by due date; tasks due more than a month away are hidden to reduce clutter
- Scrolling text for task names that overflow the screen width
- Customizable interface colors and scroll speed via the Pebble app settings

## Supported watches

All Pebble models: Pebble (aplite), Pebble Time (basalt), Pebble Time Round (chalk), Pebble 2 (diorite/gabbro), Pebble Time 2 (emery), Pebble Steel (flint).

## Setup

1. Open the Pebble app → connect your watch → tap the gear icon on Todoist Mini
2. Enter your [Todoist API token](https://todoist.com/app/settings/integrations/developer)
3. Save — the app will sync your projects automatically

## Development

Install the [coredevices pebble-tool](https://github.com/coredevices/pebble-tool) (Python 3):

```bash
pip install git+https://github.com/coredevices/pebble-tool.git
pebble sdk install latest
```

Build and sideload:

```bash
pebble build
# then push the .pbw to your watch via Sideload Helper or similar
adb push build/todoist-pebble.pbw /sdcard/Download/
```

CI builds and publishes the `.pbw` automatically on every push to `master`.

## Credits

Based on [Todoist Mini](https://github.com/nicowillis/pebble-todoist) by Konrad Iturbe.
