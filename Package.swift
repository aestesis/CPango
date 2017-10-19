// swift-tools-version:4.0
import PackageDescription

let package = Package(
    name: "CPango",
    pkgConfig: "pango",
    providers: [ 
    	.apt(["libpango1.0-dev freetype"]) 
    ],
	products: [
        .library(name: "CPango",targets: ["CPango"])
    ],
    dependencies: [
    ],
    targets: [
        .target(name: "CPango",dependencies: [])
    ]
)