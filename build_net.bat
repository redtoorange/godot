@rem Build Binaries
call scons platform=windows target=editor module_mono_enabled=yes fast_unsafe=yes d3d12=yes scu_build=yes scu_limit=1024 build_profile="gem_knights_profile.gdbuild"

@rem Generate glue sources
call ./bin/godot.windows.editor.x86_64.mono.exe --headless --generate-mono-glue modules/mono/glue

@rem Build .NET assemblies
call python ./modules/mono/build_scripts/build_assemblies.py --godot-output-dir=./bin --godot-platform=windows --push-nupkgs-local=D:\Workspace\MyLocalNugetSource

