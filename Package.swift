// swift-tools-version:4.0
import PackageDescription

let package = Package(
    name: "CPango",
    pkgConfig: "pango,freetype2",
    providers: [ 
    	.apt(["libpango1.0-dev freetype2"]) 
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