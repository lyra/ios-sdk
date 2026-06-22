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
            url: "https://raw.githubusercontent.com/lyra/ios-sdk/2.8.12/LyraPaymentSDK.xcframework.zip",
            checksum: "03b4500e0b5a52750be5ef8d23b0721f536d144d5146408340285a711da832df"
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
