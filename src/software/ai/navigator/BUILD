package(default_visibility = ["//visibility:public"])

cc_library(
    name = "util",
    srcs = ["util.cpp"],
    hdrs = ["util.h"],
    deps = [
        "//software/ai/primitive:move_primitive",
        "//software/geom",
    ],
)

cc_test(
    name = "util_test",
    srcs = ["util_test.cpp"],
    deps = [
        ":util",
        "@gtest//:gtest_main",
    ],
)

cc_library(
    name = "navigator",
    srcs = ["navigator.cpp"],
    hdrs = ["navigator.h"],
    visibility = ["//visibility:public"],
    deps = [
        ":util",
        "//software/ai/intent",
        "//software/ai/intent:all_intents",
        "//software/ai/intent:intent_visitor",
        "//software/ai/navigator/obstacle",
        "//software/ai/navigator/path_planner:straight_line_path_planner",
        "//software/ai/navigator/path_planner:theta_star_path_planner",
        "//software/ai/primitive:all_primitives",
        "//software/util/parameter:dynamic_parameters",
        "//software/world",
    ],
)

cc_test(
    name = "navigator_test",
    srcs = ["navigator_test.cpp"],
    deps = [
        ":navigator",
        "//software/test_util",
        "@gtest//:gtest_main",
    ],
)
