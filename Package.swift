// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterPowerbuilder",
    products: [
        .library(name: "TreeSitterPowerbuilder", targets: ["TreeSitterPowerbuilder"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterPowerbuilder",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterPowerbuilderTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterPowerbuilder",
            ],
            path: "bindings/swift/TreeSitterPowerbuilderTests"
        )
    ],
    cLanguageStandard: .c11
)
