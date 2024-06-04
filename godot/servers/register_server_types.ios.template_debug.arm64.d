dependencies: servers/register_server_types.cpp \
  servers/register_server_types.h core/config/engine.h \
  core/os/main_loop.h core/input/input_event.h core/input/input_enums.h \
  core/io/resource.h core/io/resource_uid.h core/object/ref_counted.h \
  core/object/class_db.h core/object/method_bind.h \
  core/variant/binder_common.h core/object/object.h \
  core/extension/gdextension_interface.h core/object/message_queue.h \
  core/object/object_id.h core/typedefs.h platform/ios/platform_config.h \
  core/error/error_list.h core/os/thread_safe.h core/os/mutex.h \
  core/error/error_macros.h core/templates/local_vector.h \
  core/os/memory.h core/templates/safe_refcount.h \
  core/templates/sort_array.h core/templates/vector.h \
  core/templates/cowdata.h core/templates/search_array.h \
  core/templates/paged_allocator.h core/core_globals.h \
  core/os/spin_lock.h core/string/ustring.h core/string/char_utils.h \
  core/string/char_range.inc core/variant/array.h core/variant/variant.h \
  core/io/ip_address.h core/math/aabb.h core/math/plane.h \
  core/math/vector3.h core/math/math_funcs.h core/math/math_defs.h \
  core/math/random_pcg.h thirdparty/misc/pcg.h core/math/basis.h \
  core/math/quaternion.h core/math/color.h core/math/face3.h \
  core/math/transform_3d.h core/math/projection.h core/math/vector4.h \
  core/math/rect2.h core/math/vector2.h core/math/rect2i.h \
  core/math/vector2i.h core/math/transform_2d.h core/math/vector3i.h \
  core/math/vector4i.h core/os/keyboard.h core/string/node_path.h \
  core/string/string_name.h core/templates/rid.h core/variant/callable.h \
  core/templates/list.h core/variant/dictionary.h core/os/rw_lock.h \
  core/templates/hash_map.h core/templates/hashfuncs.h \
  core/templates/pair.h core/templates/hash_set.h \
  core/templates/rb_map.h core/variant/callable_bind.h \
  core/templates/simple_type.h core/variant/method_ptrcall.h \
  core/variant/type_info.h core/variant/variant_internal.h \
  core/string/print_string.h core/object/callable_method_pointer.h \
  core/disabled_classes.gen.h core/object/gdvirtual.gen.inc \
  core/object/script_instance.h core/templates/self_list.h \
  core/config/project_settings.h core/templates/rb_set.h \
  servers/audio/audio_effect.h core/math/audio_frame.h \
  core/variant/native_ptr.h servers/audio/audio_stream.h core/io/image.h \
  servers/audio/audio_filter_sw.h servers/audio_server.h core/os/os.h \
  core/io/logger.h core/io/file_access.h core/io/compression.h \
  core/io/remote_filesystem_client.h core/os/time_enums.h \
  core/templates/safe_list.h \
  servers/audio/effects/audio_effect_amplify.h \
  servers/audio/effects/audio_effect_capture.h \
  core/templates/ring_buffer.h \
  servers/audio/effects/audio_effect_chorus.h \
  servers/audio/effects/audio_effect_compressor.h \
  servers/audio/effects/audio_effect_delay.h \
  servers/audio/effects/audio_effect_distortion.h \
  servers/audio/effects/audio_effect_eq.h \
  servers/audio/effects/eq_filter.h \
  servers/audio/effects/audio_effect_filter.h \
  servers/audio/effects/audio_effect_limiter.h \
  servers/audio/effects/audio_effect_panner.h \
  servers/audio/effects/audio_effect_phaser.h \
  servers/audio/effects/audio_effect_pitch_shift.h \
  servers/audio/effects/audio_effect_record.h core/io/marshalls.h \
  core/os/thread.h scene/resources/audio_stream_wav.h \
  servers/audio/effects/audio_effect_reverb.h \
  servers/audio/effects/reverb_filter.h \
  servers/audio/effects/audio_effect_spectrum_analyzer.h \
  servers/audio/effects/audio_effect_stereo_enhance.h \
  servers/audio/effects/audio_stream_generator.h \
  servers/camera/camera_feed.h servers/camera_server.h \
  servers/rendering_server.h core/math/geometry_3d.h \
  core/variant/typed_array.h servers/display_server.h core/input/input.h \
  servers/rendering/rendering_device.h \
  servers/debugger/servers_debugger.h core/debugger/debugger_marshalls.h \
  core/object/script_language.h core/doc_data.h core/io/xml_parser.h \
  servers/movie_writer/movie_writer.h servers/audio/audio_driver_dummy.h \
  servers/movie_writer/movie_writer_mjpeg.h \
  servers/movie_writer/movie_writer_pngwav.h \
  servers/navigation_server_2d.h \
  scene/resources/navigation_mesh_source_geometry_data_2d.h \
  scene/2d/node_2d.h scene/main/canvas_item.h scene/main/node.h \
  scene/main/scene_tree.h scene/resources/mesh.h \
  core/math/triangle_mesh.h scene/resources/material.h \
  scene/resources/shader.h core/io/resource_loader.h \
  core/object/worker_thread_pool.h core/os/semaphore.h \
  core/io/resource_saver.h scene/resources/texture.h \
  scene/resources/curve.h scene/resources/gradient.h \
  thirdparty/misc/ok_color.h scene/resources/shader_include.h \
  scene/resources/canvas_item_material.h scene/resources/font.h \
  core/templates/lru.h servers/text_server.h \
  scene/resources/navigation_polygon.h scene/resources/navigation_mesh.h \
  servers/navigation/navigation_path_query_parameters_2d.h \
  servers/navigation/navigation_utilities.h \
  servers/navigation/navigation_path_query_result_2d.h \
  servers/navigation_server_3d.h \
  scene/resources/navigation_mesh_source_geometry_data_3d.h \
  scene/3d/visual_instance_3d.h scene/3d/node_3d.h \
  scene/resources/world_3d.h scene/resources/environment.h \
  scene/resources/sky.h servers/physics_server_3d.h \
  servers/navigation/navigation_path_query_parameters_3d.h \
  servers/navigation/navigation_path_query_result_3d.h \
  servers/physics_2d/godot_physics_server_2d.h \
  servers/physics_2d/godot_joints_2d.h \
  servers/physics_2d/godot_body_2d.h servers/physics_2d/godot_area_2d.h \
  servers/physics_2d/godot_collision_object_2d.h \
  servers/physics_2d/godot_broad_phase_2d.h \
  servers/physics_2d/godot_shape_2d.h servers/physics_server_2d.h \
  core/templates/vset.h servers/physics_2d/godot_constraint_2d.h \
  servers/physics_2d/godot_space_2d.h \
  servers/physics_2d/godot_area_pair_2d.h \
  servers/physics_2d/godot_body_pair_2d.h \
  servers/physics_2d/godot_step_2d.h core/templates/rid_owner.h \
  core/templates/oa_hash_map.h \
  servers/physics_3d/godot_physics_server_3d.h \
  servers/physics_3d/godot_joint_3d.h servers/physics_3d/godot_body_3d.h \
  servers/physics_3d/godot_area_3d.h \
  servers/physics_3d/godot_collision_object_3d.h \
  servers/physics_3d/godot_broad_phase_3d.h \
  servers/physics_3d/godot_shape_3d.h \
  servers/physics_3d/godot_constraint_3d.h \
  servers/physics_3d/godot_space_3d.h \
  servers/physics_3d/godot_area_pair_3d.h \
  servers/physics_3d/godot_soft_body_3d.h core/math/dynamic_bvh.h \
  servers/physics_3d/godot_body_pair_3d.h \
  servers/physics_3d/godot_step_3d.h servers/physics_server_2d_wrap_mt.h \
  core/templates/command_queue_mt.h servers/server_wrap_mt_common.h \
  servers/physics_server_3d_wrap_mt.h \
  servers/rendering/renderer_compositor.h \
  servers/rendering/environment/renderer_fog.h \
  servers/rendering/environment/renderer_gi.h \
  servers/rendering/renderer_canvas_render.h \
  servers/rendering/rendering_method.h \
  servers/rendering/storage/render_scene_buffers.h \
  servers/xr/xr_interface.h servers/xr_server.h \
  servers/rendering/storage/camera_attributes_storage.h \
  servers/rendering/storage/light_storage.h \
  servers/rendering/storage/material_storage.h \
  servers/rendering/storage/utilities.h \
  servers/rendering/storage/mesh_storage.h \
  servers/rendering/storage/particles_storage.h \
  servers/rendering/storage/texture_storage.h \
  servers/rendering/renderer_rd/storage_rd/render_scene_buffers_rd.h \
  servers/rendering/renderer_rd/storage_rd/../effects/fsr2.h \
  servers/rendering/renderer_rd/shaders/effects/fsr2/fsr2_accumulate_pass.glsl.gen.h \
  servers/rendering/renderer_rd/shader_rd.h core/string/string_builder.h \
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
  servers/rendering/renderer_rd/pipeline_cache_rd.h \
  servers/rendering/renderer_rd/shaders/effects/vrs.glsl.gen.h \
  servers/rendering/renderer_scene_render.h core/templates/paged_array.h \
  servers/rendering/renderer_geometry_instance.h \
  servers/rendering/storage/environment_storage.h \
  servers/rendering/renderer_rd/storage_rd/../framebuffer_cache_rd.h \
  servers/rendering/renderer_rd/storage_rd/material_storage.h \
  servers/rendering/renderer_rd/storage_rd/texture_storage.h \
  servers/rendering/renderer_rd/shaders/canvas_sdf.glsl.gen.h \
  servers/rendering/renderer_rd/storage_rd/forward_id_storage.h \
  servers/rendering/rendering_server_default.h \
  servers/rendering/renderer_canvas_cull.h \
  servers/rendering/renderer_viewport.h \
  servers/rendering/renderer_scene_cull.h \
  core/templates/bin_sorted_array.h core/templates/pass_func.h \
  servers/rendering/renderer_scene_occlusion_cull.h \
  servers/rendering/rendering_server_globals.h \
  servers/rendering/shader_compiler.h \
  servers/rendering/shader_language.h \
  servers/rendering/shader_warnings.h \
  servers/rendering/renderer_rd/storage_rd/render_buffer_custom_data_rd.h \
  servers/rendering/rendering_device_binds.h \
  servers/extensions/physics_server_2d_extension.h \
  core/extension/ext_wrappers.gen.inc \
  servers/extensions/physics_server_3d_extension.h \
  servers/rendering/shader_types.h servers/text/text_server_dummy.h \
  servers/text/text_server_extension.h \
  servers/xr/xr_interface_extension.h servers/xr/xr_positional_tracker.h \
  servers/xr/xr_pose.h
