Pod::Spec.new do |s|
  s.name             = 'LyraPaymentSDK'
  s.version          = '2.2.0'
  s.summary          = 'LyraPaymentSDK allows you to make payments from your iOS mobile App :)'

  s.homepage         = 'https://github.com/lyra/ios-sdk'
  s.license          = { :type => 'MIT', :file => 'LICENSE.md' }
  s.author           = { 'Lyra Dev Mobile' => 'dev-mobile@lyra-network.com' }
  s.source           = { :git => 'https://github.com/lyra/ios-sdk.git', :tag => s.version.to_s }

  s.ios.deployment_target = '11.0'

  s.swift_version = '5.1'

  s.ios.vendored_frameworks = 'LyraPaymentSDK.xcframework'

  s.dependency 'Material', '~> 3.1.8'
  s.dependency 'SnapKit', '~> 5.0.1'
  s.dependency 'Sentry', '~> 7.13.0'
  s.dependency 'sentry_client_cocoa'

  s.subspec 'AdditionalSDK' do |subspec|
        subspec.dependency 'LyraCardsRecognizer'
  end
end
