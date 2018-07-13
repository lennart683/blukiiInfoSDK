Pod::Spec.new do |s|
  s.name             = "blukiiInfoSDK"
  s.version          = "1.0.8"
  s.summary          = "blukiiInfoSDK is a library for find and resolve blukii Beacons/Sensors or Keys"
  s.homepage         = "http://www.blukii.com/"
  s.documentation_url = "https://github.com/schneiderma/blukii_developer/tree/gh-pages/iOS/blukii-Info-SDK"
  s.author           = { "blukii" => "support@blukii.com" }
  s.platform         = :ios
  s.source           = { :git => "https://github.com/lennart683/blukiiInfoSDK.git", :tag => s.version.to_s }
  s.source_files     =  'blukiiInfoSDK/blukiiInfo.framework/Headers/*.h'
  s.vendored_frameworks = "blukiiInfoSDK/blukiiInfo.framework"
  s.ios.deployment_target = '8.0'
  s.frameworks = 'CoreBluetooth'
  s.license      = { :type => 'Apache', :file => 'LICENSE' }
end
