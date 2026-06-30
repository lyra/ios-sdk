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
            checksum: "224d001dfc5df7388b0a8f8588882891b1b3f7fce877c266cea8a1c753293f76"
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