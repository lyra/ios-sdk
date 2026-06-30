// swift-tools-version: 6.2
import PackageDescription
let package = Package(
    name: "LyraPaymentSDK",
    platforms: [
        .iOS(.v26)
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
            exact: "1.0.10"
        ),
        .package(
            url: "https://github.com/lyra/card-scan-ios.git",
            exact: "1.0.0"
        )
    ],
    targets: [
        .binaryTarget(
            name: "LyraPaymentSDKBinary",
            url: "https://raw.githubusercontent.com/lyra/ios-sdk/4.0.1/LyraPaymentSDK.xcframework.zip",
            checksum: "ab4cfaff710d62e75364743ec5c6a089bb2ac5592ff743512c080032817fa830"
        ),
        .target(
            name: "LyraPaymentSDKTarget",
            dependencies: [
                "LyraPaymentSDKBinary",
                .product(name: "LyraMaterial", package: "Material"),
                .product(name: "LyraCardScan", package: "card-scan-ios")
            ]
        )
    ]
)