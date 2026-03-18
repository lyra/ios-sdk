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
            checksum: "507f68adac474009c6db94df169441c8b9d0102c8cdff59cc067cbda96675bba"
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
