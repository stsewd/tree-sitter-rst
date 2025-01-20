from os.path import isdir, join, dirname
from platform import system

from setuptools import Extension, find_packages, setup
from wheel.bdist_wheel import bdist_wheel


class BdistWheel(bdist_wheel):
    def get_tag(self):
        python, abi, platform = super().get_tag()
        if python.startswith("cp"):
            python, abi = "cp310", "abi3"
        return python, abi, platform


root = dirname(__file__)

setup(
    packages=find_packages("bindings/python"),
    package_dir={"": "bindings/python"},
    package_data={
        "tree_sitter_rst": ["*.pyi", "py.typed"],
    },
    ext_package="tree_sitter_rst",
    ext_modules=[
        Extension(
            name="_binding",
            sources=[
                "bindings/python/tree_sitter_rst/binding.c",
                "src/parser.c",
                "src/scanner.c",
            ],
            extra_compile_args=[
                "-std=c11",
                "-fvisibility=hidden",
            ] if system() != "Windows" else [
                "/std:c11",
                "/utf-8",
            ],
            define_macros=[
                ("Py_LIMITED_API", "0x03090000"),
                ("PY_SSIZE_T_CLEAN", None),
                ("TREE_SITTER_HIDE_SYMBOLS", None),
            ],
            include_dirs=[f"{root}/src", f"{root}/src/tree_sitter_rst"],
            py_limited_api=True,
        )
    ],
    cmdclass={
        "bdist_wheel": BdistWheel
    },
    zip_safe=False
)
