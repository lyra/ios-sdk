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
            exact: "1.0.2"
        )
    ],
    targets: [
        .binaryTarget(
            name: "LyraPaymentSDKBinary",
            url: "https://raw.githubusercontent.com/lyra/ios-sdk/4.2.0/LyraPaymentSDK.xcframework.zip",
            checksum: "bcbe60585929a8cd6c4c0b4e11609e268693db9ae749b6a5950c9e854d9618be"
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
