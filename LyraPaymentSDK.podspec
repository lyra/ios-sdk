Pod::Spec.new do |s|
  s.name             = 'LyraPaymentSDK'
  s.version          = '2.8.2'
  s.summary          = 'LyraPaymentSDK allows you to make payments from your iOS mobile App :)'

  s.homepage         = 'https://github.com/lyra/ios-sdk'
  s.license          = { :type => 'MIT', :file => 'LICENSE.md' }
  s.author           = { 'Lyra Dev Mobile' => 'dev-mobile@lyra-network.com' }
  s.source           = { :git => 'https://github.com/lyra/ios-sdk.git', :tag => s.version.to_s }

  s.ios.deployment_target = '15.1'

  s.swift_version = '5.1'

  s.ios.vendored_frameworks = 'LyraPaymentSDK.xcframework'

  s.dependency 'LyraMaterial', '~> 1.0.6'
  s.dependency 'LyraMotion', '~> 4.0.2'
  s.dependency 'SnapKit', '~> 5.7.1'
  
  s.subspec 'AdditionalSDK' do |subspec|
        subspec.dependency 'LyraCardsRecognizer'
  end
end
