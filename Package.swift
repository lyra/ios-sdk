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
            exact: "1.0.1"
        )
    ],
    targets: [
        .binaryTarget(
            name: "LyraPaymentSDKBinary",
            url: "https://raw.githubusercontent.com/lyra/ios-sdk/2.8.11/LyraPaymentSDK.xcframework.zip",
            checksum: "f8cfde2f84b0eefdb1ea4f7c94091d4b43a97dad9ffa8147e183eccd4a13be60"
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
