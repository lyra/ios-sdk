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
            url: "https://raw.githubusercontent.com/lyra/ios-sdk/4.2.1/LyraPaymentSDK.xcframework.zip",
            checksum: "ffa25c0e10f5f15fcbda10ad27fdf753cc3f408e136818c2350c27af59ee3be2"
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
