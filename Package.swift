// swift-tools-version: 5.6
import PackageDescription
let package = Package(
    name: "LyraPaymentSDK",
    platforms: [
        .iOS(.v15)
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
            exact: "1.0.11"
        ),
        .package(
            url: "https://github.com/lyra/card-scan-ios.git",
            exact: "1.0.1"
        )
    ],
    targets: [
        .binaryTarget(
            name: "LyraPaymentSDKBinary",
            url: "https://raw.githubusercontent.com/lyra/ios-sdk/4.0.3/LyraPaymentSDK.xcframework.zip",
            checksum: "9d9122a380344daf023182e443aa231e21b7ebdb81567e8b14edcd58ed3f29c8"
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
