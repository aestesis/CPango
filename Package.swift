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
        .systemLibrary(name: "CPango")
    ]
)