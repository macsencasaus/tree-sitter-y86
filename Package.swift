// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterY86",
    products: [
        .library(name: "TreeSitterY86", targets: ["TreeSitterY86"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterY86",
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
            name: "TreeSitterY86Tests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterY86",
            ],
            path: "bindings/swift/TreeSitterY86Tests"
        )
    ],
    cLanguageStandard: .c11
)
