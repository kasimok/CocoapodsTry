dependencies: servers/rendering/renderer_rd/storage_rd/utilities.cpp \
  servers/rendering/renderer_rd/storage_rd/utilities.h \
  core/templates/rid_owner.h core/os/memory.h core/error/error_macros.h \
  core/typedefs.h platform/ios/platform_config.h core/error/error_list.h \
  core/templates/safe_refcount.h core/os/spin_lock.h \
  core/string/print_string.h core/variant/variant.h \
  core/input/input_enums.h core/io/ip_address.h core/string/ustring.h \
  core/string/char_utils.h core/string/char_range.inc \
  core/templates/cowdata.h core/templates/vector.h \
  core/templates/search_array.h core/templates/sort_array.h \
  core/variant/array.h core/math/aabb.h core/math/plane.h \
  core/math/vector3.h core/math/math_funcs.h core/math/math_defs.h \
  core/math/random_pcg.h thirdparty/misc/pcg.h core/math/basis.h \
  core/math/quaternion.h core/math/color.h core/math/face3.h \
  core/math/transform_3d.h core/math/projection.h core/math/vector4.h \
  core/math/rect2.h core/math/vector2.h core/math/rect2i.h \
  core/math/vector2i.h core/math/transform_2d.h core/math/vector3i.h \
  core/math/vector4i.h core/object/object_id.h core/os/keyboard.h \
  core/string/node_path.h core/string/string_name.h core/os/mutex.h \
  core/templates/paged_allocator.h core/core_globals.h \
  core/templates/rid.h core/variant/callable.h core/templates/list.h \
  core/variant/dictionary.h core/templates/hash_set.h \
  core/templates/hash_map.h core/templates/hashfuncs.h \
  core/templates/pair.h core/templates/oa_hash_map.h \
  servers/rendering/storage/utilities.h servers/rendering_server.h \
  core/io/image.h core/io/resource.h core/io/resource_uid.h \
  core/object/ref_counted.h core/object/class_db.h \
  core/object/method_bind.h core/variant/binder_common.h \
  core/object/object.h core/extension/gdextension_interface.h \
  core/object/message_queue.h core/os/thread_safe.h \
  core/templates/local_vector.h core/os/rw_lock.h \
  core/templates/rb_map.h core/variant/callable_bind.h \
  core/templates/simple_type.h core/variant/method_ptrcall.h \
  core/variant/type_info.h core/variant/variant_internal.h \
  core/object/callable_method_pointer.h core/disabled_classes.gen.h \
  core/object/gdvirtual.gen.inc core/object/script_instance.h \
  core/templates/self_list.h core/math/geometry_3d.h \
  core/variant/typed_array.h servers/display_server.h core/input/input.h \
  core/input/input_event.h core/templates/rb_set.h core/os/os.h \
  core/config/engine.h core/os/main_loop.h core/io/logger.h \
  core/io/file_access.h core/io/compression.h \
  core/io/remote_filesystem_client.h core/os/time_enums.h \
  servers/rendering/rendering_device.h \
  servers/rendering/renderer_rd/storage_rd/../environment/fog.h \
  servers/rendering/environment/renderer_fog.h \
  servers/rendering/renderer_rd/cluster_builder_rd.h \
  servers/rendering/renderer_rd/shaders/cluster_debug.glsl.gen.h \
  servers/rendering/renderer_rd/shader_rd.h core/string/string_builder.h \
  servers/rendering/renderer_rd/shaders/cluster_render.glsl.gen.h \
  servers/rendering/renderer_rd/shaders/cluster_store.glsl.gen.h \
  servers/rendering/renderer_rd/storage_rd/material_storage.h \
  servers/rendering/renderer_rd/storage_rd/texture_storage.h \
  core/templates/paged_array.h \
  servers/rendering/renderer_rd/shaders/canvas_sdf.glsl.gen.h \
  servers/rendering/renderer_rd/storage_rd/forward_id_storage.h \
  servers/rendering/rendering_server_default.h core/os/thread.h \
  core/templates/command_queue_mt.h core/os/semaphore.h \
  servers/rendering/renderer_canvas_cull.h \
  servers/rendering/renderer_compositor.h \
  servers/rendering/environment/renderer_gi.h \
  servers/rendering/renderer_canvas_render.h \
  servers/rendering/rendering_method.h \
  servers/rendering/storage/render_scene_buffers.h \
  servers/xr/xr_interface.h servers/xr_server.h \
  servers/rendering/storage/camera_attributes_storage.h \
  servers/rendering/storage/light_storage.h \
  servers/rendering/storage/material_storage.h \
  servers/rendering/storage/mesh_storage.h \
  servers/rendering/storage/particles_storage.h \
  servers/rendering/storage/texture_storage.h \
  servers/rendering/renderer_viewport.h \
  servers/rendering/renderer_scene_render.h \
  servers/rendering/renderer_geometry_instance.h \
  servers/rendering/storage/environment_storage.h \
  servers/rendering/renderer_scene_cull.h core/math/dynamic_bvh.h \
  core/templates/bin_sorted_array.h core/templates/pass_func.h \
  servers/rendering/renderer_scene_occlusion_cull.h \
  servers/rendering/rendering_server_globals.h \
  servers/server_wrap_mt_common.h servers/rendering/shader_compiler.h \
  servers/rendering/shader_language.h core/object/script_language.h \
  core/doc_data.h core/io/xml_parser.h scene/resources/shader_include.h \
  core/io/resource_loader.h core/object/worker_thread_pool.h \
  core/io/resource_saver.h servers/rendering/shader_warnings.h \
  servers/rendering/renderer_rd/environment/gi.h \
  servers/rendering/renderer_rd/environment/sky.h \
  servers/rendering/renderer_rd/pipeline_cache_rd.h \
  servers/rendering/renderer_rd/shaders/environment/sky.glsl.gen.h \
  servers/rendering/renderer_rd/shaders/environment/gi.glsl.gen.h \
  servers/rendering/renderer_rd/shaders/environment/sdfgi_debug.glsl.gen.h \
  servers/rendering/renderer_rd/shaders/environment/sdfgi_debug_probes.glsl.gen.h \
  servers/rendering/renderer_rd/shaders/environment/sdfgi_direct_light.glsl.gen.h \
  servers/rendering/renderer_rd/shaders/environment/sdfgi_integrate.glsl.gen.h \
  servers/rendering/renderer_rd/shaders/environment/sdfgi_preprocess.glsl.gen.h \
  servers/rendering/renderer_rd/shaders/environment/voxel_gi.glsl.gen.h \
  servers/rendering/renderer_rd/shaders/environment/voxel_gi_debug.glsl.gen.h \
  servers/rendering/renderer_rd/storage_rd/render_buffer_custom_data_rd.h \
  servers/rendering/renderer_rd/shaders/environment/volumetric_fog.glsl.gen.h \
  servers/rendering/renderer_rd/shaders/environment/volumetric_fog_process.glsl.gen.h \
  servers/rendering/renderer_rd/storage_rd/../environment/gi.h \
  servers/rendering/renderer_rd/storage_rd/light_storage.h \
  servers/rendering/renderer_rd/storage_rd/render_scene_buffers_rd.h \
  servers/rendering/renderer_rd/storage_rd/../effects/fsr2.h \
  servers/rendering/renderer_rd/shaders/effects/fsr2/fsr2_accumulate_pass.glsl.gen.h \
  servers/rendering/renderer_rd/shaders/effects/fsr2/fsr2_autogen_reactive_pass.glsl.gen.h \
  servers/rendering/renderer_rd/shaders/effects/fsr2/fsr2_compute_luminance_pyramid_pass.glsl.gen.h \
  servers/rendering/renderer_rd/shaders/effects/fsr2/fsr2_depth_clip_pass.glsl.gen.h \
  servers/rendering/renderer_rd/shaders/effects/fsr2/fsr2_lock_pass.glsl.gen.h \
  servers/rendering/renderer_rd/shaders/effects/fsr2/fsr2_rcas_pass.glsl.gen.h \
  servers/rendering/renderer_rd/shaders/effects/fsr2/fsr2_reconstruct_previous_depth_pass.glsl.gen.h \
  servers/rendering/renderer_rd/shaders/effects/fsr2/fsr2_tcr_autogen_pass.glsl.gen.h \
  thirdparty/amd-fsr2/ffx_fsr2.h \
  thirdparty/amd-fsr2/ffx_fsr2_interface.h \
  thirdparty/amd-fsr2/ffx_assert.h thirdparty/amd-fsr2/ffx_types.h \
  thirdparty/amd-fsr2/ffx_util.h thirdparty/amd-fsr2/ffx_error.h \
  thirdparty/amd-fsr2/shaders/ffx_fsr2_resources.h \
  thirdparty/amd-fsr2/shaders/ffx_fsr2_common.h \
  servers/rendering/renderer_rd/storage_rd/../effects/vrs.h \
  servers/rendering/renderer_rd/shaders/effects/vrs.glsl.gen.h \
  servers/rendering/renderer_rd/storage_rd/../framebuffer_cache_rd.h \
  servers/rendering/rendering_device_binds.h \
  servers/rendering/renderer_rd/storage_rd/mesh_storage.h \
  servers/rendering/renderer_rd/storage_rd/../../rendering_server_globals.h \
  servers/rendering/renderer_rd/shaders/skeleton.glsl.gen.h \
  servers/rendering/renderer_rd/storage_rd/particles_storage.h \
  servers/rendering/renderer_rd/effects/sort_effects.h \
  servers/rendering/renderer_rd/shaders/effects/sort.glsl.gen.h \
  servers/rendering/renderer_rd/shaders/particles.glsl.gen.h \
  servers/rendering/renderer_rd/shaders/particles_copy.glsl.gen.h
