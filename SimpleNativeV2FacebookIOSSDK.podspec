Pod::Spec.new do |spec|
  spec.name = "SimpleNativeV2FacebookIOSSDK"
  spec.version="0.3.17"
  spec.summary= "Simple SDK V2 for include Facebook"
  spec.description= <<-DESC
  Simple SDK V2 for include Facebook, please includ the core sdk more
  DESC
  spec.homepage= 'https://github.com/bepic-games/SimpleNativeV2FacebookIOSSDK'
  spec.license= { :type => 'MIT', :file => 'LICENSE' }
  spec.author = { "yilang" => "yilang@bepic.cc" }
  spec.ios.deployment_target = "11.0"
  spec.source = { :git => "https://github.com/bepic-games/SimpleNativeV2FacebookIOSSDK.git", :tag => "#{spec.version}" }
  spec.source_files= 'SimpleNativeV2FacebookIOSSDK/*.{framework}/Headers/*.h'
  spec.vendored_frameworks = 'SimpleNativeV2FacebookIOSSDK/*.{framework}'
  spec.public_header_files = 'SimpleNativeV2FacebookIOSSDK/*.{framework}/Headers/*.h'
  spec.pod_target_xcconfig = { 'VALID_ARCHS' => 'arm64' }
  spec.dependency 'FBSDKLoginKit','13.0.0'
end
