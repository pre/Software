package(default_visibility = ["//visibility:public"])

cc_library(
    name = "evaluation",
    srcs = ["evaluation.cpp"],
    hdrs = ["evaluation.h"],
    deps = [
        ":pass",
        "//software/ai/evaluation:pass",
        "//software/geom",
        "//software/util/math:math_functions",
        "//software/world",
    ],
)

cc_test(
    name = "evaluation_test",
    srcs = ["evaluation_test.cpp"],
    deps = [
        ":evaluation",
        "//software/test_util",
        "//software/util/math:math_functions",
        "@gtest//:gtest_main",
    ],
)

cc_library(
    name = "pass",
    srcs = ["pass.cpp"],
    hdrs = ["pass.h"],
    deps = [
        "//software/geom",
        "//software/util/time:timestamp",
        "//software/world:field",
    ],
)

cc_test(
    name = "pass_test",
    srcs = ["pass_test.cpp"],
    deps = [
        ":pass",
        "//software/test_util",
        "@gtest//:gtest_main",
    ],
)

cc_library(
    name = "pass_with_rating",
    hdrs = ["pass_with_rating.h"],
    deps = [
        ":pass",
    ],
)

cc_library(
    name = "pass_generator",
    srcs = ["pass_generator.cpp"],
    hdrs = ["pass_generator.h"],
    deps = [
        ":evaluation",
        ":pass",
        ":pass_with_rating",
        "//software/util/optimization:gradient_descent",
        "//software/world",
    ],
)

# TODO: (Issue #655) un-comment this and fix the flaky tests in it
#cc_test(
#    name = "pass_generator_test",
#    srcs = ["pass_generator_test.cpp"],
#    deps = [
#        ":pass_generator",
#        "//software/test_util",
#        "@gtest//:gtest_main",
#    ],
#)
