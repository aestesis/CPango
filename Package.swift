// swift-tools-version:4.2

import PackageDescription

let package = Package(
    name: "CPango",
	products: [
        .library(name: "CPango",targets: ["CPango"])
    ],
    dependencies: [
    ],
    targets: [
        .systemLibrary(name: "CPango",
            pkgConfig: "pango",
	        providers: [
		        .brew(["pango", "glib", "glib-networking", "gobject-introspection"]),
		        .apt(["libpango1.0-dev", "libglib2.0-dev", "glib-networking", "gobject-introspection", "libgirepository1.0-dev"])
	        ]
        )
    ]
)