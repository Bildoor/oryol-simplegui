# oryol-simplegui
This is just a super simple wrapper for ImGui

### How to integrate into your Oryol project:

First, add a new import to the fips.yml file of your project:

```yaml
imports:
    oryol-imgui:
        git:https://github.com/Bildoor/oryol-simplegui.git
```

Next, add a new dependency 'simplegui' to your app's CMakeLists.txt file:

```cmake
fips_begin_app(MyApp windowed)
    ...
    fips_deps(simplegui)
fips_end_app()
```

Run 'fips gen' to fetch the new dependencies and rebuild the build files:

```bash
> ./fips gen
...
```
