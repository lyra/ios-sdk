// swift-tools-version: 6.2
import PackageDescription

let package = Package(
    name: "LyraPaymentSDK",
    platforms: [
        .iOS(.v13)
    ],
    products: [
        .library(
            name: "LyraPaymentSDK",
            targets: ["LyraPaymentSDKTarget"]
        )
    ],
    dependencies: [
        .package(
            url: "https://github.com/lyra/Material.git",
            exact: "1.0.9"
        ), 
        .package(
            url: "https://github.com/lyra/SnapKit.git",
            exact: "1.0.0"
        )
    ],
    targets: [
        .binaryTarget(
            name: "LyraPaymentSDKBinary",
            url: "https://raw.githubusercontent.com/lyra/ios-sdk/2.8.8/LyraPaymentSDK.xcframework.zip",
            checksum: "b05ea94b21671e7156cefa0702a3e332050fcacb54fe45bbb633bf7aeb74483e"
        ),
        .target(
            name: "LyraPaymentSDKTarget",
            dependencies: [
                "LyraPaymentSDKBinary",
                .product(name: "LyraMaterial", package: "Material"),
                .product(name: "SnapKit", package: "SnapKit")
            ]
        )
    ]
)
